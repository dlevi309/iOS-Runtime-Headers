/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NFFieldDetectSessionDelegate.h>
#import <libobjc.A.dylib/NFLoyaltyAndPaymentSessionDelegate.h>

@protocol NFSession, OS_dispatch_source, OS_dispatch_queue, PKFieldDetectorDelegate;
@class NFFieldDetectSession, PKFieldProperties, NFLoyaltyAndPaymentSession, NSObject, NSHashTable, NSString;

@interface PKFieldDetector : NSObject <NFFieldDetectSessionDelegate, NFLoyaltyAndPaymentSessionDelegate> {

	NFFieldDetectSession* _fieldDetectSession;
	unsigned long long _fieldDetectSessionRetryCount;
	BOOL _fieldDetectSessionRequested;
	BOOL _nfcRadioEnabled;
	PKFieldProperties* _fieldPropertiesToLookup;
	NFLoyaltyAndPaymentSession* _fieldPropertiesLookupSession;
	NSObject*<NFSession> _fieldPropertiesLookupSessionHandle;
	NSObject*<OS_dispatch_source> _fieldPropertiesLookupTimer;
	unsigned long long _fieldPropertieslookupSynchronizer;
	os_unfair_lock_s _lock;
	NSHashTable* _observers;
	unsigned long long _enablePersistentFieldDetectionReasons;
	PKFieldProperties* _fieldProperties;
	NSObject*<OS_dispatch_queue> _fieldDetectorSerialQueue;
	NSObject*<OS_dispatch_queue> _replyQueue;
	id<PKFieldDetectorDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) PKFieldProperties * fieldProperties; 
@property (assign,nonatomic,__weak) id<PKFieldDetectorDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)_endLookup;
-(id)init;
-(id<PKFieldDetectorDelegate>)delegate;
-(void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2 ;
-(void)fieldDetectSession:(id)arg1 didEnterFieldWithNotification:(id)arg2 ;
-(void)updateRadioState;
-(void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2 ;
-(void)_startLookup;
-(void)_invalidateFieldDetectSession;
-(void)setDelegate:(id<PKFieldDetectorDelegate>)arg1 ;
-(PKFieldProperties *)fieldProperties;
-(void)_startFieldDetectSession;
-(void)_evaulatePersistentFieldDetectionEnablementReasons;
-(id)initWithDelegate:(id)arg1 ;
-(void)setPersistentFieldDetectionEnabled:(BOOL)arg1 ;
-(void)_restartFieldDetectSession;
-(void)requestPersistentFieldDetectionEnabled:(BOOL)arg1 withReason:(unsigned long long)arg2 ;
-(void)fieldDetectSessionDidEndUnexpectedly:(id)arg1 ;
-(void)_endLookupAndNotify;
-(void)_setPersistentFieldDetectionEnabled:(BOOL)arg1 ;
-(void)fieldDetectSessionDidExitField:(id)arg1 ;
-(void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1 ;
-(void)dealloc;
@end

