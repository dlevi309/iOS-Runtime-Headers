/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/


@class NSString, NSURL;

@interface BMAppClipLaunchEvent : NSObject {

	NSString* _URLHash;
	NSString* _clipBundleID;
	NSString* _appBundleID;
	NSString* _webAppBundleID;
	NSString* _launchReason;
	NSURL* _fullURL;
	NSURL* _referrerURL;
	NSString* _referrerBundleID;

}

@property (nonatomic,copy,readonly) NSString * URLHash;                       //@synthesize URLHash=_URLHash - In the implementation block
@property (nonatomic,copy,readonly) NSString * clipBundleID;                  //@synthesize clipBundleID=_clipBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * appBundleID;                   //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * webAppBundleID;                //@synthesize webAppBundleID=_webAppBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchReason;                  //@synthesize launchReason=_launchReason - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fullURL;                          //@synthesize fullURL=_fullURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * referrerURL;                      //@synthesize referrerURL=_referrerURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * referrerBundleID;              //@synthesize referrerBundleID=_referrerBundleID - In the implementation block
-(NSString *)appBundleID;
-(NSString *)clipBundleID;
-(id)init;
-(NSString *)referrerBundleID;
-(id)description;
-(NSURL *)referrerURL;
-(NSString *)webAppBundleID;
-(NSString *)launchReason;
-(NSURL *)fullURL;
-(NSString *)URLHash;
-(id)initWithURLHash:(id)arg1 clipBundleID:(id)arg2 appBundleID:(id)arg3 webAppBundleID:(id)arg4 launchReason:(id)arg5 fullURL:(id)arg6 referrerURL:(id)arg7 referrerBundleID:(id)arg8 ;
@end

