/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemAggregatedViewController.h>
#import <libobjc.A.dylib/QLDownloadingItemViewControllerDelegate.h>
#import <libobjc.A.dylib/QLItemViewControllerPresentingDelegate.h>

@class NSString, QLItemViewController, QLErrorItemViewController, QLLoadingItemViewController, QLDownloadingItemViewController, QLScreenTimeItemViewController, QLItem, QLPreviewContext, DMFApplicationPolicyMonitor, DMFCategoryPolicyMonitor;

@interface QLItemPresenterViewController : QLItemAggregatedViewController <QLDownloadingItemViewControllerDelegate, QLItemViewControllerPresentingDelegate> {

	BOOL _shouldDeferAppearanceUpdates;
	BOOL _isPeekingSession;
	BOOL _failureOccurred;
	BOOL _isReadyForDisplay;
	BOOL _shouldHandleLoadingView;
	/*^block*/id _readyBlock;
	BOOL _printing;
	QLItemViewController* _previewProvider;
	QLErrorItemViewController* _errorViewController;
	QLLoadingItemViewController* _loadingViewController;
	QLDownloadingItemViewController* _downloadingController;
	QLScreenTimeItemViewController* _screenTimeController;
	/*^block*/id _loadingCompletionHandler;
	QLItem* _previewItem;
	id _contents;
	QLPreviewContext* _context;
	NSString* _hostApplicationBundleIdentifier;
	DMFApplicationPolicyMonitor* _screenTimeApplicationMonitor;
	DMFCategoryPolicyMonitor* _screenTimeCategoryMonitor;

}

@property (nonatomic,retain) QLItemViewController * previewProvider;                                  //@synthesize previewProvider=_previewProvider - In the implementation block
@property (nonatomic,retain) QLErrorItemViewController * errorViewController;                         //@synthesize errorViewController=_errorViewController - In the implementation block
@property (nonatomic,retain) QLLoadingItemViewController * loadingViewController;                     //@synthesize loadingViewController=_loadingViewController - In the implementation block
@property (nonatomic,retain) QLDownloadingItemViewController * downloadingController;                 //@synthesize downloadingController=_downloadingController - In the implementation block
@property (nonatomic,retain) QLScreenTimeItemViewController * screenTimeController;                   //@synthesize screenTimeController=_screenTimeController - In the implementation block
@property (nonatomic,copy) id loadingCompletionHandler;                                               //@synthesize loadingCompletionHandler=_loadingCompletionHandler - In the implementation block
@property (nonatomic,retain) QLItem * previewItem;                                                    //@synthesize previewItem=_previewItem - In the implementation block
@property (retain) id contents;                                                                       //@synthesize contents=_contents - In the implementation block
@property (retain) QLPreviewContext * context;                                                        //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL printing;                                                           //@synthesize printing=_printing - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationBundleIdentifier;                                //@synthesize hostApplicationBundleIdentifier=_hostApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) DMFApplicationPolicyMonitor * screenTimeApplicationMonitor;              //@synthesize screenTimeApplicationMonitor=_screenTimeApplicationMonitor - In the implementation block
@property (nonatomic,retain) DMFCategoryPolicyMonitor * screenTimeCategoryMonitor;                    //@synthesize screenTimeCategoryMonitor=_screenTimeCategoryMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) QLItemPresenterViewController * itemPresenterViewController; 
-(id)init;
-(id)contents;
-(BOOL)isLoaded;
-(QLPreviewContext *)context;
-(void)setContext:(QLPreviewContext *)arg1 ;
-(void)setContents:(id)arg1 ;
-(CGSize)preferredContentSize;
-(QLItemViewController *)previewProvider;
-(void)setPreviewProvider:(QLItemViewController *)arg1 ;
-(QLErrorItemViewController *)errorViewController;
-(void)setErrorViewController:(QLErrorItemViewController *)arg1 ;
-(BOOL)isLoading;
-(BOOL)printing;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(QLLoadingItemViewController *)loadingViewController;
-(void)showPreviewViewController:(id)arg1 ;
-(void)showPreviewViewController:(id)arg1 animatingWithCrossfade:(BOOL)arg2 ;
-(void)setLoadingCompletionHandler:(id)arg1 ;
-(void)_setupScreenTimeHandling;
-(void)_showReadyToDisplayPreviewViewControllerDeferredIfNeeded:(id)arg1 ;
-(QLDownloadingItemViewController *)downloadingController;
-(void)showPreviewViewController:(id)arg1 animatingWithCrossfade:(BOOL)arg2 updatingIsReadyForDisplay:(BOOL)arg3 ;
-(void)_showLoadingViewControllerDeferredIfNeeded;
-(QLItem *)previewItem;
-(void)_startLoadingPreviewWithContents:(id)arg1 ;
-(void)_performReadyBlockIfNedded;
-(BOOL)canAnimateFromDetailViewToFullScreenPreview;
-(void)_performLoadingCompletionHandlerWithError:(id)arg1 ;
-(BOOL)loadingFailed;
-(void)_cancelAllDeferredApperanceUpdates;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)showErrorViewController;
-(id)additionalItemViewControllerDescription;
-(BOOL)_processIsEntitledToCheckScreenTimePolicy;
-(BOOL)_processIsEntitledToConfigureScreenTime;
-(BOOL)_shouldApplyScreenTimeMoviePolicyForItem:(id)arg1 ;
-(void)_setupScreenTimeCategoryHandling;
-(id)screenTimePolicyBundleIdentifier;
-(void)_setupScreenTimeApplicationHandling;
-(void)_queryScreenTimeCategoryPolicy;
-(void)_queryScreenTimePolicyForBundleIdentifier:(id)arg1 ;
-(void)_didReceiveNewScreenTimeApplicationPolicies:(id)arg1 error:(id)arg2 ;
-(void)_didReceiveNewScreenTimeCategoryPolicy:(id)arg1 error:(id)arg2 ;
-(void)_didReceiveNewScreenTimePolicy:(long long)arg1 ;
-(void)_hideScreenTimeViewControllerIfNeeded;
-(void)_showScreenTimeViewController;
-(QLScreenTimeItemViewController *)screenTimeController;
-(void)showPreviewProviderViewController;
-(NSString *)hostApplicationBundleIdentifier;
-(void)downloadingItemViewControllerDidFinishLoadingPreviewItem:(id)arg1 withContents:(id)arg2 ;
-(void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(QLItemPresenterViewController *)itemPresenterViewController;
-(id)initWithHostApplicationBundleIdentifier:(id)arg1 ;
-(id)initForPrinting:(BOOL)arg1 ;
-(void)isReadyForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setLoadingViewController:(QLLoadingItemViewController *)arg1 ;
-(void)setDownloadingController:(QLDownloadingItemViewController *)arg1 ;
-(void)setScreenTimeController:(QLScreenTimeItemViewController *)arg1 ;
-(id)loadingCompletionHandler;
-(void)setPreviewItem:(QLItem *)arg1 ;
-(void)setPrinting:(BOOL)arg1 ;
-(void)setHostApplicationBundleIdentifier:(NSString *)arg1 ;
-(DMFApplicationPolicyMonitor *)screenTimeApplicationMonitor;
-(void)setScreenTimeApplicationMonitor:(DMFApplicationPolicyMonitor *)arg1 ;
-(DMFCategoryPolicyMonitor *)screenTimeCategoryMonitor;
-(void)setScreenTimeCategoryMonitor:(DMFCategoryPolicyMonitor *)arg1 ;
@end

