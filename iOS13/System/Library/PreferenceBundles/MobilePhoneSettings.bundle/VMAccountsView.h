/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<VMAccountsViewDelegate>)delegate;
-(void)setDelegate:(id<VMAccountsViewDelegate>)arg1 ;
-(void)commonInit;
-(id<VMAccountsViewDataSource>)dataSource;
-(void)setDataSource:(id<VMAccountsViewDataSource>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reloadData;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)buttons;
-(id)buttonAtIndex:(unsigned long long)arg1 ;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setButtonStackView:(UIStackView *)arg1 ;
-(UIStackView *)buttonStackView;
-(void)loadConstraints;
-(double)messageLabelFirstBaselineAnchorLayoutConstraintConstant;
-(double)messageLabelLastBaselineAnchorLayoutConstraintConstant;
-(void)handleActionForButtonSender:(id)arg1 event:(id)arg2 ;
@end

