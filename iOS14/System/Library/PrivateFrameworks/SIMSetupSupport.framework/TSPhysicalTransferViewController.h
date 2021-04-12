/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class NSDictionary, NSString;

@interface TSPhysicalTransferViewController : OBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem> {

	NSDictionary* _plan;
	NSString* _deviceName;
	NSString* _phoneNumber;
	id<TSSIMSetupFlowDelegate> _delegate;

}

@property (__weak) id<TSSIMSetupFlowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TSSIMSetupFlowDelegate>)delegate;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)_cancelButtonTapped;
-(id)initWithPlan:(id)arg1 ;
-(void)_startPlanTransfer:(id)arg1 ;
-(void)_continueButtonTapped;
-(void)_scanButtonTapped;
@end

