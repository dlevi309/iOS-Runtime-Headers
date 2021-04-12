/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class CKRecordID, NSString, CKUploadRequestConfiguration;

@interface CKMarkAssetBrokenOperation : CKDatabaseOperation {

	BOOL _touchRepairZone;
	BOOL _bypassPCSEncryptionForTouchRepairZone;
	BOOL _simulateCorruptAsset;
	BOOL _writeRepairRecord;
	/*^block*/id _markAssetBrokenCompletionBlock;
	CKRecordID* _recordID;
	NSString* _field;
	long long _listIndex;
	CKRecordID* _repairRecordID;
	CKUploadRequestConfiguration* _uploadRequestConfiguration;

}

@property (nonatomic,retain) CKRecordID * recordID;                                                                 //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * field;                                                                      //@synthesize field=_field - In the implementation block
@property (assign,nonatomic) long long listIndex;                                                                   //@synthesize listIndex=_listIndex - In the implementation block
@property (nonatomic,retain) CKRecordID * repairRecordID;                                                           //@synthesize repairRecordID=_repairRecordID - In the implementation block
@property (nonatomic,copy) CKUploadRequestConfiguration * uploadRequestConfiguration;                               //@synthesize uploadRequestConfiguration=_uploadRequestConfiguration - In the implementation block
@property (nonatomic,copy,readonly) CKUploadRequestConfiguration * resolvedUploadRequestConfiguration; 
@property (nonatomic,copy) id markAssetBrokenCompletionBlock;                                                       //@synthesize markAssetBrokenCompletionBlock=_markAssetBrokenCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL touchRepairZone;                                                                  //@synthesize touchRepairZone=_touchRepairZone - In the implementation block
@property (assign,nonatomic) BOOL bypassPCSEncryptionForTouchRepairZone;                                            //@synthesize bypassPCSEncryptionForTouchRepairZone=_bypassPCSEncryptionForTouchRepairZone - In the implementation block
@property (assign,nonatomic) BOOL simulateCorruptAsset;                                                             //@synthesize simulateCorruptAsset=_simulateCorruptAsset - In the implementation block
@property (assign,nonatomic) BOOL writeRepairRecord;                                                                //@synthesize writeRepairRecord=_writeRepairRecord - In the implementation block
-(CKRecordID *)recordID;
-(NSString *)field;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKUploadRequestConfiguration *)uploadRequestConfiguration;
-(CKUploadRequestConfiguration *)resolvedUploadRequestConfiguration;
-(void)setUploadRequestConfiguration:(CKUploadRequestConfiguration *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(long long)listIndex;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(void)setListIndex:(long long)arg1 ;
-(id)initWithRecordID:(id)arg1 field:(id)arg2 ;
-(void)setTouchRepairZone:(BOOL)arg1 ;
-(id)initWithRecordID:(id)arg1 field:(id)arg2 listIndex:(long long)arg3 ;
-(void)setField:(NSString *)arg1 ;
-(BOOL)touchRepairZone;
-(BOOL)simulateCorruptAsset;
-(void)setSimulateCorruptAsset:(BOOL)arg1 ;
-(BOOL)bypassPCSEncryptionForTouchRepairZone;
-(void)setBypassPCSEncryptionForTouchRepairZone:(BOOL)arg1 ;
-(BOOL)writeRepairRecord;
-(void)setWriteRepairRecord:(BOOL)arg1 ;
-(id)markAssetBrokenCompletionBlock;
-(void)setRepairRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)repairRecordID;
-(void)setMarkAssetBrokenCompletionBlock:(id)arg1 ;
-(id)initWithNoRecord;
@end

