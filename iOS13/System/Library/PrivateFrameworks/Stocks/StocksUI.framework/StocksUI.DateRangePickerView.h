/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <StocksUI/StocksUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class NSString;

@interface StocksUI.DateRangePickerView : UIScrollView {

	 styler;
	 segmentedControl;
	 onChange;

}

@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
@property (copy,nonatomic) NSString * accessibilityValue; 
-(NSString *)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityActivate;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
@end

