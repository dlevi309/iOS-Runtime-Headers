/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKRange;

@interface SKSizeConstraint : SKConstraint {

	SKRange* _widthRange;
	SKRange* _heightRange;

}

@property (copy) SKRange * widthRange;               //@synthesize widthRange=_widthRange - In the implementation block
@property (copy) SKRange * heightRange;              //@synthesize heightRange=_heightRange - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)constraintWithWidthRange:(id)arg1 ;
+(id)constraintWithHeightRange:(id)arg1 ;
+(id)constraintWithWidthRange:(id)arg1 heightRange:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SKRange *)heightRange;
-(SKRange *)widthRange;
-(BOOL)isEqualToSizeConstraint:(id)arg1 ;
-(void)setWidthRange:(SKRange *)arg1 ;
-(void)setHeightRange:(SKRange *)arg1 ;
-(id)initWithWidthRange:(id)arg1 heightRange:(id)arg2 ;
@end

