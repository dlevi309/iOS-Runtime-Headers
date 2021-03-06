/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)identifierWithRawIdentifier:(long long)arg1 ;
+(id)identifierWithNumber:(id)arg1 ;
+(id)inMemoryConceptIdentifier;
+(id)diastolicBloodPressure;
+(id)systolicBloodPressure;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRawIdentifier:(long long)arg1 ;
-(long long)rawIdentifier;
-(NSNumber *)numberRepresentation;
-(void)setRawIdentifier:(long long)arg1 ;
@end

