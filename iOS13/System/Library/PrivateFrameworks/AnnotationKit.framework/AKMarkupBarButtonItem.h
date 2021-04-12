/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UIBarButtonItem.h>

@class UIButton, AKMarkupButtonContainerView, UIImage;

@interface AKMarkupBarButtonItem : UIBarButtonItem {

	UIButton* _toggleButton;
	AKMarkupButtonContainerView* _toggleView;
	UIImage* _toggleButtonImage;

}

@property (nonatomic,retain) UIButton * toggleButton;                               //@synthesize toggleButton=_toggleButton - In the implementation block
@property (nonatomic,retain) AKMarkupButtonContainerView * toggleView;              //@synthesize toggleView=_toggleView - In the implementation block
@property (nonatomic,retain) UIImage * toggleButtonImage;                           //@synthesize toggleButtonImage=_toggleButtonImage - In the implementation block
+(id)markupBarButtonWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(AKMarkupButtonContainerView *)toggleView;
-(UIButton *)toggleButton;
-(void)setToggleButton:(UIButton *)arg1 ;
-(void)setToggleView:(AKMarkupButtonContainerView *)arg1 ;
-(UIImage *)toggleButtonImage;
-(void)setToggleButtonImage:(UIImage *)arg1 ;
@end

