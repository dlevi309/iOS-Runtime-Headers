/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDFHIRRequestTask.h>

@class HDFHIRCredential;

@interface HDFHIRRefreshTokenTask : HDFHIRRequestTask {

	HDFHIRCredential* _credential;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) HDFHIRCredential * credential;              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(HDFHIRCredential *)credential;
-(void)handleError:(id)arg1 endState:(id)arg2 ;
-(void)createURLRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)handleResponse:(id)arg1 JSONData:(id)arg2 endState:(id)arg3 ;
-(id)errorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3 ;
-(id)initWithSession:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

