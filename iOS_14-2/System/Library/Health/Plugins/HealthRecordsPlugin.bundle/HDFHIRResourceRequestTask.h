/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDFHIRResourceTask.h>

@class HDFHIRResourceSchema, NSURL;

@interface HDFHIRResourceRequestTask : HDFHIRResourceTask {

	/*^block*/id _queryCompletion;
	HDFHIRResourceSchema* _resourceSchema;
	NSURL* _requestURL;

}

@property (nonatomic,copy,readonly) id queryCompletion;                                 //@synthesize queryCompletion=_queryCompletion - In the implementation block
@property (nonatomic,copy,readonly) HDFHIRResourceSchema * resourceSchema;              //@synthesize resourceSchema=_resourceSchema - In the implementation block
@property (nonatomic,copy,readonly) NSURL * requestURL;                                 //@synthesize requestURL=_requestURL - In the implementation block
-(NSURL *)requestURL;
-(void)handleError:(id)arg1 endState:(id)arg2 ;
-(void)handleResponse:(id)arg1 JSONData:(id)arg2 endState:(id)arg3 ;
-(id)createURLRequestWithCredentialResult:(id)arg1 error:(id*)arg2 ;
-(id)initWithCredentialedSession:(id)arg1 resourceSchema:(id)arg2 requestURL:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)queryCompletion;
-(HDFHIRResourceSchema *)resourceSchema;
@end

