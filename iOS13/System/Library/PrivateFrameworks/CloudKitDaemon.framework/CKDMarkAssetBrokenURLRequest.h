/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKUploadRequestMetadata;

@interface CKDMarkAssetBrokenURLRequest : CKDURLRequest {

	BOOL _writeRepairRecord;
	/*^block*/id _assetBrokenBlock;
	CKUploadRequestMetadata* _metadata;

}

@property (nonatomic,copy) CKUploadRequestMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL writeRepairRecord;                        //@synthesize writeRepairRecord=_writeRepairRecord - In the implementation block
@property (nonatomic,copy) id assetBrokenBlock;                             //@synthesize assetBrokenBlock=_assetBrokenBlock - In the implementation block
-(int)operationType;
-(void)setMetadata:(CKUploadRequestMetadata *)arg1 ;
-(CKUploadRequestMetadata *)metadata;
-(BOOL)writeRepairRecord;
-(void)setWriteRepairRecord:(BOOL)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)initWithAssetOrPackageMetadata:(id)arg1 writeRepairRecord:(BOOL)arg2 ;
-(void)setAssetBrokenBlock:(id)arg1 ;
-(id)assetBrokenBlock;
@end

