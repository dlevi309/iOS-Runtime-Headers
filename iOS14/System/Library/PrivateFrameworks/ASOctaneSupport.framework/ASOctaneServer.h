/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ASOctaneSupport.framework/ASOctaneSupport
*/


@class NSXPCConnection;

@interface ASOctaneServer : NSObject {

	NSXPCConnection* _connectionToService;

}
+(id)shared;
-(id)init;
-(id)_synchronousRemoteObjectProxy:(id*)arg1 ;
-(long long)activePort;
-(void)appRemovedWithBundleID:(id)arg1 ;
-(id)buyProductWithID:(id)arg1 bundleID:(id)arg2 ;
-(id)cancelTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 ;
-(id)changeAutoRenewStatus:(BOOL)arg1 transactionID:(unsigned long long)arg2 bundleID:(id)arg3 ;
-(id)clearOverridesForBundleID:(id)arg1 ;
-(id)completeAskToBuyRequestWithResponse:(BOOL)arg1 transactionID:(unsigned long long)arg2 forBundleID:(id)arg3 ;
-(id)deleteAllTransactionsForBundleID:(id)arg1 ;
-(id)deleteTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 ;
-(id)expireOrRenewSubscriptionWithIdentifier:(id)arg1 expire:(BOOL)arg2 forBundleID:(id)arg3 ;
-(id)getStorefrontForBundleID:(id)arg1 ;
-(id)getTransactionDataForBundleID:(id)arg1 ;
-(id)refundTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 ;
-(id)resolveIssueForTransactionWithIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 ;
-(id)setStorefront:(id)arg1 forBundleID:(id)arg2 ;
-(void)useConfigurationDirectory:(id)arg1 forBundleID:(id)arg2 ;
-(long long)getIntegerValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 ;
-(id)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3 ;
-(id)getStringValueForIdentifier:(unsigned long long)arg1 forBundleID:(id)arg2 ;
-(id)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 forBundleID:(id)arg3 ;
@end

