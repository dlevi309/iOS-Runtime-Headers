/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPUpdateMissingAssetStatusRequest : PBRequest <NSCopying> {

	SCD_Struct_CK19* _packageAssetSizes;
	long long _assetSize;
	NSString* _assetPutReceipt;
	CKDPRecordIdentifier* _missingAssetStatusRecordID;
	NSMutableArray* _packagePutReceipts;
	BOOL _recovered;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasMissingAssetStatusRecordID; 
@property (nonatomic,retain) CKDPRecordIdentifier * missingAssetStatusRecordID;              //@synthesize missingAssetStatusRecordID=_missingAssetStatusRecordID - In the implementation block
@property (assign,nonatomic) BOOL hasRecovered; 
@property (assign,nonatomic) BOOL recovered;                                                 //@synthesize recovered=_recovered - In the implementation block
@property (assign,nonatomic) BOOL hasAssetSize; 
@property (assign,nonatomic) long long assetSize;                                            //@synthesize assetSize=_assetSize - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetPutReceipt; 
@property (nonatomic,retain) NSString * assetPutReceipt;                                     //@synthesize assetPutReceipt=_assetPutReceipt - In the implementation block
@property (nonatomic,readonly) unsigned long long packageAssetSizesCount; 
@property (nonatomic,readonly) long long* packageAssetSizes; 
@property (nonatomic,retain) NSMutableArray * packagePutReceipts;                            //@synthesize packagePutReceipts=_packagePutReceipts - In the implementation block
+(id)options;
+(Class)packagePutReceiptsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(long long)assetSize;
-(void)setAssetSize:(long long)arg1 ;
-(void)addPackagePutReceipts:(id)arg1 ;
-(void)setMissingAssetStatusRecordID:(CKDPRecordIdentifier *)arg1 ;
-(void)setAssetPutReceipt:(NSString *)arg1 ;
-(unsigned long long)packageAssetSizesCount;
-(void)clearPackageAssetSizes;
-(long long)packageAssetSizeAtIndex:(unsigned long long)arg1 ;
-(void)addPackageAssetSize:(long long)arg1 ;
-(unsigned long long)packagePutReceiptsCount;
-(void)clearPackagePutReceipts;
-(id)packagePutReceiptsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMissingAssetStatusRecordID;
-(void)setRecovered:(BOOL)arg1 ;
-(void)setHasRecovered:(BOOL)arg1 ;
-(BOOL)hasRecovered;
-(void)setHasAssetSize:(BOOL)arg1 ;
-(BOOL)hasAssetSize;
-(BOOL)hasAssetPutReceipt;
-(long long*)packageAssetSizes;
-(void)setPackageAssetSizes:(long long*)arg1 count:(unsigned long long)arg2 ;
-(CKDPRecordIdentifier *)missingAssetStatusRecordID;
-(BOOL)recovered;
-(NSString *)assetPutReceipt;
-(NSMutableArray *)packagePutReceipts;
-(void)setPackagePutReceipts:(NSMutableArray *)arg1 ;
@end

