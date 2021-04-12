/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedDescriptor.h>

@protocol FCFeedTheming, FCChannelProviding;
@class NSArray;

@interface FCLocalFeedDescriptor : FCFeedDescriptor {

	NSArray* _paths;
	id<FCFeedTheming> _feedTheme;
	id<FCChannelProviding> _channel;

}

@property (nonatomic,readonly) NSArray * paths;                           //@synthesize paths=_paths - In the implementation block
@property (nonatomic,retain) id<FCFeedTheming> feedTheme;                 //@synthesize feedTheme=_feedTheme - In the implementation block
@property (nonatomic,retain) id<FCChannelProviding> channel;              //@synthesize channel=_channel - In the implementation block
-(id)name;
-(id<FCChannelProviding>)channel;
-(NSArray *)paths;
-(void)setChannel:(id<FCChannelProviding>)arg1 ;
-(id)theme;
-(BOOL)isSubscribable;
-(id)streamOfLatestHeadlinesWithContext:(id)arg1 ;
-(long long)feedType;
-(id<FCFeedTheming>)feedTheme;
-(id)initWithIdentifier:(id)arg1 articlePaths:(id)arg2 theme:(id)arg3 channel:(id)arg4 ;
-(id)fetchOperationForHeadlinesWithIDs:(id)arg1 ;
-(BOOL)isSubscribedTo;
-(void)setFeedTheme:(id<FCFeedTheming>)arg1 ;
@end

