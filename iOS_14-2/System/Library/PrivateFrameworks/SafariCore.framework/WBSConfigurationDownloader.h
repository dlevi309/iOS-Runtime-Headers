/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFileName:(id)arg1 dataTransformer:(id)arg2 ;
-(void)downloadConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)cancel;
@end

