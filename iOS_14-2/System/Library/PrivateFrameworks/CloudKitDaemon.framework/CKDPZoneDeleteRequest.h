/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPDate, CKDPRecordZoneIdentifier;

@interface CKDPZoneDeleteRequest : PBRequest <NSCopying> {

	CKDPDate* _lastMissingManateeIdentityErrorDate;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _userPurge;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;                   //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasUserPurge; 
@property (assign,nonatomic) BOOL userPurge;                                              //@synthesize userPurge=_userPurge - In the implementation block
@property (nonatomic,readonly) BOOL hasLastMissingManateeIdentityErrorDate; 
@property (nonatomic,retain) CKDPDate * lastMissingManateeIdentityErrorDate;              //@synthesize lastMissingManateeIdentityErrorDate=_lastMissingManateeIdentityErrorDate - In the implementation block
+(id)options;
-(id)dictionaryRepresentation;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(Class)responseClass;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLastMissingManateeIdentityErrorDate:(CKDPDate *)arg1 ;
-(void)setUserPurge:(BOOL)arg1 ;
-(void)setHasUserPurge:(BOOL)arg1 ;
-(BOOL)hasUserPurge;
-(BOOL)hasLastMissingManateeIdentityErrorDate;
-(BOOL)userPurge;
-(CKDPDate *)lastMissingManateeIdentityErrorDate;
@end

