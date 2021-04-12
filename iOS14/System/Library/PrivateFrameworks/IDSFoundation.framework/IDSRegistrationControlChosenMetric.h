/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTAWDMetric.h>

@class NSString;

@interface IDSRegistrationControlChosenMetric : NSObject <CUTAWDMetric> {

	long long _registrationType;
	long long _registrationControlStatus;
	BOOL _isInterestingRegion;

}

@property (nonatomic,readonly) long long registrationType;                       //@synthesize registrationType=_registrationType - In the implementation block
@property (nonatomic,readonly) long long registrationControlStatus;              //@synthesize registrationControlStatus=_registrationControlStatus - In the implementation block
@property (nonatomic,readonly) BOOL isInterestingRegion;                         //@synthesize isInterestingRegion=_isInterestingRegion - In the implementation block
@property (readonly) unsigned awdIdentifier; 
@property (readonly) PBCodable*<NSCopying> awdRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(long long)registrationType;
-(long long)registrationControlStatus;
-(BOOL)isInterestingRegion;
-(id)initWithRegistrationType:(long long)arg1 registrationControlStatus:(long long)arg2 isInterestingRegion:(BOOL)arg3 ;
-(unsigned)awdIdentifier;
-(PBCodable*<NSCopying>)awdRepresentation;
@end

