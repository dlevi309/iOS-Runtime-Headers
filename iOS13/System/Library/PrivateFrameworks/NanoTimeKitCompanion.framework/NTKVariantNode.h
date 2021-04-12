/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <SpriteKit/SKCropNode.h>

@class SKSpriteNode, NTKCollectionNode;

@interface NTKVariantNode : SKCropNode {

	SKSpriteNode* _transitionMask;

}

@property (nonatomic,readonly) NTKCollectionNode * ticks; 
@property (nonatomic,readonly) NTKCollectionNode * labels; 
@property (nonatomic,readonly) NTKCollectionNode * other; 
-(NTKCollectionNode *)labels;
-(NTKCollectionNode *)ticks;
-(NTKCollectionNode *)other;
-(id)initWithElements:(id)arg1 ;
-(void)applyAppearanceFraction:(double)arg1 ;
-(void)applyAppearanceFraction:(double)arg1 inverted:(BOOL)arg2 ;
-(void)applyFullAppearance;
-(void)appearAnimated;
-(void)disappearAnimated;
-(void)resetAlphaAndScale;
-(void)_stopMasking;
-(void)createTransitionMaskLazily;
-(void)revealWithFraction:(double)arg1 invert:(BOOL)arg2 ;
@end

