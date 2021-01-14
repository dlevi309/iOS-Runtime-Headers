/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/CPSSessionProxyDelegate.h>

@class CPSSessionProxy, NSString;

@interface CPSClipRequest : NSObject <CPSSessionProxyDelegate> {

	CPSSessionProxy* _sessionProxy;
	/*^block*/id _completionHandler;
	BOOL _shouldOpenClipWhenMetadataIsUpdated;
	BOOL _shouldReturnErrorOnUserCancellation;

}

@property (assign,nonatomic) BOOL shouldReturnErrorOnUserCancellation;              //@synthesize shouldReturnErrorOnUserCancellation=_shouldReturnErrorOnUserCancellation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)getUserNotificationConsentForBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)confirmLocationWithURL:(id)arg1 inRegion:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)deleteClipsWithBundleIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)getLocationConfirmationConsentForBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 fallbackClipBundleID:(id)arg2 ;
-(id)sessionProxy;
-(void)requestClipWithCompletion:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setShouldReturnErrorOnUserCancellation:(BOOL)arg1 ;
-(void)proxy:(id)arg1 didDetermineAvailability:(BOOL)arg2 ;
-(void)proxyDidUpdateMetadata:(id)arg1 ;
-(void)proxy:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)proxyAppDidLaunchForTesting:(id)arg1 ;
-(void)proxyRemoteServiceDidCrash:(id)arg1 ;
-(BOOL)shouldReturnErrorOnUserCancellation;
-(id)_errorIgnoringUserCancelledErrorIfNeeded:(id)arg1 ;
-(void)_openClipWithInvocationUI;
-(void)installClipWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

