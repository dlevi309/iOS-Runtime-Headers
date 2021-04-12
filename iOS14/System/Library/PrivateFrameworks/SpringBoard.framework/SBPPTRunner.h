/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CCUIPPTHostDelegate.h>
#import <libobjc.A.dylib/NCNotificationViewControllerObserving.h>

@class NSString;

@interface SBPPTRunner : NSObject <CCUIPPTHostDelegate, NCNotificationViewControllerObserving>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)assistantDidAppear:(id)arg1 ;
-(void)longLookWillPresentForNotificationViewController:(id)arg1 ;
-(void)longLookWillDismissForNotificationViewController:(id)arg1 ;
-(void)longLookDidDismissForNotificationViewController:(id)arg1 ;
-(void)longLookDidPresentForNotificationViewController:(id)arg1 ;
-(void)assistantWillAppear:(id)arg1 ;
-(void)prepareForControlCenterPPTHostState:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)runTestWithName:(id)arg1 options:(id)arg2 ;
-(void)_runFloatingDockBringupTestWithOptions:(id)arg1 ;
-(void)_runFloatingDockDismissTestWithOptions:(id)arg1 ;
-(void)_runNotificationShortToLongLookTransitionTestWithOptions:(id)arg1 ;
-(void)_runNotificationReParkLongLookTransitionTestWithOptions:(id)arg1 ;
-(void)_runNotificationClearLongLookTransitionTestWithOptions:(id)arg1 ;
-(void)_runNotificationBannerTransitionTestWithOptions:(id)arg1 ;
-(void)_runSiriTestWithName:(id)arg1 options:(id)arg2 ;
-(id)_operationToPresentCoverSheetForTestWithName:(id)arg1 ;
-(id)_operationToDismissCoverSheetForTestWithName:(id)arg1 ;
-(void)_setCoverSheetPresentationManagerTransitionCallbacksForTestName:(id)arg1 operation:(id)arg2 ;
-(void)_runCoverSheetPresentTestWithOptions:(id)arg1 ;
-(void)_runCoverSheetDismissTestWithOptions:(id)arg1 ;
-(void)_runCoverSheetPresentOverSafariTestWithOptions:(id)arg1 ;
-(void)_runCoverSheetDismissToSafariTestWithOptions:(id)arg1 ;
@end

