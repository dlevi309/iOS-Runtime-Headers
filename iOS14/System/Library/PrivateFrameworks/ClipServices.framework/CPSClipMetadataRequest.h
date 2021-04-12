/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/CPSSessionProxyDelegate.h>

@class NSString, NSURL, CPSSessionProxy, CPSPromise, CPSSessionConfiguration;

@interface CPSClipMetadataRequest : NSObject <CPSSessionProxyDelegate> {

	NSString* _fullHash;
	NSURL* _requestURL;
	CPSSessionProxy* _sessionProxy;
	CPSPromise* _availabilityPromise;
	CPSPromise* _iconPromise;
	CPSPromise* _metadataPromise;

}

@property (nonatomic,readonly) CPSSessionConfiguration * sessionConfiguration; 
@property (getter=isLikelyAvailable,nonatomic,readonly) BOOL likelyAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 fallbackClipBundleID:(id)arg2 ;
-(void)requestDownloadedIconWithMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestMetadataWithCompletion:(/*^block*/id)arg1 ;
-(CPSSessionConfiguration *)sessionConfiguration;
-(id)getClipMetadataSynchronously;
-(void)dealloc;
-(id)initWithURLHash:(id)arg1 ;
-(void)_setUpSessionProxyAndPromisesWithURL:(id)arg1 fallbackClipBundleID:(id)arg2 ;
-(BOOL)isLikelyAvailable;
-(void)proxy:(id)arg1 didDetermineAvailability:(BOOL)arg2 ;
-(void)proxyDidUpdateMetadata:(id)arg1 ;
-(void)proxyDidRetrieveBusinessIcon:(id)arg1 ;
-(void)proxy:(id)arg1 didRetrieveApplicationIcon:(id)arg2 ;
-(void)proxy:(id)arg1 didFinishLoadingWithError:(id)arg2 ;
-(void)proxyRemoteServiceDidCrash:(id)arg1 ;
-(id)getDownloadedIconURLSynchronously;
@end

