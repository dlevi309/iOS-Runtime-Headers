/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICStoreURLRequest, NSString, ICStoreRequestContext;

@interface ICMusicSubscriptionPlaybackRequestOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICStoreURLRequest* _activeURLRequest;
	BOOL _delegatedPlayback;
	BOOL _followUp;
	NSString* _assetSourceStorefrontID;
	long long _requestType;
	/*^block*/id _willBeginExecutionHandler;
	ICStoreRequestContext* _requestContext;
	/*^block*/id _responseHandler;
	unsigned long long _storeCloudID;
	long long _storeSubscriptionAdamID;
	long long _storePurchasedAdamID;
	NSString* _cloudUniversalLibraryID;

}

@property (nonatomic,copy) NSString * assetSourceStorefrontID;                               //@synthesize assetSourceStorefrontID=_assetSourceStorefrontID - In the implementation block
@property (assign,getter=isDelegatedPlayback,nonatomic) BOOL delegatedPlayback;              //@synthesize delegatedPlayback=_delegatedPlayback - In the implementation block
@property (assign,nonatomic) long long requestType;                                          //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) id willBeginExecutionHandler;                                     //@synthesize willBeginExecutionHandler=_willBeginExecutionHandler - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;                           //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) id responseHandler;                                               //@synthesize responseHandler=_responseHandler - In the implementation block
@property (assign,nonatomic) unsigned long long storeCloudID;                                //@synthesize storeCloudID=_storeCloudID - In the implementation block
@property (assign,nonatomic) long long storeSubscriptionAdamID;                              //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
@property (assign,nonatomic) long long storePurchasedAdamID;                                 //@synthesize storePurchasedAdamID=_storePurchasedAdamID - In the implementation block
@property (nonatomic,copy) NSString * cloudUniversalLibraryID;                               //@synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID - In the implementation block
@property (assign,getter=isFollowUp,nonatomic) BOOL followUp;                                //@synthesize followUp=_followUp - In the implementation block
-(void)setRequestType:(long long)arg1 ;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(id)init;
-(void)setDelegatedPlayback:(BOOL)arg1 ;
-(long long)requestType;
-(void)start;
-(void)setStoreCloudID:(unsigned long long)arg1 ;
-(BOOL)isFollowUp;
-(id)willBeginExecutionHandler;
-(void)setWillBeginExecutionHandler:(id)arg1 ;
-(void)setFollowUp:(BOOL)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(NSString *)assetSourceStorefrontID;
-(id)responseHandler;
-(long long)storeSubscriptionAdamID;
-(BOOL)isDelegatedPlayback;
-(long long)storePurchasedAdamID;
-(void)setAssetSourceStorefrontID:(NSString *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(void)setStorePurchasedAdamID:(long long)arg1 ;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)cancel;
-(unsigned long long)storeCloudID;
-(NSString *)cloudUniversalLibraryID;
@end

