/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithRequestContext:(id)arg1 mediaItem:(id)arg2 ;
-(id)_responseDictionaryForKeyCertificateURL:(id)arg1 keyServerURL:(id)arg2 ;
@end

