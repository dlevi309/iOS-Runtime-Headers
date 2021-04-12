/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSDate, CLSNowPlayingStreamEventMetadata;

@interface CLSNowPlayingStreamEvent : NSObject {

	NSDate* _localStartDate;
	NSDate* _localEndDate;
	CLSNowPlayingStreamEventMetadata* _metadata;

}

@property (nonatomic,copy,readonly) CLSNowPlayingStreamEventMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate;                                       //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * localEndDate;                                         //@synthesize localEndDate=_localEndDate - In the implementation block
+(id)playbackStreamEventDateSortDescriptors;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(id)description;
-(CLSNowPlayingStreamEventMetadata *)metadata;
-(id)initWithDuetKnowledgeEvent:(id)arg1 ;
@end

