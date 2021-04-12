/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NTKJetsamInfoFetcher;

@interface NTKJetsamMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _monitorQ;
	NSObject*<OS_dispatch_source> _monitorTimer;
	int _transactionCount;
	NTKJetsamInfoFetcher* _fetcher;

}
+(id)sharedJetsamMonitor;
-(id)init;
-(void)incrementTransactionCount;
-(void)decrementTransactionCount;
@end

