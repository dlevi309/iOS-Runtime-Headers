/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSNumber, WANetworkEventType, WACellularRadioAccessTechnology, NSString;

@interface WANetworkEventData : NSObject <AADataEventType> {

	NSNumber* _startTime;
	NSNumber* _dnsDuration;
	NSNumber* _connectDuration;
	NSNumber* _requestDuration;
	NSNumber* _responseDuration;
	NSNumber* _responseSize;
	NSNumber* _statusCode;
	NSNumber* _errorCode;
	WANetworkEventType* _eventType;
	WACellularRadioAccessTechnology* _cellularRadioAccessTechnology;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSNumber * startTime;                                                         //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSNumber * dnsDuration;                                                       //@synthesize dnsDuration=_dnsDuration - In the implementation block
@property (nonatomic,readonly) NSNumber * connectDuration;                                                   //@synthesize connectDuration=_connectDuration - In the implementation block
@property (nonatomic,readonly) NSNumber * requestDuration;                                                   //@synthesize requestDuration=_requestDuration - In the implementation block
@property (nonatomic,readonly) NSNumber * responseDuration;                                                  //@synthesize responseDuration=_responseDuration - In the implementation block
@property (nonatomic,readonly) NSNumber * responseSize;                                                      //@synthesize responseSize=_responseSize - In the implementation block
@property (nonatomic,readonly) NSNumber * statusCode;                                                        //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSNumber * errorCode;                                                         //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) WANetworkEventType * eventType;                                               //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) WACellularRadioAccessTechnology * cellularRadioAccessTechnology;              //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)dataName;
-(NSNumber *)responseSize;
-(id)toDict;
-(WANetworkEventType *)eventType;
-(WACellularRadioAccessTechnology *)cellularRadioAccessTechnology;
-(NSNumber *)dnsDuration;
-(NSNumber *)responseDuration;
-(NSNumber *)connectDuration;
-(NSString *)bundleIdentifier;
-(NSNumber *)errorCode;
-(NSNumber *)statusCode;
-(NSNumber *)requestDuration;
-(NSNumber *)startTime;
-(id)initWithStartTime:(id)arg1 dnsDuration:(id)arg2 connectDuration:(id)arg3 requestDuration:(id)arg4 responseDuration:(id)arg5 responseSize:(id)arg6 statusCode:(id)arg7 errorCode:(id)arg8 eventType:(id)arg9 cellularRadioAccessTechnology:(id)arg10 bundleIdentifier:(id)arg11 ;
@end

