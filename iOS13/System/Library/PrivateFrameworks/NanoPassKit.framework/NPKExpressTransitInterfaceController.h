/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NPKTransitAppletHistoryFetcherDelegate.h>
#import <libobjc.A.dylib/NPKExpressPassControllerDelegate.h>

@protocol NPKExpressTransitInterfaceControllerDelegate, NPKExpressTransitInterfaceControllerDataSource, OS_dispatch_source;
@class NSObject, NPKTransitAppletHistoryFetcher, PKPass, PKPaymentApplication, NPKExpressPassController, PKTransitAppletState, NSString;

@interface NPKExpressTransitInterfaceController : NSObject <NPKTransitAppletHistoryFetcherDelegate, NPKExpressPassControllerDelegate> {

	id<NPKExpressTransitInterfaceControllerDelegate> _delegate;
	id<NPKExpressTransitInterfaceControllerDataSource> _dataSource;
	NSObject*<OS_dispatch_source> _dismissalTimer;
	NPKTransitAppletHistoryFetcher* _appletHistoryFetcher;
	PKPass* _expressTransitPass;
	PKPaymentApplication* _expressTransitPaymentApplication;
	NPKExpressPassController* _expressPassController;
	PKTransitAppletState* _transactionStartAppletState;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> dismissalTimer;                                      //@synthesize dismissalTimer=_dismissalTimer - In the implementation block
@property (nonatomic,retain) NPKTransitAppletHistoryFetcher * appletHistoryFetcher;                             //@synthesize appletHistoryFetcher=_appletHistoryFetcher - In the implementation block
@property (nonatomic,retain) PKPass * expressTransitPass;                                                       //@synthesize expressTransitPass=_expressTransitPass - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * expressTransitPaymentApplication;                           //@synthesize expressTransitPaymentApplication=_expressTransitPaymentApplication - In the implementation block
@property (nonatomic,readonly) NPKExpressPassController * expressPassController;                                //@synthesize expressPassController=_expressPassController - In the implementation block
@property (nonatomic,retain) PKTransitAppletState * transactionStartAppletState;                                //@synthesize transactionStartAppletState=_transactionStartAppletState - In the implementation block
@property (assign,nonatomic,__weak) id<NPKExpressTransitInterfaceControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<NPKExpressTransitInterfaceControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<NPKExpressTransitInterfaceControllerDelegate>)delegate;
-(void)setDelegate:(id<NPKExpressTransitInterfaceControllerDelegate>)arg1 ;
-(id<NPKExpressTransitInterfaceControllerDataSource>)dataSource;
-(void)setDataSource:(id<NPKExpressTransitInterfaceControllerDataSource>)arg1 ;
-(NSObject*<OS_dispatch_source>)dismissalTimer;
-(void)setDismissalTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)transitAppletHistoryFetcher:(id)arg1 gotTransitAppletHistory:(id)arg2 forAppletWithAID:(id)arg3 ;
-(void)expressPassController:(id)arg1 didStartTransactionForPass:(id)arg2 paymentApplicationIdentifier:(id)arg3 ;
-(void)expressPassController:(id)arg1 didCompleteTransactionForPass:(id)arg2 ;
-(void)expressPassController:(id)arg1 didFailTransactionForPass:(id)arg2 ;
-(void)expressPassController:(id)arg1 didUpdateExpressPasses:(id)arg2 expressPassesInformation:(id)arg3 ;
-(void)_dismissExpressTransitAlert;
-(void)_updateWithPass:(id)arg1 paymentApplicationIdentifier:(id)arg2 ;
-(void)setTransactionStartAppletState:(PKTransitAppletState *)arg1 ;
-(PKPass *)expressTransitPass;
-(PKPaymentApplication *)expressTransitPaymentApplication;
-(void)_scheduleDismissalOfExpressTransitAlertWithTimeout:(double)arg1 ;
-(PKTransitAppletState *)transactionStartAppletState;
-(NPKTransitAppletHistoryFetcher *)appletHistoryFetcher;
-(void)setExpressTransitPass:(PKPass *)arg1 ;
-(void)setExpressTransitPaymentApplication:(PKPaymentApplication *)arg1 ;
-(id)_paymentApplicationFromPass:(id)arg1 applicationIdentifier:(id)arg2 ;
-(BOOL)canHandleExpressEventsFromPass:(id)arg1 ;
-(void)setAppletHistoryFetcher:(NPKTransitAppletHistoryFetcher *)arg1 ;
-(NPKExpressPassController *)expressPassController;
@end

