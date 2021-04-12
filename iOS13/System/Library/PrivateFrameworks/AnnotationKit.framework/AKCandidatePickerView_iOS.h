/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, UIVisualEffectView, NSArray;

@interface AKCandidatePickerView_iOS : UIView {

	UIStackView* _buttonContainer;
	UIVisualEffectView* _visualEffectView;
	long long _blurStyle;
	NSArray* _itemTags;
	NSArray* _annotations;
	NSArray* _buttons;
	id _target;
	SEL _action;

}

@property (nonatomic,retain) UIStackView * buttonContainer;                      //@synthesize buttonContainer=_buttonContainer - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic) long long blurStyle;                                //@synthesize blurStyle=_blurStyle - In the implementation block
@property (nonatomic,retain) NSArray * itemTags;                                 //@synthesize itemTags=_itemTags - In the implementation block
@property (nonatomic,retain) NSArray * annotations;                              //@synthesize annotations=_annotations - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                  //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic,__weak) id target;                                   //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                         //@synthesize action=_action - In the implementation block
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(CGSize)intrinsicContentSize;
-(void)setAction:(SEL)arg1 ;
-(long long)blurStyle;
-(void)setBlurStyle:(long long)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(NSArray *)annotations;
-(void)setAnnotations:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 items:(id)arg2 annotations:(id)arg3 target:(id)arg4 action:(SEL)arg5 visualStyle:(long long)arg6 ;
-(void)setBarHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_createButtonsWithBlurStyle:(long long)arg1 ;
-(void)_selectBackground:(id)arg1 animated:(BOOL)arg2 ;
-(NSArray *)itemTags;
-(void)_selectBackground:(id)arg1 ;
-(UIStackView *)buttonContainer;
-(long long)tagForCandidateItemAtIndex:(unsigned long long)arg1 ;
-(void)setButtonContainer:(UIStackView *)arg1 ;
-(void)setItemTags:(NSArray *)arg1 ;
@end

