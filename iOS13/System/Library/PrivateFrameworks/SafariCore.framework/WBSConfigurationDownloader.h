/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@class WBSConfigurationDataTransformer, NSURLSessionDataTask, NSURL, NSString;

@interface WBSConfigurationDownloader : NSObject {

	WBSConfigurationDataTransformer* _transformer;
	NSURLSessionDataTask* _dataTask;
	NSURL* _baseURL;
	NSString* _fileName;
	BOOL _isCancelled;

}
+(id)new;
-(id)init;
-(void)cancel;
-(id)initWithFileName:(id)arg1 dataTransformer:(id)arg2 ;
-(void)downloadConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
@end

