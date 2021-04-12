/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setScale:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)screenSpace;
-(void)setScreenSpace:(BOOL)arg1 ;
@end

