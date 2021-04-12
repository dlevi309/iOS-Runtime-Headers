/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <iTunesCloud/ICRequestOperation.h>
#import <libobjc.A.dylib/AVContentKeySessionDelegate.h>

@protocol OS_dispatch_queue;
@class AVContentKeySession, NSObject, ICStoreRequestContext, NSData, NSURL, NSString;

@interface BLSecureOfflineKeyDeliveryRequest : ICRequestOperation <AVContentKeySessionDelegate> {

	AVContentKeySession* _keySession;
	NSObject*<OS_dispatch_queue> _keySessionQueue;
	ICStoreRequestContext* _requestContext;
	NSData* _persistentKeyData;
	NSData* _certificateData;
	NSURL* _keyCertificateURL;
	NSURL* _keyServerURL;
	NSString* _identity;

}

@property (nonatomic,copy) NSURL * keyCertificateURL;               //@synthesize keyCertificateURL=_keyCertificateURL - In the implementation block
@property (nonatomic,copy) NSURL * keyServerURL;                    //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (nonatomic,copy) NSString * identity;                     //@synthesize identity=_identity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)identity;
-(void)execute;
-(void)setIdentity:(NSString *)arg1 ;
-(id)_deviceGUID;
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2 ;
-(void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3 ;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
-(void)setKeyServerURL:(NSURL *)arg1 ;
-(void)setKeyCertificateURL:(NSURL *)arg1 ;
-(void)_createSPCData;
-(void)_fetchCKCDataUsingSPC:(id)arg1 forKeyRequest:(id)arg2 ;
@end

