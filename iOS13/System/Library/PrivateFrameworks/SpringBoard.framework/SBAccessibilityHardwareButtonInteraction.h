/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>
#import <libobjc.A.dylib/SBHardwareButtonInteraction.h>

@class NSString;

@interface SBAccessibilityHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction> {

	unsigned long long _buttonType;

}

@property (nonatomic,readonly) unsigned long long buttonType;              //@synthesize buttonType=_buttonType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hardwareButtonInteractionForLockButton;
+(id)hardwareButtonInteractionForHomeButton;
-(void)dealloc;
-(unsigned long long)buttonType;
-(id)hardwareButtonGestureParameters;
-(BOOL)consumeTriplePressUp;
-(id)initWithButtonType:(unsigned long long)arg1 ;
-(void)_registerAsNotificationObserver;
-(void)_unregisterAsNotificationObserver;
-(BOOL)_supportsTripleClick;
-(double)_downToDownInterval;
-(BOOL)_presentMigrationAlertIfNeeded;
-(CFStringRef)_speedChangedNotificationName;
-(void)_accessibilityPrefsDidChange;
@end

