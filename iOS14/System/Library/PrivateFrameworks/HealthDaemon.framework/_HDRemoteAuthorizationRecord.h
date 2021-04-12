/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

