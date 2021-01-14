/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/ASORemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/ASORemoteContextProvider.h>

@protocol OS_dispatch_queue;
@class ASORemoteViewController, ASOHostContext, ASORemoteOverlay, NSObject, NSOperationQueue, NSString;

@interface ASOOverlayViewController : UIViewController <ASORemoteViewControllerDelegate, ASORemoteContextProvider> {

	BOOL _isViewServiceLoading;
	ASORemoteViewController* _remoteViewController;
	ASOHostContext* _context;
	ASORemoteOverlay* _currentOverlay;
	NSObject*<OS_dispatch_queue> _viewServiceQueue;
	NSOperationQueue* _presentationQueue;

}

@property (nonatomic,retain) ASORemoteViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (assign,nonatomic,__weak) ASOHostContext * context;                             //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) ASORemoteOverlay * currentOverlay;                           //@synthesize currentOverlay=_currentOverlay - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> viewServiceQueue;               //@synthesize viewServiceQueue=_viewServiceQueue - In the implementation block
@property (assign,nonatomic) BOOL isViewServiceLoading;                                   //@synthesize isViewServiceLoading=_isViewServiceLoading - In the implementation block
@property (nonatomic,retain) NSOperationQueue * presentationQueue;                        //@synthesize presentationQueue=_presentationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ASORemoteViewController *)remoteViewController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(ASOHostContext *)context;
-(void)didEnterBackground;
-(NSOperationQueue *)presentationQueue;
-(void)setRemoteViewController:(ASORemoteViewController *)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)setPresentationQueue:(NSOperationQueue *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setContext:(ASOHostContext *)arg1 ;
-(void)presentOverlay:(id)arg1 ;
-(void)dismissOverlay;
-(void)loadViewServiceIfNeeded;
-(NSObject*<OS_dispatch_queue>)viewServiceQueue;
-(void)_loadViewServiceIfNeeded:(/*^block*/id)arg1 ;
-(BOOL)isViewServiceLoading;
-(void)setIsViewServiceLoading:(BOOL)arg1 ;
-(void)failAllQueuedOverlaysWithError:(id)arg1 ;
-(void)_loadRemoteViewController:(/*^block*/id)arg1 ;
-(void)setCurrentOverlay:(ASORemoteOverlay *)arg1 ;
-(ASORemoteOverlay *)currentOverlay;
-(void)shutdownViewServiceIfOverlayOffScreen;
-(id)hostContextForOverlayViewService;
-(id)remoteViewControllerForOverlayViewService;
-(void)willStartPresentingOverlay:(id)arg1 ;
-(void)didFinishDismissingOverlay:(id)arg1 ;
-(void)setViewServiceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

