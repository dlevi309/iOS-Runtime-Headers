/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKCodeRecordTransport;

@interface PFLFetchPatchResponse : PBCodable <NSCopying> {

	long long _modelVersion;
	CKCodeRecordTransport* _patchAsset;
	SCD_Struct_PF4 _has;

}

@property (assign,nonatomic) BOOL hasModelVersion; 
@property (assign,nonatomic) long long modelVersion;                          //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasPatchAsset; 
@property (nonatomic,retain) CKCodeRecordTransport * patchAsset;              //@synthesize patchAsset=_patchAsset - In the implementation block
-(id)dictionaryRepresentation;
-(long long)modelVersion;
-(BOOL)hasModelVersion;
-(void)setHasModelVersion:(BOOL)arg1 ;
-(void)setModelVersion:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPatchAsset:(CKCodeRecordTransport *)arg1 ;
-(BOOL)hasPatchAsset;
-(CKCodeRecordTransport *)patchAsset;
@end

