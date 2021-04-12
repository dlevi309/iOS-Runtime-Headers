/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMetadata:(CKUploadRequestMetadata *)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(BOOL)writeRepairRecord;
-(void)setWriteRepairRecord:(BOOL)arg1 ;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(CKUploadRequestMetadata *)metadata;
-(id)initWithOperation:(id)arg1 assetOrPackageMetadata:(id)arg2 writeRepairRecord:(BOOL)arg3 ;
-(void)setAssetBrokenBlock:(id)arg1 ;
-(id)assetBrokenBlock;
@end

