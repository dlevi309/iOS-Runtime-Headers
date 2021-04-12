/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKPassPaymentApplicationViewDelegate;
@class PKPassPaymentSummaryHeaderView, UIView, UISegmentedControl, PKPaymentService, NSArray, PKPaymentPass, PKPaymentApplication;

@interface PKPassPaymentApplicationView : UIView {

	PKPassPaymentSummaryHeaderView* _headerView;
	UIView* _horizontalSeparator;
	UISegmentedControl* _segmentedControl;
	PKPaymentService* _paymentService;
	NSArray* _paymentApplications;
	BOOL _showHeader;
	PKPaymentPass* _pass;
	PKPaymentApplication* _selectedApplication;
	id<PKPassPaymentApplicationViewDelegate> _delegate;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                           //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * selectedApplication;                     //@synthesize selectedApplication=_selectedApplication - In the implementation block
@property (assign,nonatomic) id<PKPassPaymentApplicationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showHeader;                                                //@synthesize showHeader=_showHeader - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<PKPassPaymentApplicationViewDelegate>)delegate;
-(void)setDelegate:(id<PKPassPaymentApplicationViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithPass:(id)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)_selectedApplicationDidChange:(id)arg1 ;
-(void)setShowHeader:(BOOL)arg1 ;
-(PKPaymentApplication *)selectedApplication;
-(void)setSelectedApplication:(PKPaymentApplication *)arg1 ;
-(BOOL)showHeader;
@end

