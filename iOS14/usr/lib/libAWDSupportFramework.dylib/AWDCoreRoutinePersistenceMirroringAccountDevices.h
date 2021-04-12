/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutinePersistenceMirroringAccountDevices : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSMutableArray* _profiles;
	int _topDeviceClass;
	int _totalPlaces;
	int _totalTransitions;
	int _totalVisits;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * profiles;                 //@synthesize profiles=_profiles - In the implementation block
@property (assign,nonatomic) BOOL hasTopDeviceClass; 
@property (assign,nonatomic) int topDeviceClass;                        //@synthesize topDeviceClass=_topDeviceClass - In the implementation block
@property (assign,nonatomic) BOOL hasTotalVisits; 
@property (assign,nonatomic) int totalVisits;                           //@synthesize totalVisits=_totalVisits - In the implementation block
@property (assign,nonatomic) BOOL hasTotalPlaces; 
@property (assign,nonatomic) int totalPlaces;                           //@synthesize totalPlaces=_totalPlaces - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTransitions; 
@property (assign,nonatomic) int totalTransitions;                      //@synthesize totalTransitions=_totalTransitions - In the implementation block
+(Class)profilesType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)profiles;
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
-(void)dealloc;
-(void)setProfiles:(NSMutableArray *)arg1 ;
-(void)addProfiles:(id)arg1 ;
-(unsigned long long)profilesCount;
-(void)clearProfiles;
-(id)profilesAtIndex:(unsigned long long)arg1 ;
-(void)setTopDeviceClass:(int)arg1 ;
-(void)setHasTopDeviceClass:(BOOL)arg1 ;
-(BOOL)hasTopDeviceClass;
-(void)setTotalVisits:(int)arg1 ;
-(void)setHasTotalVisits:(BOOL)arg1 ;
-(BOOL)hasTotalVisits;
-(void)setTotalPlaces:(int)arg1 ;
-(void)setHasTotalPlaces:(BOOL)arg1 ;
-(BOOL)hasTotalPlaces;
-(void)setTotalTransitions:(int)arg1 ;
-(void)setHasTotalTransitions:(BOOL)arg1 ;
-(BOOL)hasTotalTransitions;
-(int)topDeviceClass;
-(int)totalVisits;
-(int)totalPlaces;
-(int)totalTransitions;
@end

