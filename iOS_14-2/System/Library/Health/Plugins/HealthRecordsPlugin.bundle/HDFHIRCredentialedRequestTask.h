/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDFHIRRequestTask.h>

@protocol OS_dispatch_queue;
@class HDFHIRCredentialResult, NSObject, HDFHIRCredentialedSession;

@interface HDFHIRCredentialedRequestTask : HDFHIRRequestTask {

	HDFHIRCredentialResult* _credentialResult;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}

@property (retain) HDFHIRCredentialResult * credentialResult; 
@property (nonatomic,readonly) HDFHIRCredentialedSession * credentialedSession; 
-(id)initWithSession:(id)arg1 ;
-(void)startTaskWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleError:(id)arg1 endState:(id)arg2 ;
-(HDFHIRCredentialResult *)credentialResult;
-(id)initWithCredentialedSession:(id)arg1 ;
-(HDFHIRCredentialedSession *)credentialedSession;
-(void)setCredentialResult:(HDFHIRCredentialResult *)arg1 ;
@end

