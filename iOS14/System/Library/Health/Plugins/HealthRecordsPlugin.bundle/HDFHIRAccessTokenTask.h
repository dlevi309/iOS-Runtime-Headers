/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDFHIRRequestTask.h>

@class HKOAuth2TokenSession;

@interface HDFHIRAccessTokenTask : HDFHIRRequestTask {

	HKOAuth2TokenSession* _tokenSession;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) HKOAuth2TokenSession * tokenSession;              //@synthesize tokenSession=_tokenSession - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(void)handleError:(id)arg1 endState:(id)arg2 ;
-(void)createURLRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)handleResponse:(id)arg1 JSONData:(id)arg2 endState:(id)arg3 ;
-(id)errorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3 ;
-(id)initWithTokenSession:(id)arg1 FHIRSession:(id)arg2 completion:(/*^block*/id)arg3 ;
-(HKOAuth2TokenSession *)tokenSession;
@end
