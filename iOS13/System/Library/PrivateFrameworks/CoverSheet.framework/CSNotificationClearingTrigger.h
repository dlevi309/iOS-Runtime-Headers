/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol CSNotificationClearingTriggerDelegate;
@interface CSNotificationClearingTrigger : NSObject {

	BOOL _authenticated;
	BOOL _hadNotificationContentAtDisappearance;
	BOOL _didDisableCarDNDUntilEndOfDrive;
	BOOL _uiLocked;
	BOOL _screenOff;
	BOOL _triggerArmed;
	id<CSNotificationClearingTriggerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL triggerArmed;                                                      //@synthesize triggerArmed=_triggerArmed - In the implementation block
@property (assign,nonatomic,__weak) id<CSNotificationClearingTriggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL authenticated;                                                     //@synthesize authenticated=_authenticated - In the implementation block
@property (assign,nonatomic) BOOL hadNotificationContentAtDisappearance;                             //@synthesize hadNotificationContentAtDisappearance=_hadNotificationContentAtDisappearance - In the implementation block
@property (assign,nonatomic) BOOL didDisableCarDNDUntilEndOfDrive;                                   //@synthesize didDisableCarDNDUntilEndOfDrive=_didDisableCarDNDUntilEndOfDrive - In the implementation block
@property (assign,nonatomic) BOOL uiLocked;                                                          //@synthesize uiLocked=_uiLocked - In the implementation block
@property (assign,nonatomic) BOOL screenOff;                                                         //@synthesize screenOff=_screenOff - In the implementation block
-(id<CSNotificationClearingTriggerDelegate>)delegate;
-(void)setDelegate:(id<CSNotificationClearingTriggerDelegate>)arg1 ;
-(void)_reset;
-(id)initWithDelegate:(id)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)authenticated;
-(void)setScreenOff:(BOOL)arg1 ;
-(BOOL)screenOff;
-(void)setUiLocked:(BOOL)arg1 ;
-(void)setHadNotificationContentAtDisappearance:(BOOL)arg1 ;
-(void)setDidDisableCarDNDUntilEndOfDrive:(BOOL)arg1 ;
-(void)_updateTriggerAndClearIfNeeded;
-(void)setTriggerArmed:(BOOL)arg1 ;
-(BOOL)_shouldArm;
-(BOOL)_wouldArmIfNotForDND;
-(BOOL)_wouldArmIfNotForDNDAndNotificationContent;
-(void)_clearIfNeeded;
-(BOOL)_wouldArmForDiscreteParameters;
-(BOOL)hadNotificationContentAtDisappearance;
-(BOOL)didDisableCarDNDUntilEndOfDrive;
-(BOOL)uiLocked;
-(BOOL)triggerArmed;
-(BOOL)_shouldFire;
@end

