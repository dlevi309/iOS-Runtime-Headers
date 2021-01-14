/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitPresenceRegion : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _numPresenceAuthUsers;
	unsigned _numPresenceRegionValidUsers;
	unsigned _numUsers;
	BOOL _primaryResident;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumUsers; 
@property (assign,nonatomic) unsigned numUsers;                                 //@synthesize numUsers=_numUsers - In the implementation block
@property (assign,nonatomic) BOOL hasNumPresenceAuthUsers; 
@property (assign,nonatomic) unsigned numPresenceAuthUsers;                     //@synthesize numPresenceAuthUsers=_numPresenceAuthUsers - In the implementation block
@property (assign,nonatomic) BOOL hasNumPresenceRegionValidUsers; 
@property (assign,nonatomic) unsigned numPresenceRegionValidUsers;              //@synthesize numPresenceRegionValidUsers=_numPresenceRegionValidUsers - In the implementation block
@property (assign,nonatomic) BOOL hasPrimaryResident; 
@property (assign,nonatomic) BOOL primaryResident;                              //@synthesize primaryResident=_primaryResident - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNumUsers:(unsigned)arg1 ;
-(void)setNumPresenceAuthUsers:(unsigned)arg1 ;
-(void)setNumPresenceRegionValidUsers:(unsigned)arg1 ;
-(unsigned)numPresenceAuthUsers;
-(unsigned)numPresenceRegionValidUsers;
-(void)setPrimaryResident:(BOOL)arg1 ;
-(void)setHasNumUsers:(BOOL)arg1 ;
-(BOOL)hasNumUsers;
-(void)setHasNumPresenceAuthUsers:(BOOL)arg1 ;
-(BOOL)hasNumPresenceAuthUsers;
-(void)setHasNumPresenceRegionValidUsers:(BOOL)arg1 ;
-(BOOL)hasNumPresenceRegionValidUsers;
-(void)setHasPrimaryResident:(BOOL)arg1 ;
-(BOOL)hasPrimaryResident;
-(unsigned)numUsers;
-(BOOL)primaryResident;
@end

