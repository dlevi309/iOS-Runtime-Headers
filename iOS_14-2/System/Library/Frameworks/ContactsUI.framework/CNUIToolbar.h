/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <UIKitCore/UIView.h>

@class NSArray, UIView, UIVisualEffectView;

@interface CNUIToolbar : UIView {

	BOOL _isAnimating;
	NSArray* _items;
	NSArray* _buttons;
	UIView* _border;
	UIVisualEffectView* _visualEffectView;

}

@property (nonatomic,retain) NSArray * buttons;                                  //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIView * border;                                    //@synthesize border=_border - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                   //@synthesize isAnimating=_isAnimating - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                  //@synthesize items=_items - In the implementation block
+(double)defaultToolBarHeight;
-(id)initWithItems:(id)arg1 ;
-(UIView *)border;
-(NSArray *)buttons;
-(UIVisualEffectView *)visualEffectView;
-(void)setIsAnimating:(BOOL)arg1 ;
-(NSArray *)items;
-(void)buttonPressed:(id)arg1 ;
-(void)setupView;
-(void)layoutSubviews;
-(double)borderWidth;
-(id)buttonForItem:(id)arg1 ;
-(void)setupBorder;
-(BOOL)isEnabledForItem:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forItem:(id)arg2 ;
-(void)setBorder:(UIView *)arg1 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(BOOL)isAnimating;
-(void)setButtons:(NSArray *)arg1 ;
@end

