/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface HKConceptIdentifier : NSObject <NSObject, NSCopying, NSSecureCoding> {

	long long _rawIdentifier;

}

@property (assign,nonatomic) long long rawIdentifier;                             //@synthesize rawIdentifier=_rawIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)root;
+(BOOL)supportsSecureCoding;
+(id)identifierWithRawIdentifier:(long long)arg1 ;
+(id)identifierWithNumber:(id)arg1 ;
+(id)inMemoryConceptIdentifier;
+(id)medication;
+(id)diastolicBloodPressure;
+(id)systolicBloodPressure;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRawIdentifier:(long long)arg1 ;
-(long long)rawIdentifier;
-(NSNumber *)numberRepresentation;
-(void)setRawIdentifier:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

