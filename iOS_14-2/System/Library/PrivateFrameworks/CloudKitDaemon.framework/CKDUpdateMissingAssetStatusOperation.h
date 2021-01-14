/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKRecordID, NSArray, CKDFetchRecordsOperation, CKDModifyRecordsOperation, CKRecord;

@interface CKDUpdateMissingAssetStatusOperation : CKDDatabaseOperation {

	BOOL _recovered;
	BOOL _isPackage;
	CKRecordID* _repairRecordID;
	NSArray* _assetSizes;
	NSArray* _assetPutReceipts;
	CKDFetchRecordsOperation* _fetchOperation;
	CKDModifyRecordsOperation* _modifyOperation;
	CKRecord* _record;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) CKRecordID * repairRecordID;                              //@synthesize repairRecordID=_repairRecordID - In the implementation block
@property (assign,nonatomic) BOOL recovered;                                           //@synthesize recovered=_recovered - In the implementation block
@property (assign,nonatomic) BOOL isPackage;                                           //@synthesize isPackage=_isPackage - In the implementation block
@property (nonatomic,retain) NSArray * assetSizes;                                     //@synthesize assetSizes=_assetSizes - In the implementation block
@property (nonatomic,retain) NSArray * assetPutReceipts;                               //@synthesize assetPutReceipts=_assetPutReceipts - In the implementation block
@property (nonatomic,retain) CKDFetchRecordsOperation * fetchOperation;                //@synthesize fetchOperation=_fetchOperation - In the implementation block
@property (nonatomic,retain) CKDModifyRecordsOperation * modifyOperation;              //@synthesize modifyOperation=_modifyOperation - In the implementation block
@property (nonatomic,retain) CKRecord * record;                                        //@synthesize record=_record - In the implementation block
-(CKRecord *)record;
-(int)operationType;
-(id)activityCreate;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)isPackage;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setRecord:(CKRecord *)arg1 ;
-(void)main;
-(CKDFetchRecordsOperation *)fetchOperation;
-(void)setFetchOperation:(CKDFetchRecordsOperation *)arg1 ;
-(NSArray *)assetSizes;
-(void)setAssetSizes:(NSArray *)arg1 ;
-(CKRecordID *)repairRecordID;
-(void)setRepairRecordID:(CKRecordID *)arg1 ;
-(BOOL)makeStateTransition;
-(void)setRecovered:(BOOL)arg1 ;
-(BOOL)recovered;
-(void)setIsPackage:(BOOL)arg1 ;
-(NSArray *)assetPutReceipts;
-(void)setAssetPutReceipts:(NSArray *)arg1 ;
-(void)_updateMissingAssetStatus;
-(CKDModifyRecordsOperation *)modifyOperation;
-(void)setModifyOperation:(CKDModifyRecordsOperation *)arg1 ;
@end

