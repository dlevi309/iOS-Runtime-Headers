/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <OnBoardingKit/OBBaseWelcomeController.h>
#import <libobjc.A.dylib/BFFFlowItem.h>

@protocol BFFFlowItemDelegate;
@class UILabel, UIActivityIndicatorView, NSString;

@interface BFFSpinnerController : OBBaseWelcomeController <BFFFlowItem> {

	id<BFFFlowItemDelegate> _delegate;
	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) UILabel * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<BFFFlowItemDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudConfigSkipKey;
-(id<BFFFlowItemDelegate>)delegate;
-(void)setDelegate:(id<BFFFlowItemDelegate>)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)_textStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_updateLayout;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(long long)_activityIndicatorViewStyle;
-(BOOL)isEphemeral;
-(BOOL)_useAccessibilityLayout;
-(BOOL)shouldAllowStartOver;
-(BOOL)shouldSuppressExtendedInitializationActivityIndicator;
-(id)initWithSpinnerText:(id)arg1 ;
@end

