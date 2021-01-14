/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCGreatStoriesYouMissedGroupEmitterOperation : FCFeedGroupEmittingOperation {

	unsigned long long _restrictToBestSourceFeeds;

}

@property (assign,nonatomic) unsigned long long restrictToBestSourceFeeds;              //@synthesize restrictToBestSourceFeeds=_restrictToBestSourceFeeds - In the implementation block
-(void)performOperation;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 ;
-(id)_feedTransformation;
-(unsigned long long)restrictToBestSourceFeeds;
-(void)setRestrictToBestSourceFeeds:(unsigned long long)arg1 ;
@end

