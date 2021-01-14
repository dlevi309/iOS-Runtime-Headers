/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPZone, NSString;

@interface CKDPZoneSaveRequest : PBRequest <NSCopying> {

	CKDPZone* _recordZone;
	NSString* _zoneProtectionInfoTag;

}

@property (nonatomic,readonly) BOOL hasRecordZone; 
@property (nonatomic,retain) CKDPZone * recordZone;                         //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneProtectionInfoTag; 
@property (nonatomic,retain) NSString * zoneProtectionInfoTag;              //@synthesize zoneProtectionInfoTag=_zoneProtectionInfoTag - In the implementation block
+(id)options;
-(id)dictionaryRepresentation;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(CKDPZone *)recordZone;
-(BOOL)hasRecordZone;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRecordZone:(CKDPZone *)arg1 ;
-(void)setZoneProtectionInfoTag:(NSString *)arg1 ;
-(BOOL)hasZoneProtectionInfoTag;
-(NSString *)zoneProtectionInfoTag;
@end

