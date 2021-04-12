/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class UIView, UIImageView, UIImage, NSString;

@interface SBFluidSwitcherButton : UIControl <_UICursorInteractionDelegate> {

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
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(long long)buttonStyle;
-(id)_backgroundMaterialView;
-(void)setButtonStyle:(long long)arg1 ;
-(void)_addHighlightViewIfNecessary;
-(void)_invalidateBackgroundView;
-(void)setExtendedEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_invalidateXPlusDView;
-(void)_configureGlyphImageViewIfNecessaryForStyle:(long long)arg1 ;
-(void)_configureXPlusDViewIfNecessaryForStyle:(long long)arg1 ;
-(void)_configureBackgroundViewIfNecessaryForStyle:(long long)arg1 ;
-(UIEdgeInsets)extendedEdgeInsets;
@end

