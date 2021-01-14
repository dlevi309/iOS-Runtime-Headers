/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)hadNotificationContentAtDisappearance;
-(id<CSNotificationClearingTriggerDelegate>)delegate;
-(void)setHadNotificationContentAtDisappearance:(BOOL)arg1 ;
-(BOOL)_wouldArmIfNotForDNDAndNotificationContent;
-(void)_clearIfNeeded;
-(void)_updateTriggerAndClearIfNeeded;
-(void)setDidDisableCarDNDUntilEndOfDrive:(BOOL)arg1 ;
-(BOOL)_wouldArmIfNotForDND;
-(BOOL)authenticated;
-(void)setDelegate:(id<CSNotificationClearingTriggerDelegate>)arg1 ;
-(BOOL)uiLocked;
-(BOOL)_shouldArm;
-(void)setTriggerArmed:(BOOL)arg1 ;
-(BOOL)_shouldFire;
-(void)setUiLocked:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)screenOff;
-(void)setScreenOff:(BOOL)arg1 ;
-(BOOL)triggerArmed;
-(void)_reset;
-(BOOL)didDisableCarDNDUntilEndOfDrive;
-(BOOL)_wouldArmForDiscreteParameters;
@end

