/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>
#import <libobjc.A.dylib/CUTAWDMetric.h>

@class NSString, NSDictionary;

@interface IDSRegistrationAuthenticationParametersReceivedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric> {

	long long _errorCode;
	double _timeIntervalSinceAuthenticationParameterRequest;

}

@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned awdIdentifier; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) PBCodable*<NSCopying> awdRepresentation; 
@property (nonatomic,readonly) long long errorCode;                                                 //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) double timeIntervalSinceAuthenticationParameterRequest;              //@synthesize timeIntervalSinceAuthenticationParameterRequest=_timeIntervalSinceAuthenticationParameterRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(long long)errorCode;
-(NSString *)name;
-(double)timeIntervalSinceAuthenticationParameterRequest;
-(id)initWithErrorCode:(long long)arg1 timeIntervalSinceAuthenticationParameterRequest:(double)arg2 ;
-(unsigned)awdIdentifier;
-(PBCodable*<NSCopying>)awdRepresentation;
@end

