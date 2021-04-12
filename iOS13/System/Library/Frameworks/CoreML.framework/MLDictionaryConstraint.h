/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)constraintWithStringKeys;
+(id)constraintWithInt64Keys;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)keyType;
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(id)initWithKeyType:(long long)arg1 ;
@end

