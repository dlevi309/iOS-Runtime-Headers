/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariCKBookmarksMigrationStartedEvent : PBCodable <NSCopying> {

	long long _localState;
	long long _remoteState;
	unsigned long long _timestamp;
	int _migratorType;
	SCD_Struct_WB11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMigratorType; 
@property (assign,nonatomic) int migratorType;                          //@synthesize migratorType=_migratorType - In the implementation block
@property (assign,nonatomic) BOOL hasLocalState; 
@property (assign,nonatomic) long long localState;                      //@synthesize localState=_localState - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteState; 
@property (assign,nonatomic) long long remoteState;                     //@synthesize remoteState=_remoteState - In the implementation block
-(id)dictionaryRepresentation;
-(int)migratorType;
-(void)setHasMigratorType:(BOOL)arg1 ;
-(BOOL)hasMigratorType;
-(id)migratorTypeAsString:(int)arg1 ;
-(int)StringAsMigratorType:(id)arg1 ;
-(void)setHasLocalState:(BOOL)arg1 ;
-(BOOL)hasLocalState;
-(void)setHasRemoteState:(BOOL)arg1 ;
-(BOOL)hasRemoteState;
-(long long)remoteState;
-(unsigned long long)timestamp;
-(void)setLocalState:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setMigratorType:(int)arg1 ;
-(void)setRemoteState:(long long)arg1 ;
-(long long)localState;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

