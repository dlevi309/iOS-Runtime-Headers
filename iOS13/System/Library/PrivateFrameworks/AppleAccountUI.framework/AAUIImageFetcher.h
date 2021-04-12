/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

