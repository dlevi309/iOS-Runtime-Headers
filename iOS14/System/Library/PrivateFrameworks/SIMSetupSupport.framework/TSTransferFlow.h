/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <SIMSetupSupport/TSSIMSetupFlow.h>
#import <libobjc.A.dylib/TSSIMSetupFlowDelegate.h>

@protocol TSSetupFlowItem;
@class UIViewController, NSString;

@interface TSTransferFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {

	UIViewController*<TSSetupFlowItem> _currentViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)needsToRunUsingMessageSession:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)needsToRunUsingMessageSession:(id)arg1 transferablePlanOnSource:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)firstViewController;
-(void)viewControllerDidComplete:(id)arg1 ;
-(id)nextViewControllerFrom:(id)arg1 ;
-(void)firstViewController:(/*^block*/id)arg1 ;
@end

