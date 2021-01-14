/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKPassFooterContentView.h>
#import <libobjc.A.dylib/PKPassPaymentPayStateViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>

@protocol OS_dispatch_source, PKPaymentDashboardCellActionHandleable;
@class PKPassPaymentPayStateView, PKExpressTransactionState, NSObject, NSDate, NSMutableDictionary, PKPaymentService, PKTransitBalanceModel, UIView, NSString;

@interface PKPassPaymentConfirmationView : PKPassFooterContentView <PKPassPaymentPayStateViewDelegate, PKPaymentServiceDelegate> {

	PKPassPaymentPayStateView* _payStateView;
	BOOL _animated;
	PKExpressTransactionState* _expressState;
	BOOL _receivedTransaction;
	BOOL _receivedExit;
	BOOL _needsResolution;
	BOOL _showingResolution;
	BOOL _showingSuccessResolution;
	BOOL _animatingResolution;
	BOOL _showingAlert;
	NSObject*<OS_dispatch_source> _activityResolutionTimer;
	unsigned long long _resolutionCounter;
	NSDate* _visibleDate;
	NSMutableDictionary* _registeredExpressObservers;
	PKPaymentService* _paymentService;
	PKTransitBalanceModel* _transitBalanceModel;
	UIView*<PKPaymentDashboardCellActionHandleable> _singleValueCellPrimary;
	UIView*<PKPaymentDashboardCellActionHandleable> _singleValueCellSecondary;
	UIView*<PKPaymentDashboardCellActionHandleable> _dualValueCellPrimary;
	UIView*<PKPaymentDashboardCellActionHandleable> _displayedCellPrimary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleExpressNotification:(id)arg1 ;
-(id)_expressNotificationNames;
-(void)_registerObserverForNotificationName:(id)arg1 center:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)_isRegisteredForAllExpressTransactionNotifications;
-(void)_updateContentPrimaryView;
-(void)_updateContentSecondaryView;
-(id)_findOrCreateSecondaryView;
-(id)_findOrCreatePrimaryAdjustableSingleCellView;
-(id)_findOrCreatePrimaryFusedDoubleCellView;
-(void)_disableActivityTimer;
-(BOOL)_shouldDisplayPrimaryView;
-(BOOL)_shouldDisplaySecondaryView;
-(void)_presentCheckmarkIfNecessary;
-(BOOL)_isExpressOutstanding;
-(void)_beginResolution;
-(void)_resolveActivityIfNecessary;
-(void)_resolveActivityIfNecessaryWithDelay;
-(BOOL)_isRegisteredForAnyExpressTransactionNotifications;
-(id)initWithPass:(id)arg1 context:(id)arg2 ;
-(void)willBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)didBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)_registerForExpressTransactionNotifications:(BOOL)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)payStateView:(id)arg1 revealingCheckmark:(BOOL)arg2 ;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(void)dealloc;
@end

