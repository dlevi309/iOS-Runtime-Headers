/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HKAuthorizationRequestRecord;

@interface HDRemoteAuthorizationRequestContext : NSObject {

	HKAuthorizationRequestRecord* _requestRecord;
	/*^block*/id _requestSentHandler;
	/*^block*/id _completion;

}

@property (nonatomic,retain) HKAuthorizationRequestRecord * requestRecord;              //@synthesize requestRecord=_requestRecord - In the implementation block
@property (nonatomic,copy) id requestSentHandler;                                       //@synthesize requestSentHandler=_requestSentHandler - In the implementation block
@property (nonatomic,copy) id completion;                                               //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setRequestRecord:(HKAuthorizationRequestRecord *)arg1 ;
-(void)setRequestSentHandler:(id)arg1 ;
-(id)requestSentHandler;
-(HKAuthorizationRequestRecord *)requestRecord;
@end

