/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SKFieldNode.h>

@class SKTexture;

@interface SKVelocityFieldNode : SKFieldNode {

	SKTexture* _velocityTexture;

}

@property (nonatomic,retain) SKTexture * velocityTexture;              //@synthesize velocityTexture=_velocityTexture - In the implementation block
@property (assign,nonatomic)  velocity; 
+(BOOL)supportsSecureCoding;
-(void)setVelocity:;
-()velocity;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_initialize;
-(id)_descriptionClassName;
-(void)setVelocityTexture:(SKTexture *)arg1 ;
-(SKTexture *)velocityTexture;
@end

