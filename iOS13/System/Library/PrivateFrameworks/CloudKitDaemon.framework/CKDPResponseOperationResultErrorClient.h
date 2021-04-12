/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPOplockFailure, CKDPUniqueFieldFailure;

@interface CKDPResponseOperationResultErrorClient : PBCodable <NSCopying> {

	CKDPOplockFailure* _oplockFailure;
	int _type;
	CKDPUniqueFieldFailure* _uniqueFieldFailure;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasOplockFailure; 
@property (nonatomic,retain) CKDPOplockFailure * oplockFailure; 
@property (nonatomic,readonly) BOOL hasUniqueFieldFailure; 
@property (nonatomic,retain) CKDPUniqueFieldFailure * uniqueFieldFailure; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                 //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setOplockFailure:(CKDPOplockFailure *)arg1 ;
-(void)setUniqueFieldFailure:(CKDPUniqueFieldFailure *)arg1 ;
-(BOOL)hasOplockFailure;
-(CKDPOplockFailure *)oplockFailure;
-(BOOL)hasUniqueFieldFailure;
-(CKDPUniqueFieldFailure *)uniqueFieldFailure;
-(id)_typeCKLogValue;
@end

