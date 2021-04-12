/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCChannelProviding;
@class NSArray;

@interface FCChannelSectionHeadlinesFetchResult : NSObject {

	id<FCChannelProviding> _channel;
	NSArray* _sectionHeadlinesGroups;

}

@property (nonatomic,retain) id<FCChannelProviding> channel;                //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) NSArray * sectionHeadlinesGroups;              //@synthesize sectionHeadlinesGroups=_sectionHeadlinesGroups - In the implementation block
-(id)init;
-(id<FCChannelProviding>)channel;
-(void)setChannel:(id<FCChannelProviding>)arg1 ;
-(id)initWithChannel:(id)arg1 sectionHeadlinesGroups:(id)arg2 ;
-(NSArray *)sectionHeadlinesGroups;
-(void)setSectionHeadlinesGroups:(NSArray *)arg1 ;
@end

