/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDCodableRoutineRequestMessage;

@interface HDRemoteRoutineRequestContext : NSObject {

	HDCodableRoutineRequestMessage* _request;
	/*^block*/id _completion;

}

@property (nonatomic,retain) HDCodableRoutineRequestMessage * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id completion;                                           //@synthesize completion=_completion - In the implementation block
-(void)setRequest:(HDCodableRoutineRequestMessage *)arg1 ;
-(HDCodableRoutineRequestMessage *)request;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

