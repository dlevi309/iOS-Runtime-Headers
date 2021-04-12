/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSString, ICAddToWishListResponse;

@interface ICAddToWishListRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	NSString* _buyParams;
	long long _storeItemID;
	NSString* _itemName;
	NSString* _itemKind;
	ICAddToWishListResponse* _response;

}
-(void)execute;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 buyParams:(id)arg2 storeItemID:(long long)arg3 itemName:(id)arg4 itemKind:(id)arg5 ;
-(id)initWithRequestContext:(id)arg1 platformMetadataItem:(id)arg2 ;
@end

