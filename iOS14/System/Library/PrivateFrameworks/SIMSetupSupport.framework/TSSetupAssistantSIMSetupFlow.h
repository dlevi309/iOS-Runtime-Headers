/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <SIMSetupSupport/TSSIMSetupFlow.h>
#import <libobjc.A.dylib/TSSIMSetupFlowDelegate.h>
#import <libobjc.A.dylib/TSCellularPlanManagerCacheDelegate.h>

@class NSMutableArray, NSString, UIBarButtonItem;

@interface TSSetupAssistantSIMSetupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate> {

	BOOL _showAddPlan;
	NSMutableArray* _danglingPlanItems;
	NSString* _iccid;
	UIBarButtonItem* _cancelButton;
	NSMutableArray* _currentItemsForIMessage;

}

@property (retain) NSMutableArray * currentItemsForIMessage;              //@synthesize currentItemsForIMessage=_currentItemsForIMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)needsToRun:(/*^block*/id)arg1 ;
-(id)firstViewController;
-(void)viewControllerDidComplete:(id)arg1 ;
-(void)setDefaultNavigationItems:(id)arg1 ;
-(id)initWithIccid:(id)arg1 showAddPlan:(BOOL)arg2 allowDismiss:(BOOL)arg3 ;
-(id)nextViewControllerFrom:(id)arg1 ;
-(NSMutableArray *)currentItemsForIMessage;
-(void)setCurrentItemsForIMessage:(NSMutableArray *)arg1 ;
@end

