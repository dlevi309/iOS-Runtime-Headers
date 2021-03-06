/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSString* _parentApplicationDisplayIdentifier;
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
@property (nonatomic,copy) NSString * parentApplicationDisplayIdentifier;                             //@synthesize parentApplicationDisplayIdentifier=_parentApplicationDisplayIdentifier - In the implementation block
@property (nonatomic,retain) DMFApplicationPolicyMonitor * screenTimeApplicationMonitor;              //@synthesize screenTimeApplicationMonitor=_screenTimeApplicationMonitor - In the implementation block
@property (nonatomic,retain) DMFCategoryPolicyMonitor * screenTimeCategoryMonitor;                    //@synthesize screenTimeCategoryMonitor=_screenTimeCategoryMonitor - In the implementation block
@property (assign,nonatomic,__weak) id<QLItemPresenterViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) QLItemPresenterViewController * itemPresenterViewController; 
-(id)contents;
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
-(id)init;
-(BOOL)isLoading;
-(QLPreviewContext *)context;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(CGSize)preferredContentSize;
-(BOOL)downloadingItemViewControllerShouldForceAutodownloadFile:(id)arg1 ;
-(void)downloadingItemViewControllerDidFinishLoadingPreviewItem:(id)arg1 withContents:(id)arg2 ;
-(void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(QLItemPresenterViewController *)itemPresenterViewController;
-(id)initWithHostApplicationBundleIdentifier:(id)arg1 parentApplicationDisplayIdentifier:(id)arg2 ;
-(id)initForPrinting:(BOOL)arg1 ;
-(void)isReadyForDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)canAnimateFromDetailViewToFullScreenPreview;
-(void)setLoadingViewController:(QLLoadingItemViewController *)arg1 ;
-(void)setDownloadingController:(QLDownloadingItemViewController *)arg1 ;
-(void)setScreenTimeController:(QLScreenTimeItemViewController *)arg1 ;
-(id)loadingCompletionHandler;
-(void)setPreviewItem:(QLItem *)arg1 ;
-(void)setHostApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setParentApplicationDisplayIdentifier:(NSString *)arg1 ;
-(void)setContents:(id)arg1 ;
-(DMFApplicationPolicyMonitor *)screenTimeApplicationMonitor;
-(void)setScreenTimeApplicationMonitor:(DMFApplicationPolicyMonitor *)arg1 ;
-(DMFCategoryPolicyMonitor *)screenTimeCategoryMonitor;
-(void)setScreenTimeCategoryMonitor:(DMFCategoryPolicyMonitor *)arg1 ;
-(QLLoadingItemViewController *)loadingViewController;
-(void)showPreviewViewController:(id)arg1 ;
-(BOOL)_currentPreviewControllerIsErrorViewController;
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
-(void)_performLoadingCompletionHandlerWithError:(id)arg1 ;
-(BOOL)loadingFailed;
-(id)screenTimePolicyBundleIdentifier;
-(void)_setupScreenTimeApplicationHandling;
-(void)_queryScreenTimeCategoryPolicy;
-(void)_queryScreenTimePolicyForBundleIdentifier:(id)arg1 ;
-(void)_didReceiveNewScreenTimeApplicationPolicies:(id)arg1 error:(id)arg2 ;
-(void)_didReceiveNewScreenTimeCategoryPolicy:(id)arg1 error:(id)arg2 ;
-(void)_didReceiveNewScreenTimePolicy:(long long)arg1 ;
-(void)_hideScreenTimeViewControllerIfNeeded;
-(void)_showScreenTimeViewControllerWithPolicy:(long long)arg1 ;
-(QLScreenTimeItemViewController *)screenTimeController;
-(void)showPreviewProviderViewController;
-(NSString *)hostApplicationBundleIdentifier;
-(NSString *)parentApplicationDisplayIdentifier;
-(QLItemViewController *)previewProvider;
-(QLErrorItemViewController *)errorViewController;
-(void)setErrorViewController:(QLErrorItemViewController *)arg1 ;
-(BOOL)printing;
-(void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)transitionDidStart:(BOOL)arg1 ;
-(BOOL)isLoaded;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPreviewProvider:(QLItemViewController *)arg1 ;
-(void)setPrinting:(BOOL)arg1 ;
-(void)setContext:(QLPreviewContext *)arg1 ;
@end

