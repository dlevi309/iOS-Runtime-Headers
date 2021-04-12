/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSError;

@interface CKFetchRecordZonesOperation : CKDatabaseOperation {

	BOOL _isFetchAllRecordZonesOperation;
	BOOL _ignorePCSFailures;
	/*^block*/id _fetchRecordZonesCompletionBlock;
	NSArray* _recordZoneIDs;
	NSArray* _recordZones;
	NSMutableDictionary* _recordZonesByZoneID;
	NSMutableDictionary* _recordZoneErrors;
	NSError* _fetchAllRecordZonesError;

}

@property (nonatomic,retain) NSArray * recordZones;                                  //@synthesize recordZones=_recordZones - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZonesByZoneID;              //@synthesize recordZonesByZoneID=_recordZonesByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneErrors;                 //@synthesize recordZoneErrors=_recordZoneErrors - In the implementation block
@property (nonatomic,retain) NSError * fetchAllRecordZonesError;                     //@synthesize fetchAllRecordZonesError=_fetchAllRecordZonesError - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllRecordZonesOperation;                    //@synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation - In the implementation block
@property (assign,nonatomic) BOOL ignorePCSFailures;                                 //@synthesize ignorePCSFailures=_ignorePCSFailures - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDs;                                  //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) id fetchRecordZonesCompletionBlock;                       //@synthesize fetchRecordZonesCompletionBlock=_fetchRecordZonesCompletionBlock - In the implementation block
+(id)fetchAllRecordZonesOperation;
-(id)init;
-(void)setFetchRecordZonesCompletionBlock:(id)arg1 ;
-(NSArray *)recordZones;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)recordZoneErrors;
-(void)setRecordZoneErrors:(NSMutableDictionary *)arg1 ;
-(void)setIsFetchAllRecordZonesOperation:(BOOL)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(BOOL)isFetchAllRecordZonesOperation;
-(BOOL)ignorePCSFailures;
-(void)setIgnorePCSFailures:(BOOL)arg1 ;
-(id)fetchRecordZonesCompletionBlock;
-(void)setFetchAllRecordZonesError:(NSError *)arg1 ;
-(NSMutableDictionary *)recordZonesByZoneID;
-(NSError *)fetchAllRecordZonesError;
-(id)initWithRecordZoneIDs:(id)arg1 ;
-(void)setRecordZones:(NSArray *)arg1 ;
-(void)setRecordZonesByZoneID:(NSMutableDictionary *)arg1 ;
@end

