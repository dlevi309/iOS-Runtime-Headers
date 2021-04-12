/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>
#import <libobjc.A.dylib/CUTAWDMetric.h>
#import <libobjc.A.dylib/CUTRTCMetric.h>

@class NSString, NSDictionary;

@interface IDSRegistrationCompletedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric, CUTRTCMetric> {

	int _registrationType;
	NSString* _serviceIdentifier;
	BOOL _wasSuccessful;
	long long _registrationError;
	long long _circleStatus;

}

@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned awdIdentifier; 
@property (nonatomic,readonly) unsigned short rtcType; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) PBCodable*<NSCopying> awdRepresentation; 
@property (nonatomic,readonly) int registrationType;                                 //@synthesize registrationType=_registrationType - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier;                         //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL wasSuccessful;                                   //@synthesize wasSuccessful=_wasSuccessful - In the implementation block
@property (nonatomic,readonly) long long registrationError;                          //@synthesize registrationError=_registrationError - In the implementation block
@property (nonatomic,readonly) long long circleStatus;                               //@synthesize circleStatus=_circleStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)serviceIdentifier;
-(long long)registrationError;
-(unsigned)awdIdentifier;
-(PBCodable*<NSCopying>)awdRepresentation;
-(unsigned short)rtcType;
-(int)registrationType;
-(BOOL)wasSuccessful;
-(long long)circleStatus;
-(id)initWithRegistrationType:(int)arg1 serviceIdentifier:(id)arg2 wasSuccessful:(BOOL)arg3 registrationError:(long long)arg4 circleStatus:(long long)arg5 ;
@end

