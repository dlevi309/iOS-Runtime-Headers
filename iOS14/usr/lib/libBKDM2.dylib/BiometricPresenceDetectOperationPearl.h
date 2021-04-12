/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)finished;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(BOOL)checked;
-(void)setContinuous:(BOOL)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)highPriority;
-(void)setEndTime:(unsigned long long)arg1 ;
-(void)setHighPriority:(BOOL)arg1 ;
-(unsigned long long)endTime;
-(void)dealloc;
-(unsigned)taskPausedMessage;
-(unsigned)taskResumedMessage;
-(unsigned)taskResumeFailedMessage;
-(unsigned)cancelledMessage;
-(BOOL)continuous;
-(BOOL)timeouted;
-(void)setTimeouted:(BOOL)arg1 ;
@end

