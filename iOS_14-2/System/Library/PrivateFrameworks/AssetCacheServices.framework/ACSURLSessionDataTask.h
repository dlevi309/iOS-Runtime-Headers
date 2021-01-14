/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetCacheServices.framework/AssetCacheServices
*/

#import <AssetCacheServices/ACSURLSessionTask.h>

@interface ACSURLSessionDataTask : ACSURLSessionTask {

	/*^block*/id __clientDataCompletionHandler;

}

@property (copy) id _clientDataCompletionHandler;              //@synthesize _clientDataCompletionHandler=__clientDataCompletionHandler - In the implementation block
-(BOOL)_isUpload;
-(id)initWithNSURLDataTaskCreator:(/*^block*/id)arg1 initialRequest:(id)arg2 forSession:(id)arg3 ;
-(id)_clientDataCompletionHandler;
-(void)set_clientDataCompletionHandler:(id)arg1 ;
@end

