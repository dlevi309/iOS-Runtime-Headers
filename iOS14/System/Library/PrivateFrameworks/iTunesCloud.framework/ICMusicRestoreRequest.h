/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)execute;
-(id)_serializedBodyDataWithAccountID:(id)arg1 ;
-(id)initWithRequestContext:(id)arg1 parameters:(id)arg2 ;
-(void)performRestoreRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancel;
@end

