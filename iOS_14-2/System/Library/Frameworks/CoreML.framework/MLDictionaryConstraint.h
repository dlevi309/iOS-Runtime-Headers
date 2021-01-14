/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureValueConstraint.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MLDictionaryConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {

	long long _keyType;

}

@property (nonatomic,readonly) long long keyType;              //@synthesize keyType=_keyType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)constraintWithInt64Keys;
+(id)constraintWithStringKeys;
-(id)initWithKeyType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)keyType;
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

