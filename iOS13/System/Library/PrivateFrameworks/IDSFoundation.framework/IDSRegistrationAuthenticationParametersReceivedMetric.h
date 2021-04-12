/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(long long)errorCode;
-(unsigned)awdIdentifier;
-(PBCodable*<NSCopying>)awdRepresentation;
-(double)timeIntervalSinceAuthenticationParameterRequest;
-(id)initWithErrorCode:(long long)arg1 timeIntervalSinceAuthenticationParameterRequest:(double)arg2 ;
@end

