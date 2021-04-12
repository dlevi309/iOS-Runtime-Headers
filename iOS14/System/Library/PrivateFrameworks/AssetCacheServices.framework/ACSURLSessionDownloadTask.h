/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetCacheServices.framework/AssetCacheServices
*/

#import <AssetCacheServices/ACSURLSessionTask.h>

@class NSURLRequest, NSError;

@interface ACSURLSessionDownloadTask : ACSURLSessionTask {

	/*^block*/id __clientLocationCompletionHandler;
	NSURLRequest* __resumedOriginalRequest;
	NSError* __deferredLinkError;

}

@property (copy) id _clientLocationCompletionHandler;                   //@synthesize _clientLocationCompletionHandler=__clientLocationCompletionHandler - In the implementation block
@property (retain) NSURLRequest * _resumedOriginalRequest;              //@synthesize _resumedOriginalRequest=__resumedOriginalRequest - In the implementation block
@property (retain) NSError * _deferredLinkError;                        //@synthesize _deferredLinkError=__deferredLinkError - In the implementation block
@property (copy,readonly) NSURLRequest * originalRequest; 
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(NSURLRequest *)originalRequest;
-(BOOL)_isUpload;
-(id)initWithNSURLDownloadTaskCreator:(/*^block*/id)arg1 initialRequest:(id)arg2 forSession:(id)arg3 ;
-(void)set_resumedOriginalRequest:(NSURLRequest *)arg1 ;
-(NSError *)_deferredLinkError;
-(void)set_deferredLinkError:(NSError *)arg1 ;
-(NSURLRequest *)_resumedOriginalRequest;
-(id)_clientLocationCompletionHandler;
-(void)set_clientLocationCompletionHandler:(id)arg1 ;
@end

