/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPZoneCapabilities;

@interface CKDPZoneSaveResponse : PBCodable <NSCopying> {

	CKDPZoneCapabilities* _capabilities;

}

@property (nonatomic,readonly) BOOL hasCapabilities; 
@property (nonatomic,retain) CKDPZoneCapabilities * capabilities;              //@synthesize capabilities=_capabilities - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CKDPZoneCapabilities *)capabilities;
-(void)setCapabilities:(CKDPZoneCapabilities *)arg1 ;
-(BOOL)hasCapabilities;
@end

