/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDCodableStartWorkoutAppRequest;

@interface HDRemoteStartWorkoutAppRequestContext : NSObject {

	HDCodableStartWorkoutAppRequest* _request;
	/*^block*/id _completion;

}

@property (nonatomic,retain) HDCodableStartWorkoutAppRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id completion;                                            //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(void)setRequest:(HDCodableStartWorkoutAppRequest *)arg1 ;
-(id)completion;
-(HDCodableStartWorkoutAppRequest *)request;
@end

