/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STListViewController.h>
#import <libobjc.A.dylib/STRestrictionsPINControllerDelegate.h>

@protocol STRootViewModelCoordinator;
@class NSObject, NSString;

@interface STPINListViewController : STListViewController <STRestrictionsPINControllerDelegate> {

	NSObject*<STRootViewModelCoordinator> _coordinator;
	id _showingPinTarget;

}

@property (nonatomic,retain) id showingPinTarget;                                            //@synthesize showingPinTarget=_showingPinTarget - In the implementation block
@property (nonatomic,retain) NSObject*<STRootViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setCoordinator:(NSObject*<STRootViewModelCoordinator>)arg1 ;
-(NSObject*<STRootViewModelCoordinator>)coordinator;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg1 ;
-(void)showPINSheet:(id)arg1 ;
-(void)devicePINControllerDidDismissPINPane:(id)arg1 ;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2 ;
-(void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2 ;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didAcceptRemovePIN;
-(void)didCancelEnteringPIN;
-(void)showPINSheet:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithRootViewModelCoordinator:(id)arg1 ;
-(BOOL)shouldShowPINSheetForSpecifier:(id)arg1 ;
-(void)setShowingPinTarget:(id)arg1 ;
-(id)showingPinTarget;
-(BOOL)validatePIN:(id)arg1 forPINController:(id)arg2 ;
@end

