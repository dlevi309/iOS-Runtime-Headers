/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id<SASLockStateMonitorDelegate>)delegate;
-(void)setDelegate:(id<SASLockStateMonitorDelegate>)arg1 ;
-(BOOL)isBlocked;
-(unsigned long long)lockState;
-(void)setLockState:(unsigned long long)arg1 ;
-(NSNumber *)assistantIsEnabled;
-(void)setAssistantIsEnabled:(NSNumber *)arg1 ;
-(BOOL)isScreenOn;
-(unsigned long long)_currentLockState;
-(BOOL)hasUnlockedSinceBoot;
-(void)_lockStateDidChange:(id)arg1 ;
-(void)setUnlockedByTouchID:(BOOL)arg1 ;
-(void)_updateLockState;
-(BOOL)unlockedByTouchID;
@end

