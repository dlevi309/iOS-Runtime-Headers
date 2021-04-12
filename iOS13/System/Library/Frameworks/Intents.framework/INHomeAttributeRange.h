/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRange:(double)arg1 upperValue:(double)arg2 ;
-(double)lowerValue;
-(double)upperValue;
@end

