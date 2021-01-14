/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface INHomeAttributeRange : NSObject <NSCopying, NSSecureCoding> {

	double _lowerValue;
	double _upperValue;

}

@property (nonatomic,readonly) double lowerValue;              //@synthesize lowerValue=_lowerValue - In the implementation block
@property (nonatomic,readonly) double upperValue;              //@synthesize upperValue=_upperValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)lowerValue;
-(double)upperValue;
-(id)initWithRange:(double)arg1 upperValue:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

