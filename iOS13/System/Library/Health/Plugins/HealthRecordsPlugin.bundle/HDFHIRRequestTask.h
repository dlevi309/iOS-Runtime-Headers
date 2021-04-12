/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@protocol OS_dispatch_group;
@class NSObject, HDFHIRSession;

@interface HDFHIRRequestTask : NSObject {

	BOOL _resumed;
	NSObject*<OS_dispatch_group> _group;
	HDFHIRSession* _session;

}

@property (nonatomic,readonly) HDFHIRSession * session;              //@synthesize session=_session - In the implementation block
-(id)init;
-(void)waitUntilFinished;
-(void)resume;
-(HDFHIRSession *)session;
-(id)initWithSession:(id)arg1 ;
-(void)startTaskWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleError:(id)arg1 endState:(id)arg2 ;
-(void)createURLRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)_errorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3 ;
-(void)_handleResponse:(id)arg1 data:(id)arg2 endState:(id)arg3 ;
-(void)_handleError:(id)arg1 endState:(id)arg2 ;
-(void)handleResponse:(id)arg1 JSONData:(id)arg2 endState:(id)arg3 ;
-(id)errorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3 ;
@end

