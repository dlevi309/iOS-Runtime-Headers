/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/ASDClipSessionDelegate.h>

@protocol CPSAppInfoFetching, OS_dispatch_queue, CPSInstallationControllerDelegate;
@class NSMutableDictionary, NSObject, NSString;

@interface CPSInstallationController : NSObject <ASDClipSessionDelegate> {

	id<CPSAppInfoFetching> _appInfoFetcher;
	NSMutableDictionary* _sessionsByBundleID;
	NSMutableDictionary* _installPromisesBySessionID;
	NSObject*<OS_dispatch_queue> _queue;
	id<CPSInstallationControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CPSInstallationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CPSInstallationControllerDelegate>)delegate;
-(void)setDelegate:(id<CPSInstallationControllerDelegate>)arg1 ;
-(void)clipSessionDidCompleteSuccessfully:(id)arg1 ;
-(void)clipSession:(id)arg1 didFailWithError:(id)arg2 ;
-(void)clipSessionDidInstallPlaceholder:(id)arg1 ;
-(void)clipSession:(id)arg1 didUpdateProgress:(double)arg2 ;
-(BOOL)stopStallingCurrentInstallation;
-(id)initWithAppInfoFetcher:(id)arg1 ;
-(id)_placeholderArtworkForSession:(id)arg1 ;
-(void)_prewarmDemoIPAWithBundleID:(id)arg1 session:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_informDelegateDidInstallPlaceholder:(id)arg1 ;
-(id)_asdClipRequestWithSession:(id)arg1 ;
-(void)_cancelClipSessionWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_continueInstallForBundleID:(id)arg1 session:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_getClipSessionForBundleID:(id)arg1 sourceBundleID:(id)arg2 forInstall:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_bundleIDFromSession:(id)arg1 ;
-(void)_doneWithSession:(id)arg1 error:(id)arg2 ;
-(void)prewarmClipWithBundleID:(id)arg1 session:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelPrewarmForBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)installClipWithBundleID:(id)arg1 session:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

