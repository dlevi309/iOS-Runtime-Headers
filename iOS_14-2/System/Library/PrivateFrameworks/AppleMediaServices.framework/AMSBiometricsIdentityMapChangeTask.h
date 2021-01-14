/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, AMSURLSession, NSURLSessionTask;

@interface AMSBiometricsIdentityMapChangeTask : AMSTask {

	ACAccount* _account;
	AMSURLSession* _session;
	NSURLSessionTask* _task;

}

@property (nonatomic,retain) ACAccount * account;                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) AMSURLSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;              //@synthesize task=_task - In the implementation block
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSURLSessionTask *)task;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(AMSURLSession *)session;
-(id)perform;
-(void)setSession:(AMSURLSession *)arg1 ;
-(id)initWithAccount:(id)arg1 session:(id)arg2 task:(id)arg3 ;
@end

