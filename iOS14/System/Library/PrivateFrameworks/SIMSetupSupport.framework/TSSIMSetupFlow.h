/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <libobjc.A.dylib/TSSIMSetupFlowDelegate.h>

@protocol TSSIMSetupDelegate;
@class NSString;

@interface TSSIMSetupFlow : NSObject <TSSIMSetupFlowDelegate> {

	id<TSSIMSetupDelegate> _delegate;

}

@property (__weak) id<TSSIMSetupDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)initWithOptions:(id)arg1 ;
+(id)initWithAppName:(id)arg1 requireSetup:(BOOL)arg2 skipGeneralInstallConsent:(BOOL)arg3 ;
+(void)needsToRun:(/*^block*/id)arg1 ;
+(void)needsToRunUsingMessageSession:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)needsToRunUsingMessageSession:(id)arg1 transferablePlanOnSource:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(id)initWithSetupFlowWithIccid:(id)arg1 showAddPlan:(BOOL)arg2 ;
+(id)initActivationCodeRequireSetup:(BOOL)arg1 ;
+(id)initWithAppName:(id)arg1 requireSetup:(BOOL)arg2 ;
+(id)initWithActivationCodeOnlyFlow;
-(id<TSSIMSetupDelegate>)delegate;
-(void)setDelegate:(id<TSSIMSetupDelegate>)arg1 ;
-(id)firstViewController;
-(void)waitForResponse:(id)arg1 ;
-(void)receivedResponse;
-(void)userDidTapCancel;
-(void)viewControllerDidComplete:(id)arg1 ;
-(id)nextViewControllerFrom:(id)arg1 ;
-(void)navigateToNextPaneFrom:(id)arg1 navigationController:(id)arg2 ;
-(void)firstViewController:(/*^block*/id)arg1 ;
@end

