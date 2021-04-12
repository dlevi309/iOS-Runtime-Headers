/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <iTunesCloud/ICRequestOperation.h>

@class BLStoreItemMetadataRequest, ICStoreHLSAssetInfo, BLSecureOfflineKeyDeliveryRequest, MPMediaItem, NSString, NSData;

@interface BLOfflineKeyRequest : ICRequestOperation {

	BLStoreItemMetadataRequest* _metadataRequest;
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

