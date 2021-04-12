/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UIBarButtonItem.h>

@class UIButton, AKMarkupButtonContainerView;

@interface AKMarkupBarButtonItem : UIBarButtonItem {

	UIButton* _toggleButton;
	AKMarkupButtonContainerView* _toggleView;

}

@property (nonatomic,retain) UIButton * toggleButton;                               //@synthesize toggleButton=_toggleButton - In the implementation block
@property (nonatomic,retain) AKMarkupButtonContainerView * toggleView;              //@synthesize toggleView=_toggleView - In the implementation block
+(id)markupBarButtonWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setTarget:(id)arg1 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setToggleButton:(UIButton *)arg1 ;
-(UIButton *)toggleButton;
-(AKMarkupButtonContainerView *)toggleView;
-(void)setToggleView:(AKMarkupButtonContainerView *)arg1 ;
@end

