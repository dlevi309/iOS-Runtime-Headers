/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NTKCollectionNode *)ticks;
-(NTKCollectionNode *)labels;
-(NTKCollectionNode *)other;
-(void)applyAppearanceFraction:(double)arg1 ;
-(void)applyAppearanceFraction:(double)arg1 inverted:(BOOL)arg2 ;
-(void)applyFullAppearance;
-(void)appearAnimated;
-(void)disappearAnimated;
-(id)initWithElements:(id)arg1 ;
-(void)resetAlphaAndScale;
-(void)_stopMasking;
-(void)createTransitionMaskLazily;
-(void)revealWithFraction:(double)arg1 invert:(BOOL)arg2 ;
@end

