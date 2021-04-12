/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class SSLookupRequest, NSString, NSURL;

@interface MKAppLaunchController : NSObject {

	SSLookupRequest* _request;
	NSString* _webURLString;
	NSURL* webURL;

}

@property (nonatomic,retain) SSLookupRequest * storeRequest;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURL * webURL; 
+(id)sharedController;
+(void)launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(NSURL *)webURL;
-(void)setWebURL:(NSURL *)arg1 ;
-(SSLookupRequest *)storeRequest;
-(void)setStoreRequest:(SSLookupRequest *)arg1 ;
-(void)lookUpAppStoreURLForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

