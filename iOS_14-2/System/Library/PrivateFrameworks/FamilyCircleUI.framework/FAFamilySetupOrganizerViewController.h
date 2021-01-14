/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <FamilyCircleUI/FAConfirmIdentityViewController.h>
#import <libobjc.A.dylib/FAFamilySetupPage.h>

@protocol FAFamilySetupPageDelegate;
@class NSString;

@interface FAFamilySetupOrganizerViewController : FAConfirmIdentityViewController <FAFamilySetupPage> {

	id<FAFamilySetupPageDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FAFamilySetupPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)instructions;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(id<FAFamilySetupPageDelegate>)delegate;
-(id)pageTitle;
-(void)setDelegate:(id<FAFamilySetupPageDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(BOOL)shouldShowInviteeInstructions;
-(id)titleForContinuebutton;
-(void)continueButtonWasTapped:(id)arg1 ;
-(id)_createCancelButton;
@end

