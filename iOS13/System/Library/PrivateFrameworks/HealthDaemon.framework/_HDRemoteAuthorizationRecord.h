/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HKAuthorizationRequestRecord;

@interface _HDRemoteAuthorizationRecord : NSObject {

	HKAuthorizationRequestRecord* _record;
	/*^block*/id _requestSentHandler;
	/*^block*/id _requestFinishedHandler;

}

@property (nonatomic,readonly) HKAuthorizationRequestRecord * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,copy,readonly) id requestSentHandler;                         //@synthesize requestSentHandler=_requestSentHandler - In the implementation block
@property (nonatomic,copy,readonly) id requestFinishedHandler;                     //@synthesize requestFinishedHandler=_requestFinishedHandler - In the implementation block
-(HKAuthorizationRequestRecord *)record;
-(id)requestSentHandler;
-(id)initWithRequestRecord:(id)arg1 requestSentHandler:(/*^block*/id)arg2 requestFinishedHandler:(/*^block*/id)arg3 ;
-(id)requestFinishedHandler;
@end

