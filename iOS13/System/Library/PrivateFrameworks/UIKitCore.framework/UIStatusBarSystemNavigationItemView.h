/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class UIButton, NSString;

@interface UIStatusBarSystemNavigationItemView : UIStatusBarItemView {

	int _currentLabelCompressionLevel;
	UIButton* _button;
	double _maxWidth;

}

@property (nonatomic,retain) UIButton * button;                             //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) double maxWidth;                               //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) int currentLabelCompressionLevel;              //@synthesize currentLabelCompressionLevel=_currentLabelCompressionLevel - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(UIButton *)button;
-(id)accessibilityHUDRepresentation;
-(void)setButton:(UIButton *)arg1 ;
-(double)updateContentsAndWidth;
-(double)extraRightPadding;
-(double)extraLeftPadding;
-(void)setCurrentLabelCompressionLevel:(int)arg1 ;
-(int)currentLabelCompressionLevel;
-(id)shortenedTitleWithCompressionLevel:(int)arg1 ;
-(long long)labelLineBreakMode;
-(void)userDidActivateButton:(id)arg1 ;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
-(BOOL)layoutImageOnTrailingEdge;
-(BOOL)_shouldLayoutImageOnRight;
-(CGSize)_buttonSize;
@end

