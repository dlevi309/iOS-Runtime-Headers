/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/PKAccessibleLayoutSupport.h>

@protocol PKAccessibleLayoutObserverDelegate;
@class PKTransitBalanceModel, UIColor, PKPaymentPass, PKPaymentPassAction, PKPaymentBalance, PKTransitCommutePlan, UILabel, PKContinuousButton;

@interface PKPassProductCell : UITableViewCell <PKAccessibleLayoutSupport> {

	PKTransitBalanceModel* _balanceModel;
	UIColor* _subDetailColor;
	id<PKAccessibleLayoutObserverDelegate> _accessibleLayoutObserverDelegate;
	long long _accessibleLayout;
	PKPaymentPass* _pass;
	PKPaymentPassAction* _action;
	PKPaymentBalance* _balance;
	PKTransitCommutePlan* _commutePlan;
	/*^block*/id _actionHandler;
	UILabel* _titleView;
	UILabel* _detailView;
	UILabel* _subDetailView;
	PKContinuousButton* _actionButton;
	double _topPadding;
	double _middlePadding;

}

@property (nonatomic,retain) UILabel * titleView;                                                                         //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UILabel * detailView;                                                                        //@synthesize detailView=_detailView - In the implementation block
@property (nonatomic,retain) UILabel * subDetailView;                                                                     //@synthesize subDetailView=_subDetailView - In the implementation block
@property (nonatomic,retain) PKContinuousButton * actionButton;                                                           //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,nonatomic) double topPadding;                                                                           //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,nonatomic) double middlePadding;                                                                        //@synthesize middlePadding=_middlePadding - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                                                                        //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentPassAction * action;                                                                //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id<PKAccessibleLayoutObserverDelegate> accessibleLayoutObserverDelegate;              //@synthesize accessibleLayoutObserverDelegate=_accessibleLayoutObserverDelegate - In the implementation block
@property (assign,nonatomic) long long accessibleLayout;                                                                  //@synthesize accessibleLayout=_accessibleLayout - In the implementation block
@property (nonatomic,copy) PKPaymentBalance * balance;                                                                    //@synthesize balance=_balance - In the implementation block
@property (nonatomic,retain) PKTransitCommutePlan * commutePlan;                                                          //@synthesize commutePlan=_commutePlan - In the implementation block
@property (nonatomic,copy) id actionHandler;                                                                              //@synthesize actionHandler=_actionHandler - In the implementation block
-(void)prepareForReuse;
-(PKPaymentPassAction *)action;
-(void)setBackgroundColor:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_titleFont;
-(void)setAction:(PKPaymentPassAction *)arg1 ;
-(UILabel *)titleView;
-(void)setTitleView:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)middlePadding;
-(double)topPadding;
-(id)_detailFont;
-(PKContinuousButton *)actionButton;
-(PKPaymentBalance *)balance;
-(void)setBalance:(PKPaymentBalance *)arg1 ;
-(UILabel *)detailView;
-(void)setDetailView:(UILabel *)arg1 ;
-(void)_actionButtonTapped:(id)arg1 ;
-(PKPaymentPass *)pass;
-(void)setActionButton:(PKContinuousButton *)arg1 ;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)setTopPadding:(double)arg1 ;
-(void)_updateContent;
-(void)_applyStyles;
-(BOOL)_needsThirdLine;
-(id)_subDetailFont;
-(id<PKAccessibleLayoutObserverDelegate>)accessibleLayoutObserverDelegate;
-(void)setAccessibleLayoutObserverDelegate:(id<PKAccessibleLayoutObserverDelegate>)arg1 ;
-(long long)accessibleLayout;
-(void)setAccessibleLayout:(long long)arg1 ;
-(void)setPass:(id)arg1 balance:(id)arg2 transitBalanceModel:(id)arg3 ;
-(void)setPass:(id)arg1 commutePlan:(id)arg2 transitBalanceModel:(id)arg3 ;
-(PKTransitCommutePlan *)commutePlan;
-(void)setCommutePlan:(PKTransitCommutePlan *)arg1 ;
-(UILabel *)subDetailView;
-(void)setSubDetailView:(UILabel *)arg1 ;
-(void)setMiddlePadding:(double)arg1 ;
@end

