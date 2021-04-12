/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name; 
@property (readonly) unsigned awdIdentifier; 
@property (readonly) PBCodable*<NSCopying> awdRepresentation; 
-(NSString *)name;
-(unsigned)awdIdentifier;
-(PBCodable*<NSCopying>)awdRepresentation;
-(long long)registrationType;
-(long long)registrationControlStatus;
-(BOOL)isInterestingRegion;
-(id)initWithRegistrationType:(long long)arg1 registrationControlStatus:(long long)arg2 isInterestingRegion:(BOOL)arg3 ;
@end

