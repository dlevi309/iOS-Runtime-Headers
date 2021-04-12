/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DOCRemoteContextInterface.h>

@protocol DOCRemoteViewControllerDelegate;
@class DOCRemoteContext, DOCConfiguration, DOCAppearance;

@interface DOCRemoteViewController : _UIRemoteViewController <DOCRemoteContextInterface> {

	BOOL _isBrowserViewController;
	id<DOCRemoteViewControllerDelegate> _delegate;
	DOCRemoteContext* _hostContext;
	DOCConfiguration* _configuration;
	DOCAppearance* _lastAppearance;

}

@property (retain) DOCRemoteContext * hostContext;                            //@synthesize hostContext=_hostContext - In the implementation block
@property (retain) DOCConfiguration * configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (assign) BOOL isBrowserViewController;                              //@synthesize isBrowserViewController=_isBrowserViewController - In the implementation block
@property (retain) DOCAppearance * lastAppearance;                            //@synthesize lastAppearance=_lastAppearance - In the implementation block
@property (__weak) id<DOCRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)instantiateRemoteDocumentBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)serviceExtension;
+(id)instantiateRemoteViewControllerWithConfiguration:(id)arg1 transparent:(BOOL)arg2 errorHandler:(/*^block*/id)arg3 hostProxy:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)instantiateRemoteTargetSelectionBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id<DOCRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<DOCRemoteViewControllerDelegate>)arg1 ;
-(void)setConfiguration:(DOCConfiguration *)arg1 ;
-(DOCConfiguration *)configuration;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)updateAppearance:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateAppearance:(id)arg1 shouldFlushCA:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)updateEditingTo:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHostContext:(DOCRemoteContext *)arg1 ;
-(DOCRemoteContext *)hostContext;
-(DOCAppearance *)lastAppearance;
-(void)setLastAppearance:(DOCAppearance *)arg1 ;
-(BOOL)isBrowserViewController;
-(void)setIsBrowserViewController:(BOOL)arg1 ;
@end

