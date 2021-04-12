/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICLibraryAuthServiceBulkClientTokenResponse, NSSet;

@interface ICLibraryAuthServiceBulkClientTokenRequest : ICRequestOperation {

	ICStoreRequestContext* _storeRequestContext;
	ICLibraryAuthServiceBulkClientTokenResponse* _response;
	NSSet* _accountDSIDs;

}
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithStoreRequestContext:(id)arg1 accountDSIDs:(id)arg2 ;
@end

