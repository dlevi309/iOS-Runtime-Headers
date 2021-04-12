/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBPressSequenceRecognizerDelegate.h>

@protocol SBSOSLockGestureObserverDelegate;
@class SBPressSequenceRecognizer, SBPressSequenceValidator, SBPressSequenceSettings, BSAction, SBPressSequenceObserver, NSString;

@interface SBSOSLockGestureObserver : NSObject <SBPressSequenceRecognizerDelegate> {

	SBPressSequenceRecognizer* _recognizer;
	SBPressSequenceValidator* _validator;
	SBPressSequenceSettings* _settings;
	BOOL _lastKnownActiveState;
	BSAction* _triggerAction;
	BOOL _gestureLoggingEnabled;
	BOOL _sosEnabled;
	SBPressSequenceObserver* _sosLockPressSequenceObserver;
	id<SBSOSLockGestureObserverDelegate> _delegate;
	long long _configuration;

}

@property (nonatomic,retain) SBPressSequenceObserver * sosLockPressSequenceObserver;                 //@synthesize sosLockPressSequenceObserver=_sosLockPressSequenceObserver - In the implementation block
@property (assign,nonatomic,__weak) id<SBSOSLockGestureObserverDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long configuration;                                              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) long long triggerMechanism; 
@property (assign,getter=isGestureLoggingEnabled,nonatomic) BOOL gestureLoggingEnabled;              //@synthesize gestureLoggingEnabled=_gestureLoggingEnabled - In the implementation block
@property (assign,setter=setSOSEnabled:,getter=isSOSEnabled,nonatomic) BOOL sosEnabled;              //@synthesize sosEnabled=_sosEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configure;
-(id)init;
-(id<SBSOSLockGestureObserverDelegate>)delegate;
-(id)_validator;
-(id)initWithConfiguration:(long long)arg1 ;
-(void)setDelegate:(id<SBSOSLockGestureObserverDelegate>)arg1 ;
-(long long)configuration;
-(BOOL)isSOSEnabled;
-(BOOL)isGestureLoggingEnabled;
-(void)setGestureLoggingEnabled:(BOOL)arg1 ;
-(void)setSOSEnabled:(BOOL)arg1 ;
-(void)resetWithNewConfiguration:(long long)arg1 ;
-(void)registerPressDownWithTimestamp:(double)arg1 ;
-(void)registerPressUpWithTimestamp:(double)arg1 ;
-(long long)triggerMechanism;
-(void)noteDidBeginSOSWithUUID:(id)arg1 ;
-(double)_watchdogInterval;
-(void)_noteTriggerActionRecievedResponse;
-(void)_noteTriggerDidBecomeActive;
-(void)_noteTriggerDidBecomeInactive;
-(void)_configureSettings;
-(double)_intervalThatSucceeds;
-(void)pressSequenceRecognizerDidCompleteSequence:(id)arg1 ;
-(void)pressSequenceRecognizer:(id)arg1 didBeginPressDownAtIndex:(unsigned long long)arg2 ;
-(void)pressSequenceRecognizerDidFail:(id)arg1 ;
-(void)_setRecognizer:(id)arg1 ;
-(unsigned long long)_numberOfPressesThatTrigger;
-(unsigned long long)_numberOfPressesThatActivate;
-(SBPressSequenceObserver *)sosLockPressSequenceObserver;
-(void)setSosLockPressSequenceObserver:(SBPressSequenceObserver *)arg1 ;
@end

