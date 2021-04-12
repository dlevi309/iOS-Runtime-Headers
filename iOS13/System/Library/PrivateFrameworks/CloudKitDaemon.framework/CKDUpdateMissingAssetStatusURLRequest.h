/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordID, NSArray;

@interface CKDUpdateMissingAssetStatusURLRequest : CKDURLRequest {

	BOOL _recovered;
	BOOL _isPackage;
	CKRecordID* _repairRecordID;
	NSArray* _assetSizes;
	NSArray* _assetPutReceipts;

}

@property (nonatomic,copy) CKRecordID * repairRecordID;               //@synthesize repairRecordID=_repairRecordID - In the implementation block
@property (assign,nonatomic) BOOL recovered;                          //@synthesize recovered=_recovered - In the implementation block
@property (assign,nonatomic) BOOL isPackage;                          //@synthesize isPackage=_isPackage - In the implementation block
@property (nonatomic,retain) NSArray * assetSizes;                    //@synthesize assetSizes=_assetSizes - In the implementation block
@property (nonatomic,retain) NSArray * assetPutReceipts;              //@synthesize assetPutReceipts=_assetPutReceipts - In the implementation block
-(BOOL)isPackage;
-(int)operationType;
-(void)setRepairRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)repairRecordID;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setRecovered:(BOOL)arg1 ;
-(BOOL)recovered;
-(void)setIsPackage:(BOOL)arg1 ;
-(NSArray *)assetSizes;
-(void)setAssetSizes:(NSArray *)arg1 ;
-(NSArray *)assetPutReceipts;
-(void)setAssetPutReceipts:(NSArray *)arg1 ;
-(id)initWithUnrecoveredRepairRecordID:(id)arg1 ;
-(id)initWithRecoveredAssetRepairRecordID:(id)arg1 size:(unsigned long long)arg2 putReceipt:(id)arg3 ;
-(id)initWithRecoveredPackageRepairRecordID:(id)arg1 sizes:(id)arg2 putReceipts:(id)arg3 ;
-(id)initWithRepairRecordID:(id)arg1 recovered:(BOOL)arg2 package:(BOOL)arg3 sizes:(id)arg4 putReceipts:(id)arg5 ;
@end

