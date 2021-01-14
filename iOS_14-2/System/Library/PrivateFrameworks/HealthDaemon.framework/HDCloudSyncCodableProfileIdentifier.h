/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HDCloudSyncCodableProfileIdentifier : PBCodable <NSCopying> {

	long long _type;
	NSData* _identifier;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSData * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                    //@synthesize type=_type - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSData *)arg1 ;
-(NSData *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

