/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface HKCodedValueCollection : NSObject <NSSecureCoding, NSCopying> {

	NSArray* _codedValues;

}

@property (nonatomic,copy,readonly) NSArray * codedValues;              //@synthesize codedValues=_codedValues - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)codedValueCollectionWithCodedValues:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)codedValues;
-(id)initWithCodedValues:(id)arg1 ;
@end

