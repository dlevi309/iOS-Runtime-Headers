/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(CLSNowPlayingStreamEventMetadata *)metadata;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(id)initWithDuetKnowledgeEvent:(id)arg1 ;
@end

