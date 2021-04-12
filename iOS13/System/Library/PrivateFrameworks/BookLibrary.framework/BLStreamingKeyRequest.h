/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

