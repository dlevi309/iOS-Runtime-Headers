/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NRPBCompressedData : PBCodable <NSCopying> {

	NSData* _possiblyCompressedData;
	BOOL _compressed;
	SCD_Struct_NR2 _has;

}

@property (assign,nonatomic) BOOL hasCompressed; 
@property (assign,nonatomic) BOOL compressed;                               //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,readonly) BOOL hasPossiblyCompressedData; 
@property (nonatomic,retain) NSData * possiblyCompressedData;               //@synthesize possiblyCompressedData=_possiblyCompressedData - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)compressed;
-(BOOL)hasPossiblyCompressedData;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCompressed:(BOOL)arg1 ;
-(BOOL)hasCompressed;
-(id)description;
-(void)setCompressed:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPossiblyCompressedData:(NSData *)arg1 ;
-(NSData *)possiblyCompressedData;
@end

