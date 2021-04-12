/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest, ICMediaRedownloadResponse, ICMusicRestoreRequestParameters;

@interface ICMusicRestoreRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	ICStoreURLRequest* _storeURLRequest;
	ICMediaRedownloadResponse* _response;
	ICMusicRestoreRequestParameters* _requestParameters;

}
-(void)cancel;
-(void)execute;
-(id)_serializedBodyDataWithAccountID:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 parameters:(id)arg2 ;
-(void)performRestoreRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end

