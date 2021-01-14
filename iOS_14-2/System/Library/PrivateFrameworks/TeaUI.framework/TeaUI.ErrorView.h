/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(BOOL)isAccessibilityElement;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
@end

