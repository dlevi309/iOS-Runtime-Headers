/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSString, ICStoreURLRequest;

@interface ICSongDownloadDoneRequest : ICRequestOperation {

	ICStoreRequestContext* _requestContext;
	NSString* _downloadIdentifier;
	unsigned long long _songID;
	ICStoreURLRequest* _storeURLRequest;

}
-(void)cancel;
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithRequestContext:(id)arg1 downloadIdentifier:(id)arg2 songID:(unsigned long long)arg3 ;
@end

