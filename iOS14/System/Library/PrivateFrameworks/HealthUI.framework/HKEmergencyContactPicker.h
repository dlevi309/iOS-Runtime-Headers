/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@protocol HKEmergencyContactPickerDelegate;
@class UIViewController, NSString;

@interface HKEmergencyContactPicker : NSObject <CNContactPickerDelegate> {

	BOOL _isSecondaryProfile;
	UIViewController* _owningViewController;
	id<HKEmergencyContactPickerDelegate> _delegate;

}

@property (nonatomic,retain) UIViewController * owningViewController;                           //@synthesize owningViewController=_owningViewController - In the implementation block
@property (assign,nonatomic,__weak) id<HKEmergencyContactPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isSecondaryProfile;                                           //@synthesize isSecondaryProfile=_isSecondaryProfile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)owningViewController;
-(id<HKEmergencyContactPickerDelegate>)delegate;
-(id)initWithOwningViewController:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)setDelegate:(id<HKEmergencyContactPickerDelegate>)arg1 ;
-(void)setOwningViewController:(UIViewController *)arg1 ;
-(BOOL)isSecondaryProfile;
-(void)setIsSecondaryProfile:(BOOL)arg1 ;
-(void)presentEmergencyContactPickerForMedicalIDData:(id)arg1 ;
-(id)_meContactIdentifier;
@end

