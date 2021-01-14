/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SidecarUI.framework/SidecarUI
*/

#import <UIKitCore/UIViewController.h>
#import <SidecarUI/SidecarServiceServiceInterface.h>
#import <SidecarUI/SidecarServiceProviderDelegate.h>

@class SidecarRequest, NSString;

@interface SidecarServiceViewController : UIViewController <SidecarServiceServiceInterface, SidecarServiceProviderDelegate> {

	BOOL _terminationRequested;
	BOOL _calledServiceReady;
	SidecarRequest* _request;
	BOOL _allowsDisplaySleep;
	BOOL _backgrounded;
	BOOL _wantsVolumeButtonEvents;
	BOOL _waitForReconnect;

}

@property (readonly) id<SidecarServiceHostInterface> hostProxy; 
@property (readonly) SidecarRequest * request; 
@property (readonly) BOOL waitForServiceReady; 
@property (assign,nonatomic) BOOL wantsVolumeButtonEvents;                   //@synthesize wantsVolumeButtonEvents=_wantsVolumeButtonEvents - In the implementation block
@property (assign,nonatomic) BOOL allowsDisplaySleep;                        //@synthesize allowsDisplaySleep=_allowsDisplaySleep - In the implementation block
@property (assign,nonatomic) BOOL backgrounded;                              //@synthesize backgrounded=_backgrounded - In the implementation block
@property (assign,nonatomic) BOOL waitForReconnect;                          //@synthesize waitForReconnect=_waitForReconnect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecureForRemoteViewService;
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRequest:(SidecarRequest *)arg1 ;
-(void)setWantsVolumeButtonEvents:(BOOL)arg1 ;
-(id<SidecarServiceHostInterface>)hostProxy;
-(SidecarRequest *)request;
-(long long)requestCompleted;
-(void)viewDidLoad;
-(void)setBackgrounded:(BOOL)arg1 ;
-(BOOL)backgrounded;
-(void)requestDidFinish:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)sidecarServiceProviderHandleRequest:(id)arg1 ;
-(void)sidecarServiceProviderTerminate;
-(void)sidecarRequest:(id)arg1 receivedItems:(id)arg2 ;
-(void)sidecarServiceActive;
-(void)sidecarServiceCancel;
-(void)sidecarServiceVolumeUpButtonPressed:(BOOL)arg1 ;
-(void)sidecarServiceVolumeDownButtonPressed:(BOOL)arg1 ;
-(void)sidecarServiceSetBackgrounded:(BOOL)arg1 ;
-(BOOL)waitForServiceReady;
-(void)serviceReady;
-(void)requestDidStart:(id)arg1 ;
-(void)_notifyServiceAndTerminate:(long long)arg1 ;
-(void)receivedItems:(id)arg1 ;
-(void)completeRequest:(long long)arg1 ;
-(void)setWaitForReconnect:(BOOL)arg1 ;
-(void)sidecarServiceUpdateSupportedOrientations;
-(void)setAllowsDisplaySleep:(BOOL)arg1 ;
-(BOOL)allowsDisplaySleep;
-(BOOL)wantsVolumeButtonEvents;
-(BOOL)waitForReconnect;
@end

