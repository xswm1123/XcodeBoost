//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCLayout.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface XCFlowLayout : NSObject <XCLayout>
{
    double _topMargin;
    double _bottomMargin;
    double _leftMargin;
    double _rightMargin;
    double _innerMargin;
    double _minDelta;
    double _minHeight;
    double _minWidth;
    BOOL _obeyMinWidth;
    BOOL _obeyMinHeight;
    BOOL _isHorizontalLayout;
    int _verticalJustification;
    int _horizontalJustification;
    NSMutableArray *_positionedViews;
    NSMutableArray *_positionedViewLocations;
    NSMutableDictionary *_bestDelta;
    NSMutableDictionary *_bestPercentage;
    BOOL _layoutRequired;
    NSString *_name;
    struct CGSize _minSize;
    struct CGSize *_viewMinSizes;
    BOOL _useVisibleRect;
    BOOL _snappingEnabled;
    BOOL _inLayout;
}

- (struct CGSize)minSizeOfView:(id)arg1;
- (double)deltaForRects:(struct CGRect *)arg1 ofCapacity:(long long)arg2 inControlView:(id)arg3;
- (double)spaceAvailableForCapacity:(long long)arg1 inControlView:(id)arg2;
- (double)truncateRects:(struct CGRect *)arg1 ofCapacity:(long long)arg2 byAmount:(double)arg3 inControlView:(id)arg4 usingMinimumIndividualDelta:(double)arg5;
- (double)compactRects:(struct CGRect *)arg1 ofCapacity:(long long)arg2 byAmount:(double)arg3 inControlView:(id)arg4 usingMinimumIndividualDelta:(double)arg5;
- (void)spaceRects:(struct CGRect *)arg1 ofCapacity:(long long)arg2 atIndex:(long long)arg3 inControlView:(id)arg4;
- (void)alignRects:(struct CGRect *)arg1 ofCapacity:(long long)arg2 inControlView:(id)arg3;
- (void)recomputeMinimumSize;
- (id)views;
- (struct CGSize)minSize;
- (void)setSnappingEnabled:(BOOL)arg1;
- (BOOL)snappingEnabled;
- (void)setName:(id)arg1;
- (id)name;
- (void)setHorizontalJustification:(int)arg1;
- (int)horizontalJustification;
- (void)setVerticalJustification:(int)arg1;
- (int)verticalJustification;
- (void)setUseVisibleRect:(BOOL)arg1;
- (BOOL)useVisibleRect;
- (void)setIsHorizontalLayout:(BOOL)arg1;
- (BOOL)isHorizontalLayout;
- (void)setObeyMinWidth:(BOOL)arg1;
- (BOOL)obeyMinWidth;
- (void)setObeyMinHeight:(BOOL)arg1;
- (BOOL)obeyMinHeight;
- (void)setMinWidth:(double)arg1;
- (double)minWidth;
- (void)setMinHeight:(double)arg1;
- (double)minHeight;
- (void)setInnerMargin:(double)arg1;
- (double)innerMargin;
- (void)setRightMargin:(double)arg1;
- (double)rightMargin;
- (void)setLeftMargin:(double)arg1;
- (double)leftMargin;
- (void)setBottomMargin:(double)arg1;
- (double)bottomMargin;
- (void)setTopMargin:(double)arg1;
- (double)topMargin;
- (double)growViewVertically:(id)arg1 allFollowingViews:(BOOL)arg2 byDelta:(double)arg3 onEvent:(id)arg4 inControlView:(id)arg5 usingMinimumIndividualHeight:(double)arg6;
- (double)growViewHorizontally:(id)arg1 allFollowingViews:(BOOL)arg2 byDelta:(double)arg3 onEvent:(id)arg4 inControlView:(id)arg5 usingMinimumIndividualWidth:(double)arg6;
- (void)collapseView:(id)arg1 inControlView:(id)arg2;
- (void)expandView:(id)arg1 minimumDelta:(double)arg2 inControlView:(id)arg3;
- (void)horizontallyLayoutViews:(id)arg1 withinBounds:(struct CGRect)arg2 inControlView:(id)arg3;
- (void)verticallyLayoutViews:(id)arg1 withinBounds:(struct CGRect)arg2 inControlView:(id)arg3;
- (void)layoutViews:(id)arg1 inControlView:(id)arg2;
- (void)clearAllProportions;
- (void)clearDeltas;
- (void)clearPercentages;
- (void)setEvenPercentageDistribution;
- (void)setBestPercentage:(double)arg1 forLocation:(id)arg2;
- (void)setBestDelta:(double)arg1 forLocation:(id)arg2;
- (struct CGRect)bestFrame:(id)arg1 withinBounds:(struct CGRect)arg2;
- (void)sizeToBestSize:(id)arg1 withinBounds:(struct CGRect)arg2;
- (void)restoreRects:(struct CGRect *)arg1 forViews:(id)arg2 inControlView:(id)arg3;
- (struct CGRect *)rectsForViews:(id)arg1;
- (void)alignViews:(id)arg1 inControlView:(id)arg2;
- (long long)openAreaIndexInViews:(id)arg1 atLocation:(struct CGPoint)arg2 area:(int *)arg3 inControlView:(id)arg4;
- (void)spaceViews:(id)arg1 atIndex:(long long)arg2 inControlView:(id)arg3;
- (void)compactViews:(id)arg1 byAmount:(double)arg2 inControlView:(id)arg3;
- (double)deltaForViews:(id)arg1 inControlView:(id)arg2;
- (double)spaceAvailableForViews:(id)arg1 usingMinimumDelta:(double)arg2 inControlView:(id)arg3;
- (id)sortedViewsByLocation:(id)arg1;
- (id)viewAtLocation:(id)arg1;
- (id)locationOfView:(id)arg1;
- (void)removeView:(id)arg1;
- (void)positionView:(id)arg1 atLocation:(id)arg2 inSuperview:(id)arg3;
- (void)positionView:(id)arg1 atLocation:(id)arg2;
- (void)_removeViewAndLocationIfSet:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end
