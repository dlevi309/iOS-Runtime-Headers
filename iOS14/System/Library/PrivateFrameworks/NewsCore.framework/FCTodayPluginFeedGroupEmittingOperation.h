/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCTodayPluginFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {

	long long _bridgedGroupType;

}

@property (nonatomic,readonly) long long bridgedGroupType;              //@synthesize bridgedGroupType=_bridgedGroupType - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 ;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 bridgedGroupType:(long long)arg5 ;
-(long long)bridgedGroupType;
-(void)_performOperation;
@end

