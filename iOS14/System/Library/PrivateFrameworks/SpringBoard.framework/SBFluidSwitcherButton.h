/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class UIView, UIImageView, UIImage, NSString;

@interface SBFluidSwitcherButton : UIControl <UIPointerInteractionDelegate> {

	UIView* _backgroundView;
	UIImageView* _glyphImageView;
	UIImageView* _xPlusDView;
	UIView* _highlightView;
	UIImage* _image;
	NSString* _backdropGroupName;
	long long _buttonStyle;
	UIEdgeInsets _extendedEdgeInsets;

}

@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) UIEdgeInsets extendedEdgeInsets;              //@synthesize extendedEdgeInsets=_extendedEdgeInsets - In the implementation block
@property (nonatomic,retain) NSString * backdropGroupName;                 //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) long long buttonStyle;                        //@synthesize buttonStyle=_buttonStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_invalidateBackgroundView;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setButtonStyle:(long long)arg1 ;
-(void)_addHighlightViewIfNecessary;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(void)didMoveToSuperview;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(long long)buttonStyle;
-(NSString *)backdropGroupName;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)_backgroundMaterialView;
-(void)setExtendedEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_invalidateXPlusDView;
-(void)_configureGlyphImageViewIfNecessaryForStyle:(long long)arg1 ;
-(void)_configureXPlusDViewIfNecessaryForStyle:(long long)arg1 ;
-(void)_configureBackgroundViewIfNecessaryForStyle:(long long)arg1 ;
-(UIEdgeInsets)extendedEdgeInsets;
@end

