/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)hardwareButtonGestureParameters;
-(unsigned long long)buttonType;
-(void)dealloc;
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

