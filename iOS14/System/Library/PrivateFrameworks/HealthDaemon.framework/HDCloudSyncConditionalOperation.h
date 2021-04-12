/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncOperation;

@interface HDCloudSyncConditionalOperation : HDCloudSyncOperation {

	HDCloudSyncOperation* _operation;
	/*^block*/id _shouldRunHandler;

}

@property (retain) HDCloudSyncOperation * operation;              //@synthesize operation=_operation - In the implementation block
@property (copy) id shouldRunHandler;                             //@synthesize shouldRunHandler=_shouldRunHandler - In the implementation block
+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
-(void)setOperation:(HDCloudSyncOperation *)arg1 ;
-(HDCloudSyncOperation *)operation;
-(id)description;
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 operation:(id)arg3 shouldRunHandler:(/*^block*/id)arg4 ;
-(void)setShouldRunHandler:(id)arg1 ;
-(id)shouldRunHandler;
@end

