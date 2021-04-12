/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, CKRecordZone, CKAggregateZonePCSOperationInfo;

@interface CKAggregateZonePCSOperation : CKDatabaseOperation {

	/*^block*/id _aggregateZonePCSCompletionBlock;
	NSArray* _sourceZoneIDs;
	CKRecordZone* _targetZone;

}

@property (nonatomic,readonly) CKAggregateZonePCSOperationInfo * operationInfo; 
@property (nonatomic,copy) NSArray * sourceZoneIDs;                                          //@synthesize sourceZoneIDs=_sourceZoneIDs - In the implementation block
@property (nonatomic,copy) CKRecordZone * targetZone;                                        //@synthesize targetZone=_targetZone - In the implementation block
@property (nonatomic,copy) id aggregateZonePCSCompletionBlock;                               //@synthesize aggregateZonePCSCompletionBlock=_aggregateZonePCSCompletionBlock - In the implementation block
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(void)performCKOperation;
-(id)init;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(CKRecordZone *)targetZone;
-(NSArray *)sourceZoneIDs;
-(void)setSourceZoneIDs:(NSArray *)arg1 ;
-(void)setTargetZone:(CKRecordZone *)arg1 ;
-(id)aggregateZonePCSCompletionBlock;
-(void)setAggregateZonePCSCompletionBlock:(id)arg1 ;
-(id)initWithSourceZoneIDs:(id)arg1 targetZone:(id)arg2 ;
-(void)fillOutOperationInfo:(id)arg1 ;
@end

