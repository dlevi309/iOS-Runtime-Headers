/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(BOOL)spinnerHidden;
-(NSArray *)currentHorizontalConstraints;
-(void)setCurrentHorizontalConstraints:(NSArray *)arg1 ;
-(void)updateConstraints;
-(void)updateFont;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(void)setSpinnerHidden:(BOOL)arg1 ;
-(void)setSpinSpinner:(BOOL)arg1 ;
-(NSString *)messageText;
-(BOOL)spinSpinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)label;
@end

