/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/PKFieldDetectorObserver.h>

@protocol OS_dispatch_queue, NPKExpressPassControllerDelegate;
@class NSObject, PKPass, NSSet, PKPaymentService, PKPassLibrary, NSDistributedNotificationCenter, NSDictionary, PKExpressPassInformation, PKFieldDetector, NSString;

@interface NPKExpressPassController : NSObject <PKFieldDetectorObserver> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	int _expressPassChangedNotifyToken;
	unsigned long long _transactionStatus;
	PKPass* _currentTransactionPass;
	NSSet* _expressPassesInformation;
	PKPaymentService* _queue_paymentService;
	PKPassLibrary* _passLibrary;
	NSDistributedNotificationCenter* _distributedNotificationCenter;
	id<NPKExpressPassControllerDelegate> _delegate;
	NSDictionary* _expressPasses;
	PKExpressPassInformation* _currentTransactionExpressPassInformation;
	PKFieldDetector* _fieldDetector;

}

@property (nonatomic,retain) PKPass * currentTransactionPass;                                                       //@synthesize currentTransactionPass=_currentTransactionPass - In the implementation block
@property (nonatomic,__weak,readonly) PKPassLibrary * passLibrary;                                                  //@synthesize passLibrary=_passLibrary - In the implementation block
@property (retain) NSSet * expressPassesInformation;                                                                //@synthesize expressPassesInformation=_expressPassesInformation - In the implementation block
@property (retain) NSDictionary * expressPasses;                                                                    //@synthesize expressPasses=_expressPasses - In the implementation block
@property (nonatomic,__weak,readonly) NSDistributedNotificationCenter * distributedNotificationCenter;              //@synthesize distributedNotificationCenter=_distributedNotificationCenter - In the implementation block
@property (nonatomic,retain) PKExpressPassInformation * currentTransactionExpressPassInformation;                   //@synthesize currentTransactionExpressPassInformation=_currentTransactionExpressPassInformation - In the implementation block
@property (nonatomic,retain) PKFieldDetector * fieldDetector;                                                       //@synthesize fieldDetector=_fieldDetector - In the implementation block
@property (__weak) id<NPKExpressPassControllerDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NPKExpressPassControllerDelegate>)delegate;
-(void)setDelegate:(id<NPKExpressPassControllerDelegate>)arg1 ;
-(void)reset;
-(id)initWithDelegate:(id)arg1 ;
-(NSSet *)expressPassesInformation;
-(void)fieldDetectorDidEnterField:(id)arg1 withProperties:(id)arg2 ;
-(PKPassLibrary *)passLibrary;
-(NSDistributedNotificationCenter *)distributedNotificationCenter;
-(PKFieldDetector *)fieldDetector;
-(void)setFieldDetector:(PKFieldDetector *)arg1 ;
-(void)_queue_updateExpressPasses;
-(void)updateExpressPasses;
-(id)initWithPaymentService:(id)arg1 passLibrary:(id)arg2 distributedNotificationCenter:(id)arg3 delegate:(id)arg4 ;
-(void)_transitionToStatus:(unsigned long long)arg1 forExpressPass:(id)arg2 paymentApplicationIdentifier:(id)arg3 ;
-(void)_handleEnterNearFieldNotification:(id)arg1 ;
-(void)_handleExpressTransactionStartNotification:(id)arg1 ;
-(void)_handleExpressTransactionTimeOutNotification:(id)arg1 ;
-(void)_handleExpressTransactionEndNotification:(id)arg1 ;
-(void)_handleExpressTransactionFailedNotification:(id)arg1 ;
-(void)_handleExitNearFieldNotification:(id)arg1 ;
-(void)_handlePassesLibraryChangedNotification:(id)arg1 ;
-(id)_expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1 ;
-(void)setCurrentTransactionExpressPassInformation:(PKExpressPassInformation *)arg1 ;
-(NSDictionary *)expressPasses;
-(BOOL)_hasNoTransactionStartOrEndNotificationForTechnologyType:(long long)arg1 ;
-(PKExpressPassInformation *)currentTransactionExpressPassInformation;
-(void)_parseExpressNotificationObject:(id)arg1 outApplicationIdentifier:(id*)arg2 outApplicationKeyIdentifier:(id*)arg3 ;
-(void)_onqueue_transactionStartedWithApplicationIdentifier:(id)arg1 applicationKeyIdentifier:(id)arg2 ;
-(void)_onqueue_transactionEndedWithApplicationIdentifier:(id)arg1 applicationKeyIdentifier:(id)arg2 ;
-(void)_onqueue_transactionFailedWithApplicationIdentifier:(id)arg1 applicationKeyIdentifier:(id)arg2 ;
-(id)_queue_expressPassForTransactionApplicationIdentifier:(id)arg1 transactionApplicationKeyIdentifier:(id)arg2 ;
-(id)_queue_paymentService;
-(void)_startListeningForExpressNotifications;
-(void)_stopListeningForExpressNotifications;
-(void)_startFieldDetector;
-(void)_stopFieldDetector;
-(void)setExpressPassesInformation:(NSSet *)arg1 ;
-(void)setExpressPasses:(NSDictionary *)arg1 ;
-(id)_expressPassesInformationWithTCIs:(id)arg1 ;
-(PKPass *)currentTransactionPass;
-(void)setCurrentTransactionPass:(PKPass *)arg1 ;
@end

