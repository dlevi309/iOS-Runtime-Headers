/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SKReachConstraints : NSObject <NSSecureCoding> {

	double _lowerAngleLimit;
	double _upperAngleLimit;

}

@property (assign,nonatomic) double lowerAngleLimit;              //@synthesize lowerAngleLimit=_lowerAngleLimit - In the implementation block
@property (assign,nonatomic) double upperAngleLimit;              //@synthesize upperAngleLimit=_upperAngleLimit - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLowerAngleLimit:(double)arg1 ;
-(void)setUpperAngleLimit:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)lowerAngleLimit;
-(double)upperAngleLimit;
-(id)initWithLowerAngleLimit:(double)arg1 upperAngleLimit:(double)arg2 ;
@end

