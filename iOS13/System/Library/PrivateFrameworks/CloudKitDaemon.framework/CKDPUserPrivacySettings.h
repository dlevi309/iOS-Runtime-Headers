/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDiscoverable:(BOOL)arg1 ;
-(BOOL)discoverable;
-(BOOL)hasDiscoverable;
-(void)setHasDiscoverable:(BOOL)arg1 ;
@end

