/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface CCVegaTransaction : NSObject {

	int _status;
	NSHashTable* _scheduledRenderers;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)singleton;
-(void)commit;
-(void)begin;
-(id)init;
-(void)_commitTransactionForRenderers:(id)arg1 ;
-(void)scheduleDisplay:(id)arg1 ;
@end

