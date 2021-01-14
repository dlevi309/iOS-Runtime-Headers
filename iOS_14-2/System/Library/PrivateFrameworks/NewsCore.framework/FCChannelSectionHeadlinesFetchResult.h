/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setChannel:(id<FCChannelProviding>)arg1 ;
-(id<FCChannelProviding>)channel;
-(id)initWithChannel:(id)arg1 sectionHeadlinesGroups:(id)arg2 ;
-(NSArray *)sectionHeadlinesGroups;
-(void)setSectionHeadlinesGroups:(NSArray *)arg1 ;
@end

