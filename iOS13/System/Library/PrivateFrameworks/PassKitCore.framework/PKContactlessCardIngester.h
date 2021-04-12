/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NFRemoteAdminEventListener.h>

@protocol PKContactlessCardIngesterDelegate, OS_dispatch_queue;
@class NSString, PKPaymentProvisioningMethodMetadata, NSNumberFormatter, NSObject;

@interface PKContactlessCardIngester : NSObject <NFRemoteAdminEventListener> {

	BOOL _listening;
	NSString* _pushTopic;
	PKPaymentProvisioningMethodMetadata* _readerModeProvisioningMetadata;
	NSNumberFormatter* _currencyNumberFormatter;
	id<PKContactlessCardIngesterDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _contactlessCardIngesterQueue;
	/*^block*/id _cardSessionTokenCompletionHandler;
	/*^block*/id _disableCardCompletionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupported;
+(id)debugDescriptionForStatus:(unsigned long long)arg1 ;
-(void)invalidate;
-(void)readerModeCardSessionToken:(id)arg1 ;
-(void)readerModeCardIngestionStatus:(unsigned long long)arg1 ;
-(void)_cancelCardIngestion;
-(void)_stopListeningToRemoteAdminEvents;
-(void)_startListeningToRemoteAdminEventsIfRequired;
-(void)_ingestCardWithCompletion:(/*^block*/id)arg1 ;
-(void)_ingestCardWithCardSessionToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_displayableErrorForSPStatusCode:(unsigned long long)arg1 seldError:(id)arg2 ;
-(id)initWithPaymentSetupProduct:(id)arg1 delegate:(id)arg2 ;
-(void)ingestCardWithSuccessHandler:(/*^block*/id)arg1 ;
-(void)ingestCardWithCardSessionToken:(id)arg1 successHandler:(/*^block*/id)arg2 ;
@end

