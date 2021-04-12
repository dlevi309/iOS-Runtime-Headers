/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol WGWidgetHostingViewControllerDelegate, WGWidgetHostingViewControllerHost, OS_dispatch_queue, NSCopying, OS_dispatch_semaphore;
@class WGWidgetInfo, NSString, WGWidgetLifeCycleSequence, NSObject, _WGWidgetRemoteViewController, UIView, _WGCAPackageView, NSTimer, NSDate, NSMapTable, _WGBrokenWidgetView, _WGLockedOutWidgetView, NSMutableDictionary, BSAuditToken;

@interface WGWidgetHostingViewController : UIViewController {

	BOOL _implementsPerformUpdate;
	BOOL _lockedOut;
	BOOL _disconnectsImmediately;
	BOOL _encodingLayerTree;
	BOOL _didRequestViewInset;
	BOOL _didUpdate;
	BOOL _blacklisted;
	BOOL _ignoringParentAppearState;
	WGWidgetInfo* _widgetInfo;
	id<WGWidgetHostingViewControllerDelegate> _delegate;
	id<WGWidgetHostingViewControllerHost> _host;
	long long _activeDisplayMode;
	double _cornerRadius;
	unsigned long long _maskedCorners;
	NSString* _appBundleID;
	WGWidgetLifeCycleSequence* _activeLifeCycleSequence;
	long long _connectionState;
	NSObject*<OS_dispatch_queue> _proxyConnectionQueue;
	NSObject*<OS_dispatch_queue> _proxyRequestQueue;
	NSObject*<OS_dispatch_queue> _diskWriteQueue;
	_WGWidgetRemoteViewController* _remoteViewController;
	id<NSCopying> _extensionRequest;
	UIView* _contentProvidingView;
	_WGCAPackageView* _snapshotView;
	NSTimer* _disconnectionTimer;
	NSObject*<OS_dispatch_semaphore> _viewWillAppearSemaphore;
	NSObject*<OS_dispatch_semaphore> _viewWillDisappearSemaphore;
	/*^block*/id _remoteViewControllerConnectionHandler;
	/*^block*/id _remoteViewControllerDisconnectionHandler;
	NSDate* _lastUnanticipatedDisconnectionDate;
	NSMapTable* _openAppearanceTransactions;
	_WGBrokenWidgetView* _brokenView;
	_WGLockedOutWidgetView* _lockedOutView;
	NSMutableDictionary* _sequenceIDsToOutstandingWidgetUpdateCompletionHandlers;
	CGRect _snapshotViewBounds;

}

@property (nonatomic,copy) NSString * appBundleID;                                                                                                                                                                                                        //@synthesize appBundleID=_appBundleID - In the implementation block
@property (getter=_containerIdentifier,nonatomic,copy,readonly) NSString * containerIdentifier; 
@property (getter=_activeLifeCycleSequence,nonatomic,readonly) WGWidgetLifeCycleSequence * activeLifeCycleSequence;                                                                                                                                       //@synthesize activeLifeCycleSequence=_activeLifeCycleSequence - In the implementation block
@property (assign,setter=_setConnectionState:,getter=_connectionState,nonatomic) long long connectionState;                                                                                                                                               //@synthesize connectionState=_connectionState - In the implementation block
@property (getter=_proxyConnectionQueue,nonatomic,readonly) NSObject*<OS_dispatch_queue> proxyConnectionQueue;                                                                                                                                            //@synthesize proxyConnectionQueue=_proxyConnectionQueue - In the implementation block
@property (getter=_proxyRequestQueue,nonatomic,readonly) NSObject*<OS_dispatch_queue> proxyRequestQueue;                                                                                                                                                  //@synthesize proxyRequestQueue=_proxyRequestQueue - In the implementation block
@property (getter=_diskWriteQueue,nonatomic,readonly) NSObject*<OS_dispatch_queue> diskWriteQueue;                                                                                                                                                        //@synthesize diskWriteQueue=_diskWriteQueue - In the implementation block
@property (setter=_setRemoteViewController:,getter=_remoteViewController,nonatomic,retain) _WGWidgetRemoteViewController * remoteViewController;                                                                                                          //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (setter=_setExtensionRequest:,getter=_extensionRequest,nonatomic,copy) id<NSCopying> extensionRequest;                                                                                                                                          //@synthesize extensionRequest=_extensionRequest - In the implementation block
@property (setter=_setContentProvidingView:,getter=_contentProvidingView,nonatomic,retain) UIView * contentProvidingView;                                                                                                                                 //@synthesize contentProvidingView=_contentProvidingView - In the implementation block
@property (setter=_setSnapshotView:,getter=_snapshotView,nonatomic,retain) _WGCAPackageView * snapshotView;                                                                                                                                               //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,setter=_setSnapshotBounds:,getter=_snapshotViewBounds,nonatomic) CGRect snapshotViewBounds;                                                                                                                                             //@synthesize snapshotViewBounds=_snapshotViewBounds - In the implementation block
@property (assign,setter=_setEncodingLayerTree:,getter=_isEncodingLayerTree,nonatomic) BOOL encodingLayerTree;                                                                                                                                            //@synthesize encodingLayerTree=_encodingLayerTree - In the implementation block
@property (assign,setter=_setDidRequestViewInset:,getter=_didRequestViewInset,nonatomic) BOOL didRequestViewInset;                                                                                                                                        //@synthesize didRequestViewInset=_didRequestViewInset - In the implementation block
@property (assign,setter=_setDisconnectionTimer:,getter=_disconnectionTimer,nonatomic,__weak) NSTimer * disconnectionTimer;                                                                                                                               //@synthesize disconnectionTimer=_disconnectionTimer - In the implementation block
@property (setter=_setViewWillAppearSemaphore:,getter=_viewWillAppearSemaphore,nonatomic,retain) NSObject*<OS_dispatch_semaphore> viewWillAppearSemaphore;                                                                                                //@synthesize viewWillAppearSemaphore=_viewWillAppearSemaphore - In the implementation block
@property (setter=_setViewWillDisappearSemaphore:,getter=_viewWillDisappearSemaphore,nonatomic,retain) NSObject*<OS_dispatch_semaphore> viewWillDisappearSemaphore;                                                                                       //@synthesize viewWillDisappearSemaphore=_viewWillDisappearSemaphore - In the implementation block
@property (setter=_setRemoteViewControllerConnectionHandler:,getter=_remoteViewControllerConnectionHandler,nonatomic,copy) id remoteViewControllerConnectionHandler;                                                                                      //@synthesize remoteViewControllerConnectionHandler=_remoteViewControllerConnectionHandler - In the implementation block
@property (setter=_setRemoteViewControllerDisconnectionHandler:,getter=_remoteViewControllerDisconnectionHandler,nonatomic,copy) id remoteViewControllerDisconnectionHandler;                                                                             //@synthesize remoteViewControllerDisconnectionHandler=_remoteViewControllerDisconnectionHandler - In the implementation block
@property (setter=_setLastUnanticipatedDisconnectionDate:,getter=_lastUnanticipatedDisconnectionDate,nonatomic,retain) NSDate * lastUnanticipatedDisconnectionDate;                                                                                       //@synthesize lastUnanticipatedDisconnectionDate=_lastUnanticipatedDisconnectionDate - In the implementation block
@property (getter=_openAppearanceTransactions,nonatomic,readonly) NSMapTable * openAppearanceTransactions;                                                                                                                                                //@synthesize openAppearanceTransactions=_openAppearanceTransactions - In the implementation block
@property (assign,setter=_setDidUpdate:,getter=_didUpdate,nonatomic) BOOL didUpdate;                                                                                                                                                                      //@synthesize didUpdate=_didUpdate - In the implementation block
@property (assign,setter=_setImplementsPerformUpdate:,nonatomic) BOOL implementsPerformUpdate;                                                                                                                                                            //@synthesize implementsPerformUpdate=_implementsPerformUpdate - In the implementation block
@property (assign,setter=_setBlacklisted:,getter=_isBlacklisted,nonatomic) BOOL blacklisted;                                                                                                                                                              //@synthesize blacklisted=_blacklisted - In the implementation block
@property (setter=_setBrokenView:,getter=_brokenView,nonatomic,retain) _WGBrokenWidgetView * brokenView;                                                                                                                                                  //@synthesize brokenView=_brokenView - In the implementation block
@property (setter=_setLockedOutView:,getter=_lockedOutView,nonatomic,retain) _WGLockedOutWidgetView * lockedOutView;                                                                                                                                      //@synthesize lockedOutView=_lockedOutView - In the implementation block
@property (setter=_setSequenceIDsToOutstandingWidgetUpdateCompletionHandlers:,getter=_sequenceIDsToOutstandingWidgetUpdateCompletionHandlers,nonatomic,retain) NSMutableDictionary * sequenceIDsToOutstandingWidgetUpdateCompletionHandlers;              //@synthesize sequenceIDsToOutstandingWidgetUpdateCompletionHandlers=_sequenceIDsToOutstandingWidgetUpdateCompletionHandlers - In the implementation block
@property (assign,setter=_setIgnoringParentAppearState:,getter=_isIgnoringParentAppearState,nonatomic) BOOL ignoringParentAppearState;                                                                                                                    //@synthesize ignoringParentAppearState=_ignoringParentAppearState - In the implementation block
@property (nonatomic,readonly) WGWidgetInfo * widgetInfo;                                                                                                                                                                                                 //@synthesize widgetInfo=_widgetInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * widgetIdentifier; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,__weak,readonly) BSAuditToken * auditToken; 
@property (assign,nonatomic,__weak) id<WGWidgetHostingViewControllerDelegate> delegate;                                                                                                                                                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetHostingViewControllerHost> host;                                                                                                                                                                           //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) long long largestAvailableDisplayMode; 
@property (nonatomic,readonly) long long activeDisplayMode;                                                                                                                                                                                               //@synthesize activeDisplayMode=_activeDisplayMode - In the implementation block
@property (assign,nonatomic) long long userSpecifiedDisplayMode; 
@property (getter=isRemoteViewVisible,nonatomic,readonly) BOOL remoteViewVisible; 
@property (getter=isSnapshotLoaded,nonatomic,readonly) BOOL snapshotLoaded; 
@property (getter=isBrokenViewVisible,nonatomic,readonly) BOOL brokenViewVisible; 
@property (getter=isLockedOut,nonatomic,readonly) BOOL lockedOut;                                                                                                                                                                                         //@synthesize lockedOut=_lockedOut - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                                                                                                                                                                         //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) unsigned long long maskedCorners;                                                                                                                                                                                            //@synthesize maskedCorners=_maskedCorners - In the implementation block
@property (assign,nonatomic) BOOL disconnectsImmediately;                                                                                                                                                                                                 //@synthesize disconnectsImmediately=_disconnectsImmediately - In the implementation block
+(BOOL)_canWidgetHostInsertRemoteViewForSequence:(id)arg1 ;
+(void)setWidgetSnapshotTimestampsEnabled:(BOOL)arg1 ;
+(BOOL)_canWidgetHostDisconnectRemoteViewControllerForSequence:(id)arg1 disconnectionTimer:(id)arg2 coalesce:(BOOL)arg3 ;
+(BOOL)_canWidgetHostEndSequenceByDisconnectingRemoteViewControllerForSequence:(id)arg1 ;
+(BOOL)_canWidgetHostConnectRemoteViewControllerByCancellingDisappearanceForSequence:(id)arg1 ;
+(BOOL)_canWidgetHostCaptureSnapshotForSequence:(id)arg1 ;
+(BOOL)_canWidgetHostConnectRemoteViewControllerByRequestingForSequence:(id)arg1 disconnectionTimer:(id)arg2 connectionState:(long long)arg3 ;
+(BOOL)_canWidgetHostRequestRemoteViewControllerForSequence:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setAppBundleID:(NSString *)arg1 ;
-(id)_snapshotView;
-(void)_noteOutstandingUpdateRequestForSequence:(id)arg1 ;
-(id)_remoteViewController;
-(void)_setLargestAvailableDisplayMode:(long long)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)_setLastUnanticipatedDisconnectionDate:(id)arg1 ;
-(void)_setContentProvidingView:(id)arg1 ;
-(void)setHost:(id<WGWidgetHostingViewControllerHost>)arg1 ;
-(long long)userSpecifiedDisplayMode;
-(UIEdgeInsets)_layoutMargins;
-(void)_setSnapshotView:(id)arg1 ;
-(NSString *)widgetIdentifier;
-(NSString *)appBundleID;
-(void)_setBlacklisted:(BOOL)arg1 ;
-(id<WGWidgetHostingViewControllerHost>)host;
-(void)managingContainerDidDisappear:(id)arg1 ;
-(void)_setDidUpdate:(BOOL)arg1 ;
-(void)_setImplementsPerformUpdate:(BOOL)arg1 ;
-(id)_snapshotIdentifierForLayoutMode:(long long)arg1 ;
-(void)_removeAllSnapshotFilesMatchingPredicate:(id)arg1 dueToIssue:(BOOL)arg2 ;
-(long long)_connectionState;
-(id)_proxyRequestQueue;
-(id)_openAppearanceTransactions;
-(void)_setViewWillAppearSemaphore:(id)arg1 ;
-(void)_synchronizeGeometryWithSnapshot;
-(void)_enqueueDisconnectionRequestForSequence:(id)arg1 endTransitionBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setConnectionState:(long long)arg1 ;
-(void)_purgeLegacySnapshotsIfNecessary;
-(void)_setRemoteViewController:(id)arg1 ;
-(void)_validateSnapshotViewForActiveLayoutMode;
-(id)initWithWidgetInfo:(id)arg1 delegate:(id)arg2 host:(id)arg3 ;
-(id<WGWidgetHostingViewControllerDelegate>)delegate;
-(BOOL)_isEncodingLayerTree;
-(/*^block*/id)_updateRequestForSequence:(id)arg1 ;
-(void)_registerUpdateRequestCompletionHandler:(/*^block*/id)arg1 forSequence:(id)arg2 ;
-(void)_removeItemAtURL:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_setBrokenView:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_disconnectRemoteViewControllerForSequence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_contentProvidingView;
-(void)_rowHeightDidChange:(id)arg1 ;
-(void)_setDisconnectionTimer:(id)arg1 ;
-(void)_enqueueRemoteServiceRequest:(/*^block*/id)arg1 withDescription:(id)arg2 ;
-(void)managingContainerWillAppear:(id)arg1 ;
-(BOOL)_canInsertRemoteView:(id*)arg1 ;
-(BOOL)_didUpdate;
-(void)_setIgnoringParentAppearState:(BOOL)arg1 ;
-(void)_setDidRequestViewInset:(BOOL)arg1 ;
-(void)setUserSpecifiedDisplayMode:(long long)arg1 ;
-(id)_cancelTouches;
-(id)_lastUnanticipatedDisconnectionDate;
-(void)_finishDisconnectingRemoteViewControllerForSequence:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDisconnectsImmediately:(BOOL)arg1 ;
-(void)_layoutMarginsDidChange;
-(void)_removeAllSnapshotFilesInActiveDisplayModeForContentSizeCategory:(id)arg1 ;
-(BSAuditToken *)auditToken;
-(void)_setViewWillDisappearSemaphore:(id)arg1 ;
-(void)_beginSequenceWithReason:(id)arg1 completion:(/*^block*/id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(id)_diskWriteQueue;
-(void)_requestRemoteViewControllerForSequence:(id)arg1 completionHander:(/*^block*/id)arg2 ;
-(unsigned long long)maskedCorners;
-(id)_widgetSnapshotURLForSnapshotIdentifier:(id)arg1 ensuringDirectoryExists:(BOOL)arg2 ;
-(void)_disconnectionTimerDidFire:(id)arg1 ;
-(long long)activeDisplayMode;
-(BOOL)isBrokenViewVisible;
-(UIEdgeInsets)_marginInsets;
-(id)_activeLifeCycleSequence;
-(BOOL)isRemoteViewVisible;
-(void)_setEncodingLayerTree:(BOOL)arg1 ;
-(id)_containerIdentifier;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)_didRequestViewInset;
-(double)cornerRadius;
-(void)_captureLayerTree:(/*^block*/id)arg1 ;
-(void)setActiveDisplayMode:(long long)arg1 ;
-(void)setDelegate:(id<WGWidgetHostingViewControllerDelegate>)arg1 ;
-(void)_requestInsertionOfRemoteViewAfterViewWillAppearForSequence:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)_remoteViewControllerDisconnectionHandler;
-(void)_requestVisibilityStateUpdateForPossiblyAppearing:(BOOL)arg1 sequence:(id)arg2 ;
-(id)description;
-(CGRect)_snapshotViewBounds;
-(id)_viewWillAppearSemaphore;
-(void)_connectRemoteViewControllerForReason:(id)arg1 sequence:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_insertBrokenView;
-(void)_packageViewWithBlock:(/*^block*/id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_enqueueRequest:(/*^block*/id)arg1 inQueue:(id)arg2 trampolinedToMainQueue:(BOOL)arg3 withDescription:(id)arg4 ;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_setExtensionRequest:(id)arg1 ;
-(void)_performUpdateForSequence:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_proxyConnectionQueue;
-(void)viewDidLoad;
-(void)_invalidateVisibleFrame;
-(void)_removeItemAsynchronouslyAtURL:(id)arg1 ;
-(BOOL)isLinkedOnOrAfterSystemVersion:(id)arg1 ;
-(void)_setSequenceIDsToOutstandingWidgetUpdateCompletionHandlers:(id)arg1 ;
-(void)requestSettingsIconWithHandler:(/*^block*/id)arg1 ;
-(id)_disconnectionTimer;
-(void)maximumSizeDidChangeForDisplayMode:(long long)arg1 ;
-(BOOL)_isIgnoringParentAppearState;
-(CGSize)_maxSizeForDisplayMode:(long long)arg1 ;
-(void)_insertSnapshotWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_attemptReconnectionAfterUnanticipatedDisconnection;
-(BOOL)_isBlacklisted;
-(long long)largestAvailableDisplayMode;
-(void)setLockedOut:(BOOL)arg1 withExplanation:(id)arg2 ;
-(void)_beginRemoteViewControllerAppearanceTransitionIfNecessary:(BOOL)arg1 semaphore:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_hasOutstandingUpdateRequestForSequence:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_widgetSnapshotURLForSnapshotIdentifier:(id)arg1 ;
-(void)_insertLockedOutViewWithExplanation:(id)arg1 ;
-(id)_sequenceIDsToOutstandingWidgetUpdateCompletionHandlers;
-(void)_removeAllSnapshotFilesInActiveDisplayModeForAllButActiveUserInterfaceStyle;
-(void)_captureSnapshotAndBeginDisappearanceTransitionForSequence:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_packageViewFromURL:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)invalidateCachedSnapshotWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)widget:(id)arg1 didTerminateWithError:(id)arg2 ;
-(void)_insertSnapshotViewIfAppropriate;
-(void)_endSequence:(id)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadSnapshotViewFromDiskIfNecessary:(/*^block*/id)arg1 ;
-(void)_invalidateSnapshotWithForce:(BOOL)arg1 removingSnapshotFilesForActiveDisplayMode:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_managingContainerIsVisible;
-(BOOL)isSnapshotLoaded;
-(void)_initiateNewSequenceIfNecessary;
-(void)_scheduleDisconnectionTimerForSequence:(id)arg1 endTransitionBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleReconnectionRequest:(id)arg1 ;
-(void)_setupRequestQueue;
-(void)setCornerRadius:(double)arg1 ;
-(void)_insertAppropriateContentView;
-(BOOL)_isActiveSequence:(id)arg1 ;
-(void)_invalidateDisconnectionTimer;
-(BOOL)disconnectsImmediately;
-(void)_insertContentProvidingSubview:(id)arg1 sequence:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_endRemoteViewControllerAppearanceTransitionIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_setLockedOutView:(id)arg1 ;
-(void)_abortActiveSequence;
-(id)_extensionRequest;
-(void)_updatePreferredContentSizeWithHeight:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isLockedOut;
-(id)_viewWillDisappearSemaphore;
-(void)_endRemoteViewControllerAppearanceTransitionIfNecessary;
-(BOOL)implementsPerformUpdate;
-(NSString *)displayName;
-(void)requestIconWithHandler:(/*^block*/id)arg1 ;
-(void)_setRemoteViewControllerDisconnectionHandler:(/*^block*/id)arg1 ;
-(BOOL)_shouldRemoveSnapshotWhenNotVisible;
-(id)_lockedOutView;
-(void)invalidateCachedSnapshotWithCompletionHandler:(/*^block*/id)arg1 ;
-(WGWidgetInfo *)widgetInfo;
-(/*^block*/id)_remoteViewControllerConnectionHandler;
-(void)_updateWidgetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setRemoteViewControllerConnectionHandler:(/*^block*/id)arg1 ;
-(id)_widgetSnapshotURLForLayoutMode:(long long)arg1 ensuringDirectoryExists:(BOOL)arg2 ;
-(void)_disconnectRemoteViewControllerForReason:(id)arg1 sequence:(id)arg2 coalesce:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)_brokenView;
-(void)_removeAllSnapshotFilesDueToIssue:(BOOL)arg1 ;
-(void)_removeAllSnapshotFilesForActiveDisplayMode;
-(void)_setSnapshotBounds:(CGRect)arg1 ;
@end

