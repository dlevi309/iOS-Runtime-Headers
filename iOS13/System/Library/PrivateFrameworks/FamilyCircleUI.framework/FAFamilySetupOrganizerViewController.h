/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <FamilyCircleUI/FAConfirmIdentityViewController.h>
#import <libobjc.A.dylib/FAFamilySetupPage.h>

@protocol FAFamilySetupPageDelegate;
@class NSString;

@interface FAFamilySetupOrganizerViewController : FAConfirmIdentityViewController <FAFamilySetupPage> {

	id<FAFamilySetupPageDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FAFamilySetupPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<FAFamilySetupPageDelegate>)delegate;
-(void)setDelegate:(id<FAFamilySetupPageDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)instructions;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(id)pageTitle;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(id)_createCancelButton;
-(BOOL)shouldShowInviteeInstructions;
-(id)titleForContinuebutton;
-(void)continueButtonWasTapped:(id)arg1 ;
@end

