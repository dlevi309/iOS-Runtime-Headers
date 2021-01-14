/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

