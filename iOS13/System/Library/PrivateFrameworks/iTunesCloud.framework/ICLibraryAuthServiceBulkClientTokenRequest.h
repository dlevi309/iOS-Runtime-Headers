/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

