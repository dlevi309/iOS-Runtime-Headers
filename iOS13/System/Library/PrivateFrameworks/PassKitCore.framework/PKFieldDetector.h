/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BOOL _fieldPresent;
	PKFieldProperties* _fieldPropertiesToLookup;
	NFLoyaltyAndPaymentSession* _fieldPropertiesLookupSession;
	NSObject*<NFSession> _fieldPropertiesLookupSessionHandle;
	NSObject*<OS_dispatch_source> _fieldPropertiesLookupTimer;
	unsigned long long _fieldPropertieslookupSynchronizer;
	os_unfair_lock_s _lock;
	NSHashTable* _observers;
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
-(id)init;
-(void)dealloc;
-(id<PKFieldDetectorDelegate>)delegate;
-(void)setDelegate:(id<PKFieldDetectorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)_endLookupAndNotifyForFieldProperties:(id)arg1 ;
-(void)_startLookupForFieldProperties:(id)arg1 ;
-(void)_endFieldPropertiesLookup;
-(void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1 ;
-(void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2 ;
-(PKFieldProperties *)fieldProperties;
-(void)_startFieldDetectSession;
-(void)_restartFieldDetectSession;
-(void)fieldDetectSession:(id)arg1 didEnterFieldWithNotification:(id)arg2 ;
-(void)fieldDetectSessionDidExitField:(id)arg1 ;
-(void)fieldDetectSessionDidEndUnexpectedly:(id)arg1 ;
-(void)setPersistentFieldDetectionEnabled:(BOOL)arg1 ;
@end

