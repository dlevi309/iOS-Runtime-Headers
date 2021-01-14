/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@class NSURLSession;

@interface AAUIImageFetcher : NSObject {

	NSURLSession* _urlSession;

}
+(id)sharedImageFetcher;
-(id)_urlSession;
-(void)fetchImageAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

