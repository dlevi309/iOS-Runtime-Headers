/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)assetSizes;
-(void)setAssetSizes:(NSArray *)arg1 ;
-(CKRecordID *)repairRecordID;
-(void)setRepairRecordID:(CKRecordID *)arg1 ;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setRecovered:(BOOL)arg1 ;
-(BOOL)recovered;
-(void)setIsPackage:(BOOL)arg1 ;
-(NSArray *)assetPutReceipts;
-(void)setAssetPutReceipts:(NSArray *)arg1 ;
-(id)initWithOperation:(id)arg1 unrecoveredRepairRecordID:(id)arg2 ;
-(id)initWithOperation:(id)arg1 recoveredAssetRepairRecordID:(id)arg2 size:(unsigned long long)arg3 putReceipt:(id)arg4 ;
-(id)initWithOperation:(id)arg1 recoveredPackageRepairRecordID:(id)arg2 sizes:(id)arg3 putReceipts:(id)arg4 ;
-(id)initWithOperation:(id)arg1 repairRecordID:(id)arg2 recovered:(BOOL)arg3 package:(BOOL)arg4 sizes:(id)arg5 putReceipts:(id)arg6 ;
@end

