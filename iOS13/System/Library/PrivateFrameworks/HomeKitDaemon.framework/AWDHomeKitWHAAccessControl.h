/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitWHAAccessControl : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _privilegeLevel;
	BOOL _isP2PEnabled;
	BOOL _isPasswordSet;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIsP2PEnabled; 
@property (assign,nonatomic) BOOL isP2PEnabled;                         //@synthesize isP2PEnabled=_isP2PEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPrivilegeLevel; 
@property (assign,nonatomic) int privilegeLevel;                        //@synthesize privilegeLevel=_privilegeLevel - In the implementation block
@property (assign,nonatomic) BOOL hasIsPasswordSet; 
@property (assign,nonatomic) BOOL isPasswordSet;                        //@synthesize isPasswordSet=_isPasswordSet - In the implementation block
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
-(void)setIsP2PEnabled:(BOOL)arg1 ;
-(void)setHasIsP2PEnabled:(BOOL)arg1 ;
-(BOOL)hasIsP2PEnabled;
-(int)privilegeLevel;
-(void)setPrivilegeLevel:(int)arg1 ;
-(void)setHasPrivilegeLevel:(BOOL)arg1 ;
-(BOOL)hasPrivilegeLevel;
-(id)privilegeLevelAsString:(int)arg1 ;
-(int)StringAsPrivilegeLevel:(id)arg1 ;
-(void)setIsPasswordSet:(BOOL)arg1 ;
-(void)setHasIsPasswordSet:(BOOL)arg1 ;
-(BOOL)hasIsPasswordSet;
-(BOOL)isP2PEnabled;
-(BOOL)isPasswordSet;
@end

