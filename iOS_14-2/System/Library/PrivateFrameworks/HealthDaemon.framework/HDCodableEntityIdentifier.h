/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSchema:(NSString *)arg1 ;
-(NSString *)schema;
-(id)dictionaryRepresentation;
-(BOOL)hasIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(long long)arg1 ;
-(long long)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSchema;
@end

