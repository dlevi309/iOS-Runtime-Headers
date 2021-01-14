/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_metricContainerForMetricType:(unsigned)arg1 ;
-(void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2 ;
-(void)dealloc;
-(BOOL)shouldSubmit;
-(void)duplicateMessageEncounted;
@end

