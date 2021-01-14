/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/

#import <SIMSetupSupport/SIMSetupSupport-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIActivityIndicatorView;

@interface TSCellularSetupLoadingView : UIView {

	BOOL _isRemotePlan;
	UILabel* _firstLabel;
	UILabel* _secondLabel;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UILabel * firstLabel;                           //@synthesize firstLabel=_firstLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondLabel;                          //@synthesize secondLabel=_secondLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL isRemotePlan;                              //@synthesize isRemotePlan=_isRemotePlan - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)layoutSubviews;
-(void)setSecondLabel:(UILabel *)arg1 ;
-(UILabel *)secondLabel;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)_setupLabels;
-(void)_setupActivityIndicator;
-(void)setFirstLabel:(UILabel *)arg1 ;
-(UILabel *)firstLabel;
-(void)setIsRemotePlan:(BOOL)arg1 ;
-(BOOL)isRemotePlan;
-(void)spinnerStopAnimating;
-(void)spinnerStartAnimating;
@end

