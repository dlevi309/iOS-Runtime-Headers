/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPRecordIdentifier, NSMutableArray;

@interface CKDPMarkAssetBrokenRequest : PBRequest <NSCopying> {

	NSString* _affectedRecordType;
	CKDPRecordIdentifier* _brokenAssetRecordID;
	NSString* _fieldName;
	NSMutableArray* _fileSignatures;
	int _listIndex;
	NSMutableArray* _referenceSignatures;
	BOOL _isPackage;
	BOOL _skipWriteMissingAssetStatusRecord;
	SCD_Struct_CK16 _has;

}

@property (nonatomic,readonly) BOOL hasBrokenAssetRecordID; 
@property (nonatomic,retain) CKDPRecordIdentifier * brokenAssetRecordID;              //@synthesize brokenAssetRecordID=_brokenAssetRecordID - In the implementation block
@property (nonatomic,readonly) BOOL hasFieldName; 
@property (nonatomic,retain) NSString * fieldName;                                    //@synthesize fieldName=_fieldName - In the implementation block
@property (assign,nonatomic) BOOL hasListIndex; 
@property (assign,nonatomic) int listIndex;                                           //@synthesize listIndex=_listIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * fileSignatures;                         //@synthesize fileSignatures=_fileSignatures - In the implementation block
@property (nonatomic,retain) NSMutableArray * referenceSignatures;                    //@synthesize referenceSignatures=_referenceSignatures - In the implementation block
@property (assign,nonatomic) BOOL hasIsPackage; 
@property (assign,nonatomic) BOOL isPackage;                                          //@synthesize isPackage=_isPackage - In the implementation block
@property (nonatomic,readonly) BOOL hasAffectedRecordType; 
@property (nonatomic,retain) NSString * affectedRecordType;                           //@synthesize affectedRecordType=_affectedRecordType - In the implementation block
@property (assign,nonatomic) BOOL hasSkipWriteMissingAssetStatusRecord; 
@property (assign,nonatomic) BOOL skipWriteMissingAssetStatusRecord;                  //@synthesize skipWriteMissingAssetStatusRecord=_skipWriteMissingAssetStatusRecord - In the implementation block
+(id)options;
+(Class)fileSignatureType;
+(Class)referenceSignatureType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)isPackage;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)fieldName;
-(int)listIndex;
-(void)setListIndex:(int)arg1 ;
-(NSMutableArray *)fileSignatures;
-(NSMutableArray *)referenceSignatures;
-(void)setFieldName:(NSString *)arg1 ;
-(BOOL)hasFieldName;
-(void)setIsPackage:(BOOL)arg1 ;
-(void)addFileSignature:(id)arg1 ;
-(void)addReferenceSignature:(id)arg1 ;
-(void)setBrokenAssetRecordID:(CKDPRecordIdentifier *)arg1 ;
-(unsigned long long)fileSignaturesCount;
-(void)clearFileSignatures;
-(id)fileSignatureAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)referenceSignaturesCount;
-(void)clearReferenceSignatures;
-(id)referenceSignatureAtIndex:(unsigned long long)arg1 ;
-(void)setAffectedRecordType:(NSString *)arg1 ;
-(BOOL)hasBrokenAssetRecordID;
-(void)setHasListIndex:(BOOL)arg1 ;
-(BOOL)hasListIndex;
-(void)setHasIsPackage:(BOOL)arg1 ;
-(BOOL)hasIsPackage;
-(BOOL)hasAffectedRecordType;
-(void)setSkipWriteMissingAssetStatusRecord:(BOOL)arg1 ;
-(void)setHasSkipWriteMissingAssetStatusRecord:(BOOL)arg1 ;
-(BOOL)hasSkipWriteMissingAssetStatusRecord;
-(CKDPRecordIdentifier *)brokenAssetRecordID;
-(void)setFileSignatures:(NSMutableArray *)arg1 ;
-(void)setReferenceSignatures:(NSMutableArray *)arg1 ;
-(NSString *)affectedRecordType;
-(BOOL)skipWriteMissingAssetStatusRecord;
@end

