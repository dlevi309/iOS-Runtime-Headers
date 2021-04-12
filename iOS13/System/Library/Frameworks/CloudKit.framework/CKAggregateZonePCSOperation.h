/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, CKRecordZone;

@interface CKAggregateZonePCSOperation : CKDatabaseOperation {

	/*^block*/id _aggregateZonePCSCompletionBlock;
	NSArray* _sourceZoneIDs;
	CKRecordZone* _targetZone;

}

@property (nonatomic,copy) NSArray * sourceZoneIDs;                         //@synthesize sourceZoneIDs=_sourceZoneIDs - In the implementation block
@property (nonatomic,copy) CKRecordZone * targetZone;                       //@synthesize targetZone=_targetZone - In the implementation block
@property (nonatomic,copy) id aggregateZonePCSCompletionBlock;              //@synthesize aggregateZonePCSCompletionBlock=_aggregateZonePCSCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(NSArray *)sourceZoneIDs;
-(void)setSourceZoneIDs:(NSArray *)arg1 ;
-(CKRecordZone *)targetZone;
-(void)setTargetZone:(CKRecordZone *)arg1 ;
-(id)aggregateZonePCSCompletionBlock;
-(void)setAggregateZonePCSCompletionBlock:(id)arg1 ;
-(id)initWithSourceZoneIDs:(id)arg1 targetZone:(id)arg2 ;
@end

