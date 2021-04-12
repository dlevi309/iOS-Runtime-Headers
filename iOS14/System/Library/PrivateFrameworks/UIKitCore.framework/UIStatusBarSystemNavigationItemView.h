/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIButton *)button;
-(BOOL)layoutImageOnTrailingEdge;
-(BOOL)_shouldLayoutImageOnRight;
-(double)maxWidth;
-(void)setButton:(UIButton *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)_buttonSize;
-(double)updateContentsAndWidth;
-(double)extraRightPadding;
-(void)setMaxWidth:(double)arg1 ;
-(double)extraLeftPadding;
-(id)accessibilityHUDRepresentation;
-(long long)labelLineBreakMode;
-(void)setCurrentLabelCompressionLevel:(int)arg1 ;
-(int)currentLabelCompressionLevel;
-(id)shortenedTitleWithCompressionLevel:(int)arg1 ;
-(void)userDidActivateButton:(id)arg1 ;
-(NSString *)title;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
@end

