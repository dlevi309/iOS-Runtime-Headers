/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableEntityIdentifier : PBCodable <NSCopying> {

	long long _identifier;
	NSString* _schema;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasSchema; 
@property (nonatomic,retain) NSString * schema;                 //@synthesize schema=_schema - In the implementation block
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) long long identifier;              //@synthesize identifier=_identifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)identifier;
-(void)setIdentifier:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)schema;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(void)setSchema:(NSString *)arg1 ;
-(BOOL)hasSchema;
@end

