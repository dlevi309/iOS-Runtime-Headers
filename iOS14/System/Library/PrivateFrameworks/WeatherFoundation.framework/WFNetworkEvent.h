/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class NSDate;

@interface WFNetworkEvent : NSObject {

	long long _eventType;
	NSDate* _startDate;
	double _DNSDuration;
	double _connectDuration;
	double _requestDuration;
	double _responseDuration;
	unsigned long long _responseSize;
	unsigned long long _HTTPStatusCode;
	long long _errorCode;

}

@property (nonatomic,readonly) long long eventType;                            //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) double DNSDuration;                             //@synthesize DNSDuration=_DNSDuration - In the implementation block
@property (nonatomic,readonly) double connectDuration;                         //@synthesize connectDuration=_connectDuration - In the implementation block
@property (nonatomic,readonly) double requestDuration;                         //@synthesize requestDuration=_requestDuration - In the implementation block
@property (nonatomic,readonly) double responseDuration;                        //@synthesize responseDuration=_responseDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long responseSize;                //@synthesize responseSize=_responseSize - In the implementation block
@property (nonatomic,readonly) unsigned long long HTTPStatusCode;              //@synthesize HTTPStatusCode=_HTTPStatusCode - In the implementation block
@property (nonatomic,readonly) long long errorCode;                            //@synthesize errorCode=_errorCode - In the implementation block
-(unsigned long long)HTTPStatusCode;
-(unsigned long long)responseSize;
-(long long)eventType;
-(double)responseDuration;
-(NSDate *)startDate;
-(double)connectDuration;
-(long long)errorCode;
-(id)initWithEventType:(long long)arg1 metrics:(id)arg2 ;
-(id)initWithEventType:(long long)arg1 startDate:(id)arg2 error:(id)arg3 ;
-(id)initWithEventType:(long long)arg1 startDate:(id)arg2 DNSDuration:(double)arg3 connectDuration:(double)arg4 requestDuration:(double)arg5 responseDuration:(double)arg6 responseSize:(unsigned long long)arg7 HTTPStatusCode:(unsigned long long)arg8 errorCode:(long long)arg9 ;
-(double)DNSDuration;
-(double)requestDuration;
@end

