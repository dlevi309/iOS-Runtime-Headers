/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNConstantScaleConstraint : SCNConstraint {

	float _scale;
	BOOL _screenSpace;

}

@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) BOOL screenSpace; 
+(BOOL)supportsSecureCoding;
+(id)constantScaleConstraint;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)scale;
-(void)setScale:(float)arg1 ;
-(BOOL)screenSpace;
-(void)setScreenSpace:(BOOL)arg1 ;
@end

