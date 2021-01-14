/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/WKURLSchemeTask.h>

@protocol WKURLSchemeTask, SWLogger;
@class NSURLRequest, NSString;

@interface SWURLSchemeTask : NSObject <WKURLSchemeTask> {

	/*^block*/id _completionBlock;
	id<WKURLSchemeTask> _task;
	id<SWLogger> _logger;

}

@property (nonatomic,readonly) id<WKURLSchemeTask> task;                         //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) id<SWLogger> logger;                              //@synthesize logger=_logger - In the implementation block
@property (setter=onCompletion:,nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy,readonly) NSURLRequest * request; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionBlock;
-(void)didReceiveResponse:(id)arg1 ;
-(id<WKURLSchemeTask>)task;
-(NSURLRequest *)request;
-(id<SWLogger>)logger;
-(void)didReceiveData:(id)arg1 ;
-(void)onCompletion:(/*^block*/id)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(void)didFinish;
-(void)performBlockOnMainThread:(/*^block*/id)arg1 ;
-(id)initWithTask:(id)arg1 logger:(id)arg2 ;
@end

