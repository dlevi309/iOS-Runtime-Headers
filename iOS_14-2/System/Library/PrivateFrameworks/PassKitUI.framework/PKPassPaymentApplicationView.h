/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) PKPaymentPass * pass;                                                  //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * selectedApplication;                            //@synthesize selectedApplication=_selectedApplication - In the implementation block
@property (assign,nonatomic,__weak) id<PKPassPaymentApplicationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showHeader;                                                       //@synthesize showHeader=_showHeader - In the implementation block
-(PKPaymentApplication *)selectedApplication;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id<PKPassPaymentApplicationViewDelegate>)delegate;
-(void)_selectedApplicationDidChange:(id)arg1 ;
-(void)setSelectedApplication:(PKPaymentApplication *)arg1 ;
-(void)setDelegate:(id<PKPassPaymentApplicationViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(PKPaymentPass *)pass;
-(id)initWithCoder:(id)arg1 ;
-(void)setShowHeader:(BOOL)arg1 ;
-(BOOL)showHeader;
-(id)initWithPass:(id)arg1 ;
@end

