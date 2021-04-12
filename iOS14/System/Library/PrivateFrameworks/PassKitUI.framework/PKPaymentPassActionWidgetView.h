/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKPaymentPassActionWidgetViewDelegate;
@class NSArray, NSString, PKFamilyMember, PKPeerPaymentAccount, PKPaymentPass;

@interface PKPaymentPassActionWidgetView : UIView {

	NSArray* _displayableWidgets;
	NSString* _phoneNumber;
	NSString* _website;
	NSString* _email;
	PKFamilyMember* _currentUser;
	unsigned long long _widgetViewStyle;
	BOOL _usesAccessibilityLayout;
	unsigned long long _numberOfWidgetsPerRow;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKPaymentPass* _paymentPass;
	id<PKPaymentPassActionWidgetViewDelegate> _delegate;

}

@property (nonatomic,retain) PKPeerPaymentAccount * peerPaymentAccount;                              //@synthesize peerPaymentAccount=_peerPaymentAccount - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                                            //@synthesize paymentPass=_paymentPass - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentPassActionWidgetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKFamilyMember * currentUser;                                           //@synthesize currentUser=_currentUser - In the implementation block
-(PKFamilyMember *)currentUser;
-(id<PKPaymentPassActionWidgetViewDelegate>)delegate;
-(unsigned long long)numberOfRows;
-(void)setDelegate:(id<PKPaymentPassActionWidgetViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithWidgetViewStyle:(unsigned long long)arg1 ;
-(double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)arg1 rowBounds:(CGRect)arg2 ;
-(CGRect)widgetBoundsForRowWithBounds:(CGRect)arg1 ;
-(void)updateNumberOfWidgetsPerRow;
-(double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)arg1 ;
-(BOOL)hasSingleColumnLayout;
-(void)cleanUpExistingWidgets;
-(id)_createButtonForTitle:(id)arg1 image:(id)arg2 ;
-(id)_titleForAddMoneyWidgetForActions:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateUseAccessibilityLayout;
-(void)updateWidgetsAccessibilityLayoutState;
-(unsigned long long)numberOfWidgetsPerRowWithSize:(CGSize)arg1 ;
-(unsigned long long)numberOfRowsWithWidgetsPerRow:(unsigned long long)arg1 ;
-(void)_determineWidgetContentWithAvailableWidgets;
-(double)targetWidgetWidthForRowWithNumberOfWidgets:(unsigned long long)arg1 rowSize:(CGSize)arg2 ;
-(void)setCurrentUser:(PKFamilyMember *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(void)setPeerPaymentAccount:(PKPeerPaymentAccount *)arg1 ;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(PKPeerPaymentAccount *)peerPaymentAccount;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

