//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScriptCommand.h"

@interface PBXBuildScriptCommand : NSScriptCommand
{
    BOOL _returnLog;
}

- (void)buildOperationDidStop:(id)arg1;
- (id)buildTarget:(id)arg1;
- (id)buildTarget:(id)arg1 withAction:(id)arg2;
- (id)buildProject:(id)arg1;
- (id)buildProject:(id)arg1 withAction:(id)arg2;

@end
