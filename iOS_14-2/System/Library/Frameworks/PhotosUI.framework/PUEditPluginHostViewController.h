/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXForcedDismissableViewController.h>
#import <libobjc.A.dylib/PUEditingExtensionUndoButtonHost.h>

@protocol PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate, NSCopying;
@class PUEditPlugin, UIViewController, NSNumber, PUEditingExtensionUndoProxyHostSide, UIBarButtonItem, NSString;

@interface PUEditPluginHostViewController : UIViewController <PXForcedDismissableViewController, PUEditingExtensionUndoButtonHost> {

	BOOL __extensionDidBeginContentEditing;
	BOOL __didHandleCancel;
	BOOL __didHandleDone;
	BOOL _showUndoRedoButtons;
	PUEditPlugin* _plugin;
	id<PUEditPluginHostViewControllerDataSource> _dataSource;
	id<PUEditPluginHostViewControllerDelegate> _delegate;
	UIViewController* __remoteViewController;
	id<NSCopying> __request;
	id __disablingIdleTimerToken;
	NSNumber* __allowsFullScreen;
	PUEditingExtensionUndoProxyHostSide* _undoProxy;
	UIBarButtonItem* _undoBarButtonItem;
	UIBarButtonItem* _redoBarButtonItem;

}

@property (setter=_setRemoteViewController:,retain) UIViewController * _remoteViewController;                                //@synthesize _remoteViewController=__remoteViewController - In the implementation block
@property (setter=_setRequest:,copy) id<NSCopying> _request;                                                                 //@synthesize _request=__request - In the implementation block
@property (assign,setter=_setExtensionDidBeginContentEditing:,nonatomic) BOOL _extensionDidBeginContentEditing;              //@synthesize _extensionDidBeginContentEditing=__extensionDidBeginContentEditing - In the implementation block
@property (assign,setter=_setDidHandleCancel:,nonatomic) BOOL _didHandleCancel;                                              //@synthesize _didHandleCancel=__didHandleCancel - In the implementation block
@property (assign,setter=_setDidHandleDone:,nonatomic) BOOL _didHandleDone;                                                  //@synthesize _didHandleDone=__didHandleDone - In the implementation block
@property (setter=_setDisablingIdleTimerToken:,nonatomic,retain) id _disablingIdleTimerToken;                                //@synthesize _disablingIdleTimerToken=__disablingIdleTimerToken - In the implementation block
@property (setter=_setAllowsFullScreen:,nonatomic,retain) NSNumber * _allowsFullScreen;                                      //@synthesize _allowsFullScreen=__allowsFullScreen - In the implementation block
@property (nonatomic,retain) PUEditingExtensionUndoProxyHostSide * undoProxy;                                                //@synthesize undoProxy=_undoProxy - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * undoBarButtonItem;                                                     //@synthesize undoBarButtonItem=_undoBarButtonItem - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * redoBarButtonItem;                                                     //@synthesize redoBarButtonItem=_redoBarButtonItem - In the implementation block
@property (assign,nonatomic) BOOL showUndoRedoButtons;                                                                       //@synthesize showUndoRedoButtons=_showUndoRedoButtons - In the implementation block
@property (nonatomic,readonly) PUEditPlugin * plugin;                                                                        //@synthesize plugin=_plugin - In the implementation block
@property (assign,nonatomic,__weak) id<PUEditPluginHostViewControllerDataSource> dataSource;                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PUEditPluginHostViewControllerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)_remoteViewController;
-(BOOL)prefersStatusBarHidden;
-(id)_extensionVendorProxy;
-(void)_setRemoteViewController:(id)arg1 ;
-(id<PUEditPluginHostViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(PUEditPlugin *)plugin;
-(void)_handleDoneButton:(id)arg1 ;
-(id<PUEditPluginHostViewControllerDataSource>)dataSource;
-(void)_handleCancel;
-(void)_dismiss;
-(PUEditingExtensionUndoProxyHostSide *)undoProxy;
-(void)_setRequest:(id)arg1 ;
-(void)setDelegate:(id<PUEditPluginHostViewControllerDelegate>)arg1 ;
-(id)initWithPlugin:(id)arg1 ;
-(void)loadRemoteViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_queryAllowsFullScreen:(/*^block*/id)arg1 ;
-(void)_handleVendorVersion:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(/*^block*/id)arg2 timeout:(double)arg3 ;
-(void)_beginDisablingIdleTimer;
-(void)_queryShouldShowCancelConfirmationWithResponseHandler:(/*^block*/id)arg1 timeout:(double)arg2 ;
-(void)_beginContentEditingWithCompletionHandler:(/*^block*/id)arg1 timeout:(double)arg2 ;
-(void)_addRemoteViewControllerIfNeededAllowingFullscreen:(BOOL)arg1 ;
-(void)_updateBarButtonsWithUndoRedoVisible:(BOOL)arg1 ;
-(void)_endDisablingIdleTimerIfNecessary;
-(void)_setupUndoProxy;
-(void)handleUndoButton:(id)arg1 ;
-(void)handleRedoButton:(id)arg1 ;
-(BOOL)_extensionDidBeginContentEditing;
-(void)_setExtensionDidBeginContentEditing:(BOOL)arg1 ;
-(BOOL)_didHandleCancel;
-(void)_setDidHandleCancel:(BOOL)arg1 ;
-(BOOL)_didHandleDone;
-(void)_setDidHandleDone:(BOOL)arg1 ;
-(id)_disablingIdleTimerToken;
-(void)_setDisablingIdleTimerToken:(id)arg1 ;
-(NSNumber *)_allowsFullScreen;
-(void)_setAllowsFullScreen:(id)arg1 ;
-(void)setUndoProxy:(PUEditingExtensionUndoProxyHostSide *)arg1 ;
-(UIBarButtonItem *)undoBarButtonItem;
-(void)setUndoBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)redoBarButtonItem;
-(void)setDataSource:(id<PUEditPluginHostViewControllerDataSource>)arg1 ;
-(void)setRedoBarButtonItem:(UIBarButtonItem *)arg1 ;
-(BOOL)showUndoRedoButtons;
-(void)setShowUndoRedoButtons:(BOOL)arg1 ;
-(void)_handleCancelButton:(id)arg1 ;
-(void)setUndoEnabled:(BOOL)arg1 redoEnabled:(BOOL)arg2 ;
-(void)setShowUndoRedo:(BOOL)arg1 ;
-(id)_hostContext;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)dealloc;
-(id<NSCopying>)_request;
@end

