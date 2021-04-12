/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, MPMediaItem, ICBuyProductRequest, ICStoreMediaResponseItem;

@interface BLStoreItemMetadataRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	MPMediaItem* _mediaItem;
	ICBuyProductRequest* _buyProductRequest;
	ICStoreMediaResponseItem* _storeMetadata;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(void)_performBuyProductRequest;
-(id)_responseDictionaryForKeyCertificateURL:(id)arg1 keyServerURL:(id)arg2 ;
-(id)initWithRequestContext:(id)arg1 mediaItem:(id)arg2 ;
@end

