/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@interface PKDemoTransactionGenerator : NSObject
+(void)generateDemoFilesForPasses:(id)arg1 peerPaymentPassSerialNumber:(id)arg2 ;
+(void)generateDemoFiles;
+(void)demoTransactionsAndEventsForPass:(id)arg1 transactions:(id*)arg2 events:(id*)arg3 ;
+(void)demoTransactionsForPass:(id)arg1 merchantName:(id)arg2 personName:(id)arg3 transactionCount:(long long)arg4 transactions:(id*)arg5 events:(id*)arg6 ;
+(id)allMerchants;
+(id)allPeople;
@end

