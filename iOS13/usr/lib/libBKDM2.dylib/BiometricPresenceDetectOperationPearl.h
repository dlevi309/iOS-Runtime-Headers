/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libBKDM2.dylib
*/

#import <BiometricSupport/BiometricPresenceDetectOperation.h>

@class NSTimer;

@interface BiometricPresenceDetectOperationPearl : BiometricPresenceDetectOperation {

	BOOL _continuous;
	BOOL _highPriority;
	BOOL _checked;
	BOOL _timeouted;
	BOOL _finished;
	unsigned long long _endTime;
	NSTimer* _timer;

}

@property (assign,nonatomic) BOOL continuous;                         //@synthesize continuous=_continuous - In the implementation block
@property (assign,nonatomic) unsigned long long endTime;              //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) BOOL highPriority;                       //@synthesize highPriority=_highPriority - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                         //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) BOOL checked;                            //@synthesize checked=_checked - In the implementation block
@property (assign,nonatomic) BOOL timeouted;                          //@synthesize timeouted=_timeouted - In the implementation block
@property (assign,nonatomic) BOOL finished;                           //@synthesize finished=_finished - In the implementation block
-(void)dealloc;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(unsigned long long)endTime;
-(void)setEndTime:(unsigned long long)arg1 ;
-(void)setContinuous:(BOOL)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)checked;
-(void)setHighPriority:(BOOL)arg1 ;
-(BOOL)highPriority;
-(unsigned)taskPausedMessage;
-(unsigned)taskResumedMessage;
-(unsigned)taskResumeFailedMessage;
-(unsigned)cancelledMessage;
-(BOOL)continuous;
-(BOOL)timeouted;
-(void)setTimeouted:(BOOL)arg1 ;
@end

