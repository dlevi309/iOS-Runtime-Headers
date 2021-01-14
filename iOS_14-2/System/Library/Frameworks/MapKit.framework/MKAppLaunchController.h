/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSString, NSURL;

@interface MKAppLaunchController : NSObject {

	NSString* _webURLString;
	NSURL* webURL;

}

@property (nonatomic,retain) NSURL * webURL; 
+(void)launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)sharedController;
-(NSURL *)webURL;
-(void)setWebURL:(NSURL *)arg1 ;
-(void)lookUpAppStoreURLForBundle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

