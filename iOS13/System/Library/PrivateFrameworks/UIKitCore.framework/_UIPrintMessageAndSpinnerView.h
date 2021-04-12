/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIActivityIndicatorView, NSArray, NSString;

@interface _UIPrintMessageAndSpinnerView : UIView {

	UILabel* _label;
	UIActivityIndicatorView* _spinner;
	NSArray* _currentHorizontalConstraints;

}

@property (nonatomic,retain) UILabel * label;                                     //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                   //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) NSArray * currentHorizontalConstraints;              //@synthesize currentHorizontalConstraints=_currentHorizontalConstraints - In the implementation block
@property (nonatomic,retain) NSString * messageText; 
@property (assign,nonatomic) BOOL spinSpinner; 
@property (assign,nonatomic) BOOL spinnerHidden; 
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)setMessageText:(NSString *)arg1 ;
-(void)setSpinnerHidden:(BOOL)arg1 ;
-(void)setSpinSpinner:(BOOL)arg1 ;
-(void)updateFont;
-(BOOL)spinnerHidden;
-(UIActivityIndicatorView *)spinner;
-(NSArray *)currentHorizontalConstraints;
-(void)setCurrentHorizontalConstraints:(NSArray *)arg1 ;
-(NSString *)messageText;
-(BOOL)spinSpinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end

