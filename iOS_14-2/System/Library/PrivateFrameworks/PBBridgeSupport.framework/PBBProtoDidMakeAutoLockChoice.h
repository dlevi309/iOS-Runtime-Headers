/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoDidMakeAutoLockChoice : PBCodable <NSCopying> {

	BOOL _accept;
	SCD_Struct_PB2 _has;

}

@property (assign,nonatomic) BOOL hasAccept; 
@property (assign,nonatomic) BOOL accept;                 //@synthesize accept=_accept - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)accept;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAccept:(BOOL)arg1 ;
-(void)setHasAccept:(BOOL)arg1 ;
-(BOOL)hasAccept;
@end

