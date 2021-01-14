/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKMarkAssetBrokenOperationCallbacks.h>

@class CKRecordID, NSString, CKUploadRequestConfiguration, CKMarkAssetBrokenOperationInfo;

@interface CKMarkAssetBrokenOperation : CKDatabaseOperation <CKMarkAssetBrokenOperationCallbacks> {

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
@property (nonatomic,readonly) id<CKMarkAssetBrokenOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKMarkAssetBrokenOperationInfo * operationInfo; 
@property (nonatomic,copy) CKUploadRequestConfiguration * uploadRequestConfiguration;                               //@synthesize uploadRequestConfiguration=_uploadRequestConfiguration - In the implementation block
@property (nonatomic,copy,readonly) CKUploadRequestConfiguration * resolvedUploadRequestConfiguration; 
@property (nonatomic,copy) id markAssetBrokenCompletionBlock;                                                       //@synthesize markAssetBrokenCompletionBlock=_markAssetBrokenCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL touchRepairZone;                                                                  //@synthesize touchRepairZone=_touchRepairZone - In the implementation block
@property (assign,nonatomic) BOOL bypassPCSEncryptionForTouchRepairZone;                                            //@synthesize bypassPCSEncryptionForTouchRepairZone=_bypassPCSEncryptionForTouchRepairZone - In the implementation block
@property (assign,nonatomic) BOOL simulateCorruptAsset;                                                             //@synthesize simulateCorruptAsset=_simulateCorruptAsset - In the implementation block
@property (assign,nonatomic) BOOL writeRepairRecord;                                                                //@synthesize writeRepairRecord=_writeRepairRecord - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(NSString *)field;
-(void)setListIndex:(long long)arg1 ;
-(void)setUploadRequestConfiguration:(CKUploadRequestConfiguration *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(void)performCKOperation;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(long long)listIndex;
-(CKUploadRequestConfiguration *)resolvedUploadRequestConfiguration;
-(CKRecordID *)repairRecordID;
-(id)initWithRecordID:(id)arg1 field:(id)arg2 ;
-(void)setTouchRepairZone:(BOOL)arg1 ;
-(id)initWithRecordID:(id)arg1 field:(id)arg2 listIndex:(long long)arg3 ;
-(BOOL)touchRepairZone;
-(BOOL)simulateCorruptAsset;
-(void)setSimulateCorruptAsset:(BOOL)arg1 ;
-(BOOL)bypassPCSEncryptionForTouchRepairZone;
-(BOOL)writeRepairRecord;
-(void)setBypassPCSEncryptionForTouchRepairZone:(BOOL)arg1 ;
-(void)setWriteRepairRecord:(BOOL)arg1 ;
-(void)setRepairRecordID:(CKRecordID *)arg1 ;
-(id)markAssetBrokenCompletionBlock;
-(void)setMarkAssetBrokenCompletionBlock:(id)arg1 ;
-(id)initWithNoRecord;
-(void)handleMarkAssetBrokenCompletionWithRepairRecordID:(id)arg1 error:(id)arg2 ;
-(void)setField:(NSString *)arg1 ;
-(CKUploadRequestConfiguration *)uploadRequestConfiguration;
-(CKRecordID *)recordID;
@end

