/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@protocol _HKEmergencyContactPickerDelegate;
@class UIViewController, NSString;

@interface _HKEmergencyContactPicker : NSObject <CNContactPickerDelegate> {

	UIViewController* _owningViewController;
	id<_HKEmergencyContactPickerDelegate> _delegate;

}

@property (nonatomic,retain) UIViewController * owningViewController;                            //@synthesize owningViewController=_owningViewController - In the implementation block
@property (assign,nonatomic,__weak) id<_HKEmergencyContactPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_HKEmergencyContactPickerDelegate>)delegate;
-(void)setDelegate:(id<_HKEmergencyContactPickerDelegate>)arg1 ;
-(void)setOwningViewController:(UIViewController *)arg1 ;
-(UIViewController *)owningViewController;
-(id)initWithOwningViewController:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(id)_meContactIdentifier;
-(void)presentEmergencyContactPickerForMedicalIDData:(id)arg1 ;
@end

