/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecordIdentifier;

@interface CKDPMarkAssetBrokenResponse : PBCodable <NSCopying> {

	CKDPRecordIdentifier* _missingAssetStatusRecord;

}

@property (nonatomic,readonly) BOOL hasMissingAssetStatusRecord; 
@property (nonatomic,retain) CKDPRecordIdentifier * missingAssetStatusRecord;              //@synthesize missingAssetStatusRecord=_missingAssetStatusRecord - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMissingAssetStatusRecord:(CKDPRecordIdentifier *)arg1 ;
-(BOOL)hasMissingAssetStatusRecord;
-(CKDPRecordIdentifier *)missingAssetStatusRecord;
@end

