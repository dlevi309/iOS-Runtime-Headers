/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
*/

#import <MaterialKit/MaterialKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTMaterialViewObserving.h>

@class UIView, MTMaterialView, UIColor, NSString;

@interface MTMaterialShadowView : UIView <MTMaterialViewObserving> {

	UIView* _shadowView;
	MTMaterialView* _captureOnlyMaterialView;
	BOOL _captureOnlyMaterialViewSuppliedByClient;
	MTMaterialView* _materialView;

}

@property (nonatomic,readonly) MTMaterialView * materialView;                                                                            //@synthesize materialView=_materialView - In the implementation block
@property (assign,getter=isCaptureOnlyMaterialViewSuppliedByClient,nonatomic) BOOL captureOnlyMaterialViewSuppliedByClient;              //@synthesize captureOnlyMaterialViewSuppliedByClient=_captureOnlyMaterialViewSuppliedByClient - In the implementation block
@property (nonatomic,copy) UIColor * shadowColor; 
@property (assign,nonatomic) double shadowOpacity; 
@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowRadius; 
@property (assign,nonatomic) BOOL shadowPathIsBounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)materialShadowViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 ;
+(id)materialShadowViewWithRecipe:(long long)arg1 configuration:(long long)arg2 initialWeighting:(double)arg3 scaleAdjustment:(/*^block*/id)arg4 ;
+(id)materialShadowViewWithRecipe:(long long)arg1 configuration:(long long)arg2 ;
+(id)materialShadowViewWithRecipeNamed:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(/*^block*/id)arg5 ;
+(id)materialShadowViewWithRecipeNamesByTraitCollection:(id)arg1 inBundle:(id)arg2 configuration:(long long)arg3 initialWeighting:(double)arg4 scaleAdjustment:(/*^block*/id)arg5 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(double)shadowRadius;
-(double)shadowOpacity;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(UIColor *)shadowColor;
-(CGSize)shadowOffset;
-(void)setShadowOpacity:(double)arg1 ;
-(void)setShadowPathIsBounds:(BOOL)arg1 ;
-(void)layoutSubviews;
-(MTMaterialView *)materialView;
-(BOOL)shadowPathIsBounds;
-(void)groupNameDidChangeForMaterialView:(id)arg1 ;
-(void)weightingDidChangeForMaterialView:(id)arg1 ;
-(void)configurationDidChangeForMaterialView:(id)arg1 ;
-(void)recipeNameDidChangeForMaterialView:(id)arg1 ;
-(id)initWithMaterialView:(id)arg1 ;
-(void)setCaptureOnlyMaterialViewSuppliedByClient:(BOOL)arg1 ;
-(void)_configureShadowViewIfNecessary;
-(void)_configureCaptureOnlyMaterialViewIfNecessary;
-(BOOL)isCaptureOnlyMaterialViewSuppliedByClient;
@end

