/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <iTunesCloud/ICRequestOperation.h>

@class BLStoreItemMetadataRequest, ICStoreRequestContext, ICStoreHLSAssetInfo, BLSecureOfflineKeyDeliveryRequest, MPMediaItem, NSString, NSData;

@interface BLOfflineKeyRequest : ICRequestOperation {

	BLStoreItemMetadataRequest* _metadataRequest;
	ICStoreRequestContext* _requestContext;
	ICStoreHLSAssetInfo* _assetInfo;
	BLSecureOfflineKeyDeliveryRequest* _secureKeyRequest;
	MPMediaItem* _mediaItem;
	NSString* _identity;
	NSData* _persistentKeyData;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(void)_performOfflineKeyRequest;
-(id)initWithMediaItem:(id)arg1 identity:(id)arg2 ;
@end

