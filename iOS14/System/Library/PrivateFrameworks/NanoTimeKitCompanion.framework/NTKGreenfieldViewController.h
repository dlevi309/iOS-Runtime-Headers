/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NTKGreenfieldCompanionContentViewControllerDelegate.h>
#import <libobjc.A.dylib/NTKGreenfieldAddWatchFaceManagerDelegate.h>

@class UILabel, NSString, NSURL, NTKGreenfieldAddWatchFaceManager, UINavigationController, NTKGreenfieldCompanionLoadingViewController;

@interface NTKGreenfieldViewController : UIViewController <NTKGreenfieldCompanionContentViewControllerDelegate, NTKGreenfieldAddWatchFaceManagerDelegate> {

	BOOL _hasLoadedURL;
	UILabel* _complicationsCounterLabel;
	NSString* _sourceApplicationBundleIdentifier;
	NSURL* _faceURL;
	NTKGreenfieldAddWatchFaceManager* _addWatchFaceManager;
	UINavigationController* _hiddenNavigationController;
	NTKGreenfieldCompanionLoadingViewController* _loadingViewController;

}

@property (nonatomic,retain) NSURL * faceURL;                                                                  //@synthesize faceURL=_faceURL - In the implementation block
@property (nonatomic,retain) NTKGreenfieldAddWatchFaceManager * addWatchFaceManager;                           //@synthesize addWatchFaceManager=_addWatchFaceManager - In the implementation block
@property (nonatomic,retain) UINavigationController * hiddenNavigationController;                              //@synthesize hiddenNavigationController=_hiddenNavigationController - In the implementation block
@property (nonatomic,retain) NTKGreenfieldCompanionLoadingViewController * loadingViewController;              //@synthesize loadingViewController=_loadingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)setLoadingViewController:(NTKGreenfieldCompanionLoadingViewController *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NTKGreenfieldCompanionLoadingViewController *)loadingViewController;
-(NSURL *)faceURL;
-(void)viewDidLayoutSubviews;
-(void)setAddWatchFaceManager:(NTKGreenfieldAddWatchFaceManager *)arg1 ;
-(NTKGreenfieldAddWatchFaceManager *)addWatchFaceManager;
-(void)_didTapCancelButton;
-(void)_toggleRightCounterLabel:(BOOL)arg1 ;
-(void)_toggleCancelButton:(BOOL)arg1 ;
-(void)companionContentViewController:(id)arg1 didStartInstallingAppWithItemId:(id)arg2 ;
-(void)companionContentViewController:(id)arg1 handleButtonEvent:(long long)arg2 ;
-(void)didStartLoadingInAddWatchFaceManager:(id)arg1 ;
-(void)addWatchFaceManager:(id)arg1 updateStateToWelcomeWithCanAddFaceDirectly:(BOOL)arg2 ;
-(void)addWatchFaceManager:(id)arg1 updateStateToComplicationsNotAvailableWithSlots:(id)arg2 unavailableTitle:(id)arg3 unavailableDescription:(id)arg4 ;
-(void)addWatchFaceManager:(id)arg1 updateStateToAddComplicationWithItemId:(id)arg2 installMode:(long long)arg3 skippedComplicationSlots:(id)arg4 ;
-(void)addWatchFaceManager:(id)arg1 updateStateToRevisitComplicationWithItemId:(id)arg2 installMode:(long long)arg3 skippedComplicationSlots:(id)arg4 ;
-(void)addWatchFaceManager:(id)arg1 updateStateToCompletedWithSkippedComplicationSlots:(id)arg2 canRevisit:(BOOL)arg3 ;
-(void)addWatchFaceManager:(id)arg1 didFinishAddingFaceWithError:(id)arg2 ;
-(id)initWithUrl:(id)arg1 sourceApplicationBundleIdentifier:(id)arg2 ;
-(void)setFaceURL:(NSURL *)arg1 ;
-(UINavigationController *)hiddenNavigationController;
-(void)setHiddenNavigationController:(UINavigationController *)arg1 ;
@end

