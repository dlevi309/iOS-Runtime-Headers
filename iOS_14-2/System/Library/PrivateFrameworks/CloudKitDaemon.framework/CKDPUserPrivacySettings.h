/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPUserPrivacySettings : PBCodable <NSCopying> {

	BOOL _discoverable;
	SCD_Struct_CK1 _has;

}

@property (assign,nonatomic) BOOL hasDiscoverable; 
@property (assign,nonatomic) BOOL discoverable;                 //@synthesize discoverable=_discoverable - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)discoverable;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDiscoverable:(BOOL)arg1 ;
-(BOOL)hasDiscoverable;
-(void)setHasDiscoverable:(BOOL)arg1 ;
@end

