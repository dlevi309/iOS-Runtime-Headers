/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VMAccountsViewDataSource, VMAccountsViewDelegate;
@class UILabel, NSMutableArray, UIStackView;

@interface VMAccountsView : UIView {

	id<VMAccountsViewDataSource> _dataSource;
	id<VMAccountsViewDelegate> _delegate;
	UILabel* _messageLabel;
	NSMutableArray* _buttons;
	UIStackView* _buttonStackView;

}

@property (nonatomic,retain) NSMutableArray * buttons;                                                      //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIStackView * buttonStackView;                                                 //@synthesize buttonStackView=_buttonStackView - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                                        //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) double messageLabelFirstBaselineAnchorLayoutConstraintConstant; 
@property (nonatomic,readonly) double messageLabelLastBaselineAnchorLayoutConstraintConstant; 
@property (assign,nonatomic,__weak) id<VMAccountsViewDataSource> dataSource;                                //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<VMAccountsViewDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
-(void)loadConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<VMAccountsViewDelegate>)delegate;
-(NSMutableArray *)buttons;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(id<VMAccountsViewDataSource>)dataSource;
-(UILabel *)messageLabel;
-(void)commonInit;
-(void)setDelegate:(id<VMAccountsViewDelegate>)arg1 ;
-(void)setDataSource:(id<VMAccountsViewDataSource>)arg1 ;
-(void)reloadData;
-(id)buttonAtIndex:(unsigned long long)arg1 ;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(void)setButtonStackView:(UIStackView *)arg1 ;
-(UIStackView *)buttonStackView;
-(double)messageLabelFirstBaselineAnchorLayoutConstraintConstant;
-(double)messageLabelLastBaselineAnchorLayoutConstraintConstant;
-(void)handleActionForButtonSender:(id)arg1 event:(id)arg2 ;
@end

