/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class SKNode;

@interface SKCropNode : SKNode {

	SKNode* _mask;
	SKCCropNode* _skcCropNode;

}

@property (assign,nonatomic) BOOL prefersAlphaMask; 
@property (assign,nonatomic) BOOL invertMask; 
@property (nonatomic,retain) SKNode * maskNode; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMaskNode:(SKNode *)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)setPrefersAlphaMask:(BOOL)arg1 ;
-(void)setInvertMask:(BOOL)arg1 ;
-(BOOL)prefersAlphaMask;
-(BOOL)invertMask;
-(SKNode *)maskNode;
-(void)useAlphaMask:(BOOL)arg1 ;
@end

