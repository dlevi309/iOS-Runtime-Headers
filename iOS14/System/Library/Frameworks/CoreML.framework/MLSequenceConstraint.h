/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureValueConstraint.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MLFeatureDescription;

@interface MLSequenceConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {

	MLFeatureDescription* _valueDescription;
	NSRange _countRange;

}

@property (nonatomic,readonly) MLFeatureDescription * valueDescription;              //@synthesize valueDescription=_valueDescription - In the implementation block
@property (nonatomic,readonly) NSRange countRange;                                   //@synthesize countRange=_countRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithValueDescription:(id)arg1 countRange:(NSRange)arg2 ;
-(NSRange)countRange;
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(MLFeatureDescription *)valueDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

