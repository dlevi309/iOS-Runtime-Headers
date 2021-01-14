/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSArray, NSString, UIView, UILabel, PUStackView;

@interface PUPickerBannerView : UIView <CAAnimationDelegate> {

	BOOL __animatingStackView;
	unsigned long long _style;
	NSArray* _images;
	NSString* _title;
	UIView* _leftView;
	UIView* _rightView;
	long long __alignment;
	UILabel* __label;
	PUStackView* __stackView;
	/*^block*/id __animationCompletionHandler;

}

@property (assign,setter=_setAlignment:,nonatomic) long long _alignment;                                       //@synthesize _alignment=__alignment - In the implementation block
@property (setter=_setLabel:,nonatomic,retain) UILabel * _label;                                               //@synthesize _label=__label - In the implementation block
@property (setter=_setStackView:,nonatomic,retain) PUStackView * _stackView;                                   //@synthesize _stackView=__stackView - In the implementation block
@property (assign,setter=_setAnimatingStackView:,nonatomic) BOOL _animatingStackView;                          //@synthesize _animatingStackView=__animatingStackView - In the implementation block
@property (setter=_setAnimationCompletionHandler:,nonatomic,copy) id _animationCompletionHandler;              //@synthesize _animationCompletionHandler=__animationCompletionHandler - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSArray * images;                                                                   //@synthesize images=_images - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIView * leftView;                                                                //@synthesize leftView=_leftView - In the implementation block
@property (nonatomic,retain) UIView * rightView;                                                               //@synthesize rightView=_rightView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)_label;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateLabel;
-(UIView *)leftView;
-(void)setImages:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIView *)rightView;
-(PUStackView *)_stackView;
-(void)layoutSubviews;
-(void)_setStackView:(id)arg1 ;
-(void)setLeftView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightView:(id)arg1 animated:(BOOL)arg2 ;
-(long long)_alignment;
-(void)setLeftView:(UIView *)arg1 ;
-(void)animateImagesOntoView:(id)arg1 inContainerView:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setLabel:(id)arg1 ;
-(NSArray *)images;
-(void)setRightView:(UIView *)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)_setAnimatingStackView:(BOOL)arg1 ;
-(CGRect)_frameReversedIfRightToLeft:(BOOL)arg1 frame:(CGRect)arg2 bounds:(CGRect)arg3 ;
-(void)_setAlignment:(long long)arg1 ;
-(void)_updateAlignment;
-(void)_updateStackView;
-(BOOL)_animatingStackView;
-(id)_animationCompletionHandler;
-(void)_setAnimationCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)title;
@end

