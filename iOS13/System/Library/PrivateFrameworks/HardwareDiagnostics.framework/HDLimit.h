/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDBound;

@interface HDLimit : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	HDBound* _upperBound;
	HDBound* _lowerBound;

}

@property (nonatomic,copy) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) HDBound * upperBound;              //@synthesize upperBound=_upperBound - In the implementation block
@property (nonatomic,copy) HDBound * lowerBound;              //@synthesize lowerBound=_lowerBound - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)dictionaryRepresentation;
-(HDBound *)lowerBound;
-(HDBound *)upperBound;
-(void)setUpperBound:(HDBound *)arg1 ;
-(void)setLowerBound:(HDBound *)arg1 ;
-(BOOL)isEqualToLimit:(id)arg1 ;
-(BOOL)measurementWithinBounds:(id)arg1 ;
@end

