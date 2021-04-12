/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)debugDescription;
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
-(id)initWithEvents:(id)arg1 ;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(id)initWithDataCluster:(id)arg1 ;
@end

