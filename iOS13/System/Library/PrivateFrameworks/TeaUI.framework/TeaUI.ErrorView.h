/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, NSArray;

@interface TeaUI.ErrorView : UIView {

	 errorPosition;
	 model;
	 styler;
	 label;
	 scrollView;
	 visualEffectView;
	 keyboardObserver;

}

@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (copy,nonatomic) NSString * accessibilityLabel; 
@property (copy,nonatomic) NSArray * accessibilityElements; 
-(NSString *)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

