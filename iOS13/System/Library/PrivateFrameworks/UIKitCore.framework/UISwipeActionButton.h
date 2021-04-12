/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIColor, UIView;

@interface UISwipeActionButton : UIButton {

	BOOL _autosizes;
	UIColor* _defaultBackgroundColor;
	UIColor* _highlightedBackgroundColor;
	UIView* _backgroundView;

}

@property (nonatomic,retain) UIView * backgroundView;                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;                  //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
@property (nonatomic,readonly) double buttonWidth; 
@property (assign,nonatomic) BOOL autosizes;                                    //@synthesize autosizes=_autosizes - In the implementation block
@property (nonatomic,readonly) UIView * sourceView; 
+(id)titleFont;
+(double)defaultButtonWidth;
+(id)titleFontOfSize:(double)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)backgroundView;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIView *)sourceView;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(double)buttonWidth;
-(unsigned long long)_defaultLayoutForHeight:(double)arg1 ;
-(long long)_numberOfLinesForTitle:(id)arg1 ;
-(CGRect)_allowableContentRectForContentRect:(CGRect)arg1 ;
-(BOOL)_heightDemandsCompactLayout;
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)defaultBackgroundColor;
-(BOOL)autosizes;
-(void)setAutosizes:(BOOL)arg1 ;
@end

