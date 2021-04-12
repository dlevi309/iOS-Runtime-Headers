/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBChannelData : PBCodable <NSCopying> {

	BOOL _isBundleChannel;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasIsBundleChannel; 
@property (assign,nonatomic) BOOL isBundleChannel;                 //@synthesize isBundleChannel=_isBundleChannel - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasIsBundleChannel;
-(BOOL)isBundleChannel;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setIsBundleChannel:(BOOL)arg1 ;
-(void)setHasIsBundleChannel:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

