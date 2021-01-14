/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@class CKRecordID, NSArray;

@interface CKDUpdateMissingAssetStatusOperationInfo : CKDatabaseOperationInfo {

	BOOL _recovered;
	BOOL _isPackage;
	CKRecordID* _repairRecordID;
	NSArray* _assetSizes;
	NSArray* _assetPutReceipts;

}

@property (nonatomic,retain) CKRecordID * repairRecordID;              //@synthesize repairRecordID=_repairRecordID - In the implementation block
@property (assign,nonatomic) BOOL recovered;                           //@synthesize recovered=_recovered - In the implementation block
@property (assign,nonatomic) BOOL isPackage;                           //@synthesize isPackage=_isPackage - In the implementation block
@property (nonatomic,retain) NSArray * assetSizes;                     //@synthesize assetSizes=_assetSizes - In the implementation block
@property (nonatomic,retain) NSArray * assetPutReceipts;               //@synthesize assetPutReceipts=_assetPutReceipts - In the implementation block
-(BOOL)isPackage;
-(NSArray *)assetSizes;
-(void)setAssetSizes:(NSArray *)arg1 ;
-(CKRecordID *)repairRecordID;
-(void)setRepairRecordID:(CKRecordID *)arg1 ;
-(void)setRecovered:(BOOL)arg1 ;
-(BOOL)recovered;
-(void)setIsPackage:(BOOL)arg1 ;
-(NSArray *)assetPutReceipts;
-(void)setAssetPutReceipts:(NSArray *)arg1 ;
@end

