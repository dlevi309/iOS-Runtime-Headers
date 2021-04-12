/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICLibraryAuthServiceClientTokenResponse;

@interface ICLibraryAuthServiceClientTokenRequest : ICRequestOperation {

	ICStoreRequestContext* _storeRequestContext;
	ICLibraryAuthServiceClientTokenResponse* _response;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithStoreRequestContext:(id)arg1 ;
@end

