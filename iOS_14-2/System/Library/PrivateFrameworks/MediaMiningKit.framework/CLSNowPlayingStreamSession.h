/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSDate, NSArray;

@interface CLSNowPlayingStreamSession : NSObject {

	NSDate* _localEndDate;
	NSDate* _localStartDate;
	NSArray* _events;

}

@property (nonatomic,copy) NSArray * events;                         //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate;              //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * localEndDate;                //@synthesize localEndDate=_localEndDate - In the implementation block
+(id)playbackStreamSessionDateSortDescriptors;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(id)initWithEvents:(id)arg1 ;
-(void)setEvents:(NSArray *)arg1 ;
-(id)debugDescription;
-(id)description;
-(NSArray *)events;
-(id)initWithDataCluster:(id)arg1 ;
@end

