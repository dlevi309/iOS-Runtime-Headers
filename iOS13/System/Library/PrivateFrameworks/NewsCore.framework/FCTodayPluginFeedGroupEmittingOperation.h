/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCTodayPluginFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {

	long long _bridgedGroupType;

}

@property (nonatomic,readonly) long long bridgedGroupType;              //@synthesize bridgedGroupType=_bridgedGroupType - In the implementation block
-(void)performOperation;
-(void)_performOperation;
-(BOOL)validateOperation;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 ;
-(long long)bridgedGroupType;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 bridgedGroupType:(long long)arg5 ;
@end

