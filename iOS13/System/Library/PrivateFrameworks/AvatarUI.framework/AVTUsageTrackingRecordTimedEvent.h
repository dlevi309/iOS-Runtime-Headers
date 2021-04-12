/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTAvatarRecord;
@class NSDate;

@interface AVTUsageTrackingRecordTimedEvent : NSObject {

	BOOL _paused;
	id<AVTAvatarRecord> _record;
	NSDate* _currentStartTime;
	double _totalTime;

}

@property (nonatomic,retain) NSDate * currentStartTime;                 //@synthesize currentStartTime=_currentStartTime - In the implementation block
@property (assign,nonatomic) double totalTime;                          //@synthesize totalTime=_totalTime - In the implementation block
@property (assign,nonatomic) BOOL paused;                               //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarRecord> record;              //@synthesize record=_record - In the implementation block
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(id<AVTAvatarRecord>)record;
-(double)totalTime;
-(void)setTotalTime:(double)arg1 ;
-(void)setCurrentStartTime:(NSDate *)arg1 ;
-(NSDate *)currentStartTime;
-(id)initWithStartTime:(id)arg1 record:(id)arg2 ;
-(void)pauseAtTime:(id)arg1 ;
-(void)resumeAtTime:(id)arg1 ;
-(double)totalElapsedTimeAtTime:(id)arg1 ;
@end

