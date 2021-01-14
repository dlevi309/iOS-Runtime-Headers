/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/TSSetupFlowItem.h>

@protocol TSSIMSetupFlowDelegate;
@class NSString;

@interface TSTransferredViewController : OBWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem> {

	id<TSSIMSetupFlowDelegate> _delegate;

}

@property (__weak) id<TSSIMSetupFlowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TSSIMSetupFlowDelegate>)delegate;
-(void)_doneButtonTapped;
-(void)setDelegate:(id<TSSIMSetupFlowDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)_skipButtonTapped;
-(id)initWithTransferredPlan:(id)arg1 ;
@end

