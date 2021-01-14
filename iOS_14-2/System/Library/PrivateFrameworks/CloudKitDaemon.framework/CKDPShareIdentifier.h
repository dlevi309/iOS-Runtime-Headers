/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPIdentifier, CKDPRecordZoneIdentifier;

@interface CKDPShareIdentifier : PBCodable <NSCopying> {

	CKDPIdentifier* _value;
	CKDPRecordZoneIdentifier* _zoneIdentifier;

}

@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) CKDPIdentifier * value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(void)setValue:(CKDPIdentifier *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPIdentifier *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

