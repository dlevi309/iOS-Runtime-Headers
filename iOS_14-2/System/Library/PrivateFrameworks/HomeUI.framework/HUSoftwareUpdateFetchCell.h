/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, UIStackView, UIView, UIActivityIndicatorView, UILabel, NSString;

@interface HUSoftwareUpdateFetchCell : UITableViewCell <HUCellProtocol> {

	HFItem* _item;
	UIStackView* _mainStackView;
	UIView* _titleSpinnerView;
	UIActivityIndicatorView* _checkingForUpdateSpinner;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UIStackView * mainStackView;                                      //@synthesize mainStackView=_mainStackView - In the implementation block
@property (nonatomic,retain) UIView * titleSpinnerView;                                        //@synthesize titleSpinnerView=_titleSpinnerView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * checkingForUpdateSpinner;               //@synthesize checkingForUpdateSpinner=_checkingForUpdateSpinner - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(UIActivityIndicatorView *)checkingForUpdateSpinner;
-(void)setCheckingForUpdateSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)updateConstraints;
-(UIStackView *)mainStackView;
-(void)setMainStackView:(UIStackView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)titleSpinnerView;
-(void)setTitleSpinnerView:(UIView *)arg1 ;
@end

