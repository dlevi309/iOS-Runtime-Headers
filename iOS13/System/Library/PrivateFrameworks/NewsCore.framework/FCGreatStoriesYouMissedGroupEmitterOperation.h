/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCGreatStoriesYouMissedGroupEmitterOperation : FCFeedGroupEmittingOperation {

	unsigned long long _limit;
	unsigned long long _restrictToBestSourceFeeds;

}

@property (assign,nonatomic) unsigned long long limit;                                  //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) unsigned long long restrictToBestSourceFeeds;              //@synthesize restrictToBestSourceFeeds=_restrictToBestSourceFeeds - In the implementation block
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)performOperation;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 ;
-(id)_feedTransformation;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 limit:(unsigned long long)arg5 restrictToBestSourceFeeds:(BOOL)arg6 ;
-(unsigned long long)restrictToBestSourceFeeds;
-(void)setRestrictToBestSourceFeeds:(unsigned long long)arg1 ;
@end

