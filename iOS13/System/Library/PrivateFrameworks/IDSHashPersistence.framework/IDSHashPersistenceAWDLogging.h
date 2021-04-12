/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSHashPersistence.framework/IDSHashPersistence
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection;

@interface IDSHashPersistenceAWDLogging : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AWDServerConnection* _AWDServerConnection;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_metricContainerForMetricType:(unsigned)arg1 ;
-(void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2 ;
-(BOOL)shouldSubmit;
-(void)duplicateMessageEncounted;
@end

