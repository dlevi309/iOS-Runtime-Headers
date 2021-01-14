/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PRXTextContainer;
@class NSArray, UIView, PRXButton, UILayoutGuide;

@interface PRXFeatureTourContentView : UIView {

	NSArray* _titleViewConstraints;
	NSArray* _bodyViewConstraints;
	NSArray* _dismissButtonConstraints;
	NSArray* _mainContentGuideConstraints;
	UIView*<PRXTextContainer> _titleView;
	UIView*<PRXTextContainer> _bodyView;
	PRXButton* _dismissButton;
	UILayoutGuide* _mainContentGuide;

}

@property (nonatomic,retain) UIView*<PRXTextContainer> titleView;              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UIView*<PRXTextContainer> bodyView;               //@synthesize bodyView=_bodyView - In the implementation block
@property (nonatomic,retain) PRXButton * dismissButton;                        //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * mainContentGuide;               //@synthesize mainContentGuide=_mainContentGuide - In the implementation block
-(CGSize)intrinsicContentSize;
-(UIView*<PRXTextContainer>)titleView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setTitleView:(UIView*<PRXTextContainer>)arg1 ;
-(UIView*<PRXTextContainer>)bodyView;
-(void)updateConstraints;
-(void)setDismissButton:(PRXButton *)arg1 ;
-(PRXButton *)dismissButton;
-(void)setBodyView:(UIView*<PRXTextContainer>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILayoutGuide *)mainContentGuide;
@end

