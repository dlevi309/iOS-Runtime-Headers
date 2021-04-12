/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@protocol SASLockStateMonitorDelegate;
@class NSNumber;

@interface SASLockStateMonitor : NSObject {

	BOOL _unlockedByTouchID;
	id<SASLockStateMonitorDelegate> _delegate;
	unsigned long long _lockState;
	NSNumber* _assistantIsEnabled;

}

@property (assign,nonatomic) unsigned long long lockState;                                 //@synthesize lockState=_lockState - In the implementation block
@property (assign,nonatomic) BOOL unlockedByTouchID;                                       //@synthesize unlockedByTouchID=_unlockedByTouchID - In the implementation block
@property (nonatomic,retain) NSNumber * assistantIsEnabled;                                //@synthesize assistantIsEnabled=_assistantIsEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<SASLockStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setLockState:(unsigned long long)arg1 ;
-(BOOL)isBlocked;
-(NSNumber *)assistantIsEnabled;
-(unsigned long long)lockState;
-(void)setAssistantIsEnabled:(NSNumber *)arg1 ;
-(id)init;
-(id<SASLockStateMonitorDelegate>)delegate;
-(BOOL)isScreenOn;
-(void)_lockStateDidChange:(id)arg1 ;
-(void)setDelegate:(id<SASLockStateMonitorDelegate>)arg1 ;
-(void)_updateLockState;
-(BOOL)hasUnlockedSinceBoot;
-(void)setUnlockedByTouchID:(BOOL)arg1 ;
-(BOOL)unlockedByTouchID;
-(unsigned long long)_currentLockState;
-(void)dealloc;
@end

