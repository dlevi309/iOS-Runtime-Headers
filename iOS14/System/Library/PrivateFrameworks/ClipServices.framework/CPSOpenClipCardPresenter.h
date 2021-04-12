/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@protocol OS_dispatch_queue;
@class SBSRemoteAlertHandle, SFClient, NSObject, NSString;

@interface CPSOpenClipCardPresenter : NSObject <SBSRemoteAlertHandleObserver> {

	SBSRemoteAlertHandle* _alertHandle;
	SFClient* _sharingClient;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _stagedLocationConfirmationDisplay;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPresenter;
+(id)responseForOpenClipAction:(BOOL)arg1 ;
-(id)init;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)_activateAlertHandleWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_showCardWithOptions:(unsigned long long)arg1 activationHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_activateAlertHandleWithSettings:(id)arg1 viewControllerClassName:(id)arg2 repsonseHandler:(/*^block*/id)arg3 ;
-(void)_sharingClientDidInvalidate;
-(void)_invalidateSharingClient;
-(void)_performStagedLocationConfirmationDisplayIfNeeded;
-(void)showCardWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)showLocationConfirmationSheetWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

