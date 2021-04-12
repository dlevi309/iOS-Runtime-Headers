/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)setMaskNode:(SKNode *)arg1 ;
-(void)setPrefersAlphaMask:(BOOL)arg1 ;
-(void)setInvertMask:(BOOL)arg1 ;
-(BOOL)prefersAlphaMask;
-(BOOL)invertMask;
-(SKNode *)maskNode;
-(void)useAlphaMask:(BOOL)arg1 ;
@end

