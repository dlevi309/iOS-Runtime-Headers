/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncOperation.h>

@class HDCloudSyncOperation;

@interface HDCloudSyncIgnoredErrorsOperation : HDCloudSyncOperation {

	HDCloudSyncOperation* _operation;

}

@property (retain) HDCloudSyncOperation * operation;              //@synthesize operation=_operation - In the implementation block
+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
+(BOOL)shouldLogAtOperationEnd;
-(void)setOperation:(HDCloudSyncOperation *)arg1 ;
-(HDCloudSyncOperation *)operation;
-(id)description;
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 operation:(id)arg3 ;
@end

