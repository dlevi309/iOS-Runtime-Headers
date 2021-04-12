/*
* Generated on Monday, March 1, 2021 at 2:35:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSafariCKBookmarksMigrationStartedEvent : PBCodable <NSCopying> {

	long long _localState;
	long long _remoteState;
	unsigned long long _timestamp;
	int _migratorType;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMigratorType; 
@property (assign,nonatomic) int migratorType;                          //@synthesize migratorType=_migratorType - In the implementation block
@property (assign,nonatomic) BOOL hasLocalState; 
@property (assign,nonatomic) long long localState;                      //@synthesize localState=_localState - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteState; 
@property (assign,nonatomic) long long remoteState;                     //@synthesize remoteState=_remoteState - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setMigratorType:(int)arg1 ;
-(void)setLocalState:(long long)arg1 ;
-(void)setRemoteState:(long long)arg1 ;
-(int)migratorType;
-(void)setHasMigratorType:(BOOL)arg1 ;
-(BOOL)hasMigratorType;
-(id)migratorTypeAsString:(int)arg1 ;
-(int)StringAsMigratorType:(id)arg1 ;
-(void)setHasLocalState:(BOOL)arg1 ;
-(BOOL)hasLocalState;
-(void)setHasRemoteState:(BOOL)arg1 ;
-(BOOL)hasRemoteState;
-(long long)localState;
-(long long)remoteState;
@end

