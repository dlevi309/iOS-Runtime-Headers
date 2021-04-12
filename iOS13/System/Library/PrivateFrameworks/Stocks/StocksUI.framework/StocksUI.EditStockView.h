/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
*/

#import <StocksUI/StocksUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString, NSString, NSArray;

@interface StocksUI.EditStockView : UIView {

	 symbolLabel;
	 nameLabel;
	 exchangeLabel;
	 accessibilitySupplementaryActions;
	 accessibilityEscapeHandler;

}

@property (retain,nonatomic) NSAttributedString * accessibilityAttributedLabel; 
@property (copy,nonatomic) NSString * accessibilityValue; 
@property (copy,nonatomic) NSArray * accessibilityCustomActions; 
-(NSAttributedString *)accessibilityAttributedLabel;
-(NSString *)accessibilityValue;
-(void)setAccessibilityAttributedLabel:(NSAttributedString *)arg1 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(void)setAccessibilityCustomActions:(NSArray *)arg1 ;
-(NSArray *)accessibilityCustomActions;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

