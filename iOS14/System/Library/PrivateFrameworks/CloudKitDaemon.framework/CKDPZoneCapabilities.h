/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CKDPZoneCapabilities : PBCodable <NSCopying> {

	int _sharingType;
	BOOL _atomicSaves;
	BOOL _ckql;
	BOOL _fetchChanges;
	BOOL _hierarchicalSharing;
	BOOL _zoneSharing;
	SCD_Struct_CK26 _has;

}

@property (assign,nonatomic) BOOL hasAtomicSaves; 
@property (assign,nonatomic) BOOL atomicSaves;                         //@synthesize atomicSaves=_atomicSaves - In the implementation block
@property (assign,nonatomic) BOOL hasFetchChanges; 
@property (assign,nonatomic) BOOL fetchChanges;                        //@synthesize fetchChanges=_fetchChanges - In the implementation block
@property (assign,nonatomic) BOOL hasCkql; 
@property (assign,nonatomic) BOOL ckql;                                //@synthesize ckql=_ckql - In the implementation block
@property (assign,nonatomic) BOOL hasSharingType; 
@property (assign,nonatomic) int sharingType;                          //@synthesize sharingType=_sharingType - In the implementation block
@property (assign,nonatomic) BOOL hasZoneSharing; 
@property (assign,nonatomic) BOOL zoneSharing;                         //@synthesize zoneSharing=_zoneSharing - In the implementation block
@property (assign,nonatomic) BOOL hasHierarchicalSharing; 
@property (assign,nonatomic) BOOL hierarchicalSharing;                 //@synthesize hierarchicalSharing=_hierarchicalSharing - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)ckql;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasCkql;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)fetchChanges;
-(void)setFetchChanges:(BOOL)arg1 ;
-(void)setAtomicSaves:(BOOL)arg1 ;
-(void)setHasAtomicSaves:(BOOL)arg1 ;
-(BOOL)hasAtomicSaves;
-(void)setHasFetchChanges:(BOOL)arg1 ;
-(BOOL)hasFetchChanges;
-(void)setCkql:(BOOL)arg1 ;
-(void)setHasCkql:(BOOL)arg1 ;
-(int)sharingType;
-(void)setSharingType:(int)arg1 ;
-(void)setHasSharingType:(BOOL)arg1 ;
-(BOOL)hasSharingType;
-(id)sharingTypeAsString:(int)arg1 ;
-(int)StringAsSharingType:(id)arg1 ;
-(void)setZoneSharing:(BOOL)arg1 ;
-(void)setHasZoneSharing:(BOOL)arg1 ;
-(BOOL)hasZoneSharing;
-(void)setHierarchicalSharing:(BOOL)arg1 ;
-(void)setHasHierarchicalSharing:(BOOL)arg1 ;
-(BOOL)hasHierarchicalSharing;
-(BOOL)atomicSaves;
-(BOOL)zoneSharing;
-(BOOL)hierarchicalSharing;
@end

