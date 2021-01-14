/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <iTunesCloud/ICRequestOperation.h>

@class BLStoreItemMetadataRequest, ICSecureKeyDeliveryRequest, MPMediaItem, AVAssetResourceLoadingRequest;

@interface BLStreamingKeyRequest : ICRequestOperation {

	BLStoreItemMetadataRequest* _metadataRequest;
	ICSecureKeyDeliveryRequest* _secureKeyRequest;
	MPMediaItem* _mediaItem;
	AVAssetResourceLoadingRequest* _loadingRequest;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(void)_performStreamingKeyRequestForHLSAsset:(id)arg1 ;
-(id)initWithMediaItem:(id)arg1 loadingRequest:(id)arg2 ;
@end

