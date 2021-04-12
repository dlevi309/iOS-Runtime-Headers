/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <SIMSetupSupport/TSSIMSetupFlow.h>
#import <libobjc.A.dylib/TSSIMSetupFlowDelegate.h>

@protocol TSSetupFlowItem;
@class UIViewController, NSMutableArray, NSString;

@interface TSTransferFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {

	UIViewController*<TSSetupFlowItem> _currentViewController;
	NSMutableArray* _transferItems;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)needsToRunUsingMessageSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)firstViewController;
-(void)viewControllerDidComplete:(id)arg1 ;
-(id)nextViewControllerFrom:(id)arg1 ;
-(void)firstViewController:(/*^block*/id)arg1 ;
-(void)_getTransferPlanList;
@end

