/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPaymentDashboardCellActionHandleable.h>

@protocol PKAccessibleLayoutObserverDelegate;
@class UIImageView, PKContinuousButton, UILabel, PKPaymentPassAction, PKPaymentPass, UIColor, NSString;

@interface PKAdjustableSingleCellView : UIView <PKPaymentDashboardCellActionHandleable> {

	UIImageView* _disclosureView;
	PKContinuousButton* _actionButton;
	double _topPadding;
	double _middlePadding;
	long long _accessibleLayout;
	id<PKAccessibleLayoutObserverDelegate> _accessibleLayoutObserverDelegate;
	BOOL _isTemplateLayout;
	UILabel* _titleView;
	UILabel* _detailView;
	UILabel* _subDetailView;
	unsigned long long _deferUpdateCounter;
	BOOL _animated;
	BOOL _enableDisclosure;
	/*^block*/id _actionHandler;
	PKPaymentPassAction* _action;
	PKPaymentPass* _pass;
	UIColor* _titleColor;
	UIColor* _detailColor;
	UIColor* _subDetailColor;
	long long _titleLineBreakMode;
	long long _detailLineBreakMode;
	long long _subDetailLineBreakMode;
	NSString* _title;
	NSString* _detail;
	NSString* _subDetail;

}

@property (nonatomic,copy) id actionHandler;                                //@synthesize actionHandler=_actionHandler - In the implementation block
@property (assign,nonatomic) BOOL enableDisclosure;                         //@synthesize enableDisclosure=_enableDisclosure - In the implementation block
@property (nonatomic,copy) PKPaymentPassAction * action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) PKPaymentPass * pass;                            //@synthesize pass=_pass - In the implementation block
@property (nonatomic,copy) UIColor * titleColor;                            //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) UIColor * detailColor;                           //@synthesize detailColor=_detailColor - In the implementation block
@property (nonatomic,copy) UIColor * subDetailColor;                        //@synthesize subDetailColor=_subDetailColor - In the implementation block
@property (assign,nonatomic) long long titleLineBreakMode;                  //@synthesize titleLineBreakMode=_titleLineBreakMode - In the implementation block
@property (assign,nonatomic) long long detailLineBreakMode;                 //@synthesize detailLineBreakMode=_detailLineBreakMode - In the implementation block
@property (assign,nonatomic) long long subDetailLineBreakMode;              //@synthesize subDetailLineBreakMode=_subDetailLineBreakMode - In the implementation block
@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * detail;                               //@synthesize detail=_detail - In the implementation block
@property (nonatomic,copy) NSString * subDetail;                            //@synthesize subDetail=_subDetail - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(PKPaymentPassAction *)action;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_titleFont;
-(void)setAction:(PKPaymentPassAction *)arg1 ;
-(UIColor *)titleColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(void)beginUpdates;
-(NSString *)detail;
-(id)_detailFont;
-(void)_setupViews;
-(void)_actionButtonTapped:(id)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)_performInit;
-(void)_applyStyles;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(BOOL)_needsThirdLine;
-(void)_updateContent:(BOOL)arg1 ;
-(id)_subDetailFont;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(BOOL)enableDisclosure;
-(void)endUpdates:(BOOL)arg1 ;
-(void)setEnableDisclosure:(BOOL)arg1 ;
-(void)setSubDetail:(NSString *)arg1 ;
-(void)setDetailColor:(UIColor *)arg1 ;
-(void)setSubDetailColor:(UIColor *)arg1 ;
-(void)setTitleLineBreakMode:(long long)arg1 ;
-(void)setDetailLineBreakMode:(long long)arg1 ;
-(void)setSubDetailLineBreakMode:(long long)arg1 ;
-(UIColor *)detailColor;
-(UIColor *)subDetailColor;
-(long long)titleLineBreakMode;
-(long long)detailLineBreakMode;
-(long long)subDetailLineBreakMode;
-(NSString *)subDetail;
@end

