/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(NSString *)accessibilityValue;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(BOOL)accessibilityActivate;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

