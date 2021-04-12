/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData : PBCodable <NSCopying> {

	BOOL _isBundleChannel;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasIsBundleChannel; 
@property (assign,nonatomic) BOOL isBundleChannel;                 //@synthesize isBundleChannel=_isBundleChannel - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIsBundleChannel:(BOOL)arg1 ;
-(void)setHasIsBundleChannel:(BOOL)arg1 ;
-(BOOL)hasIsBundleChannel;
-(BOOL)isBundleChannel;
@end

