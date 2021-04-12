/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPaymentPreferenceCell.h>

@protocol PKPaymentPreferenceCardCellAccessoryViewDelegate;
@class UIActivityIndicatorView, UIStackView, UIView, UIColor, NSLayoutConstraint, NSArray, PKPaymentPass, PKPassSnapshotter, PKTransitBalanceModel, UILabel, UIImageView, UISwitch, NSString;

@interface PKPaymentPreferenceCardCell : PKPaymentPreferenceCell {

	BOOL _isRightToLeft;
	BOOL _editing;
	UIActivityIndicatorView* _activityIndicator;
	UIStackView* _labelStackView;
	UIView* _accessoryView;
	UIColor* _subTextLabelColorOverride;
	NSLayoutConstraint* _labelStackTrailingAnchorToCell;
	NSArray* _accessoryStackConstraints;
	BOOL _showBillingAddress;
	BOOL _dimCardArt;
	BOOL _activityIndicatorActive;
	id<PKPaymentPreferenceCardCellAccessoryViewDelegate> _delegate;
	long long _accessoryViewType;
	PKPaymentPass* _pass;
	PKPassSnapshotter* _passSnapshotter;
	PKTransitBalanceModel* _transitBalanceModel;
	UIColor* _mainLabelColor;
	UIColor* _subTextLabelColor;
	UIColor* _disabledMainLabelColor;
	UIColor* _disabledSubTextLabelColor;
	UIColor* _activityIndicatorColor;
	UILabel* _displayLabel;
	UILabel* _censoredPANLabel;
	UIImageView* _cardArtView;
	UISwitch* _actionSwitch;
	NSString* _availabilityString;
	NSString* _subTextOverrideString;

}

@property (assign,nonatomic,__weak) id<PKPaymentPreferenceCardCellAccessoryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long accessoryViewType;                                                       //@synthesize accessoryViewType=_accessoryViewType - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                                                              //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPassSnapshotter * passSnapshotter;                                               //@synthesize passSnapshotter=_passSnapshotter - In the implementation block
@property (nonatomic,retain) PKTransitBalanceModel * transitBalanceModel;                                       //@synthesize transitBalanceModel=_transitBalanceModel - In the implementation block
@property (nonatomic,retain) UIColor * mainLabelColor;                                                          //@synthesize mainLabelColor=_mainLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * subTextLabelColor;                                                       //@synthesize subTextLabelColor=_subTextLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledMainLabelColor;                                                  //@synthesize disabledMainLabelColor=_disabledMainLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledSubTextLabelColor;                                               //@synthesize disabledSubTextLabelColor=_disabledSubTextLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * activityIndicatorColor;                                                  //@synthesize activityIndicatorColor=_activityIndicatorColor - In the implementation block
@property (nonatomic,readonly) UILabel * displayLabel;                                                          //@synthesize displayLabel=_displayLabel - In the implementation block
@property (nonatomic,readonly) UILabel * censoredPANLabel;                                                      //@synthesize censoredPANLabel=_censoredPANLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * cardArtView;                                                       //@synthesize cardArtView=_cardArtView - In the implementation block
@property (nonatomic,readonly) UISwitch * actionSwitch;                                                         //@synthesize actionSwitch=_actionSwitch - In the implementation block
@property (nonatomic,copy) NSString * availabilityString;                                                       //@synthesize availabilityString=_availabilityString - In the implementation block
@property (nonatomic,copy) NSString * subTextOverrideString;                                                    //@synthesize subTextOverrideString=_subTextOverrideString - In the implementation block
@property (assign,nonatomic) BOOL showBillingAddress;                                                           //@synthesize showBillingAddress=_showBillingAddress - In the implementation block
@property (assign,nonatomic) BOOL dimCardArt;                                                                   //@synthesize dimCardArt=_dimCardArt - In the implementation block
@property (assign,getter=isActivityIndicatorActive,nonatomic) BOOL activityIndicatorActive;                     //@synthesize activityIndicatorActive=_activityIndicatorActive - In the implementation block
+(double)textOffset;
-(void)_setupConstraints;
-(void)setActivityIndicatorActive:(BOOL)arg1 ;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(UISwitch *)actionSwitch;
-(void)setActivityIndicatorColor:(UIColor *)arg1 ;
-(void)setPassSnapshotter:(PKPassSnapshotter *)arg1 ;
-(long long)accessoryViewType;
-(id<PKPaymentPreferenceCardCellAccessoryViewDelegate>)delegate;
-(void)setSubTextOverrideString:(NSString *)arg1 ;
-(void)_updateAccessoryView;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setDelegate:(id<PKPaymentPreferenceCardCellAccessoryViewDelegate>)arg1 ;
-(PKTransitBalanceModel *)transitBalanceModel;
-(void)setTransitBalanceModel:(PKTransitBalanceModel *)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateCellContent;
-(UIImageView *)cardArtView;
-(UILabel *)censoredPANLabel;
-(void)_updateCensoredPANLabel;
-(PKPaymentPass *)pass;
-(BOOL)dimCardArt;
-(void)setAccessoryViewType:(long long)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(void)setMainLabelColor:(UIColor *)arg1 ;
-(void)setSubTextLabelColor:(UIColor *)arg1 ;
-(void)setDisabledMainLabelColor:(UIColor *)arg1 ;
-(void)setDisabledSubTextLabelColor:(UIColor *)arg1 ;
-(UIColor *)mainLabelColor;
-(UIColor *)subTextLabelColor;
-(UIColor *)disabledMainLabelColor;
-(UIColor *)disabledSubTextLabelColor;
-(void)_performSwitchToggle:(id)arg1 ;
-(void)setDimCardArt:(BOOL)arg1 ;
-(PKPassSnapshotter *)passSnapshotter;
-(NSString *)subTextOverrideString;
-(BOOL)showBillingAddress;
-(void)setShowBillingAddress:(BOOL)arg1 ;
-(BOOL)isActivityIndicatorActive;
-(UIColor *)activityIndicatorColor;
-(UILabel *)displayLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(NSString *)availabilityString;
-(void)setAvailabilityString:(NSString *)arg1 ;
-(void)_updateLabelTextColors;
@end

