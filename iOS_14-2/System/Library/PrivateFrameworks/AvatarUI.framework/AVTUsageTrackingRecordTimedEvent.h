/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<AVTAvatarRecord>)record;
-(void)setTotalTime:(double)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithStartTime:(id)arg1 record:(id)arg2 ;
-(void)pauseAtTime:(id)arg1 ;
-(void)resumeAtTime:(id)arg1 ;
-(double)totalElapsedTimeAtTime:(id)arg1 ;
-(double)totalTime;
-(BOOL)paused;
-(void)setCurrentStartTime:(NSDate *)arg1 ;
-(NSDate *)currentStartTime;
@end

