/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

