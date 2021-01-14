/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIVisualEffectView, UIToolbar, UIView, NSArray;

@interface PUImportFloatingToolbarView : UIView {

	BOOL _shouldBlurBackground;
	NSString* _backdropViewGroupName;
	UIVisualEffectView* _visualEffectView;
	UIToolbar* _toolbar;
	UIView* _shadowView;

}

@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) UIToolbar * toolbar;                                //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UIView * shadowView;                                //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,copy) NSArray * items; 
@property (assign,nonatomic) BOOL shouldBlurBackground;                          //@synthesize shouldBlurBackground=_shouldBlurBackground - In the implementation block
@property (nonatomic,copy) NSString * backdropViewGroupName;                     //@synthesize backdropViewGroupName=_backdropViewGroupName - In the implementation block
-(void)_updateBackground;
-(CGSize)intrinsicContentSize;
-(UIToolbar *)toolbar;
-(void)setItems:(NSArray *)arg1 ;
-(id)init;
-(UIVisualEffectView *)visualEffectView;
-(UIView *)shadowView;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(NSArray *)items;
-(void)layoutSubviews;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setShouldBlurBackground:(BOOL)arg1 ;
-(void)_updateBackdropViewGroupName;
-(BOOL)shouldBlurBackground;
-(void)setShadowView:(UIView *)arg1 ;
-(void)setBackdropViewGroupName:(NSString *)arg1 ;
-(NSString *)backdropViewGroupName;
-(void)sizeToFit;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
@end

