/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>

@class NSString, NSArray, MTVisualStylingProvider, UIImageView, MTMaterialView, UIImage;

@interface PLGlyphControl : UIControl <MTMaterialGrouping, MTVisualStylingRequiring> {

	MTVisualStylingProvider* _visualStylingProvider;
	BOOL _blurEnabled;
	long long _materialRecipe;
	long long _visualStyle;
	UIImageView* _glyphView;
	MTMaterialView* _backgroundMaterialView;

}

@property (getter=_glyphView,nonatomic,readonly) UIImageView * glyphView; 
@property (getter=_backgroundMaterialView,nonatomic,readonly) MTMaterialView * backgroundMaterialView; 
@property (getter=_glyphView,nonatomic,retain) UIImageView * glyphView;                                             //@synthesize glyphView=_glyphView - In the implementation block
@property (getter=_backgroundMaterialView,nonatomic,retain) MTMaterialView * backgroundMaterialView;                //@synthesize backgroundMaterialView=_backgroundMaterialView - In the implementation block
@property (nonatomic,copy) UIImage * glyph; 
@property (nonatomic,readonly) long long materialRecipe;                                                            //@synthesize materialRecipe=_materialRecipe - In the implementation block
@property (assign,nonatomic) long long visualStyle;                                                                 //@synthesize visualStyle=_visualStyle - In the implementation block
@property (assign,getter=isBlurEnabled,nonatomic) BOOL blurEnabled;                                                 //@synthesize blurEnabled=_blurEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * materialGroupNameBase; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
+(id)dismissControlWithMaterialRecipe:(long long)arg1 ;
-(UIImage *)glyph;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(long long)visualStyle;
-(void)setVisualStyle:(long long)arg1 ;
-(double)_cornerRadius;
-(void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2 ;
-(void)setGlyph:(UIImage *)arg1 ;
-(void)setGlyphView:(UIImageView *)arg1 ;
-(id)_glyphView;
-(BOOL)isBlurEnabled;
-(id)visualStylingProviderForCategory:(long long)arg1 ;
-(void)setBlurEnabled:(BOOL)arg1 ;
-(void)setBackgroundMaterialView:(MTMaterialView *)arg1 ;
-(id)_backgroundMaterialView;
-(NSArray *)requiredVisualStyleCategories;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(void)_configureBackgroundMaterialViewIfNecessary;
-(NSString *)materialGroupNameBase;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(id)initWithMaterialRecipe:(long long)arg1 ;
-(void)_configureGlyphViewIfNecessaryWithImage:(id)arg1 ;
-(void)_removeAllVisualStyling;
-(void)_updateAllVisualStyling;
-(void)_handleTouchUpInsideWithEvent:(id)arg1 ;
-(void)_updateVisualStylingOfView:(id)arg1 ;
-(void)_updateGlyphViewVisualStyling;
-(void)_configureMaterialView:(id*)arg1 ifNecessaryWithConfiguration:(long long)arg2 positioningAtIndex:(unsigned long long)arg3 ;
-(long long)materialRecipe;
-(void)_removeVisualStylingOfView:(id)arg1 ;
@end

