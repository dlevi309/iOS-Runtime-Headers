/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableCoding : PBCodable <NSCopying> {

	NSString* _code;
	NSString* _system;
	NSString* _version;

}

@property (nonatomic,readonly) BOOL hasSystem; 
@property (nonatomic,retain) NSString * system;               //@synthesize system=_system - In the implementation block
@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasCode; 
@property (nonatomic,retain) NSString * code;                 //@synthesize code=_code - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasVersion;
-(void)mergeFrom:(id)arg1 ;
-(void)setCode:(NSString *)arg1 ;
-(id)description;
-(void)setSystem:(NSString *)arg1 ;
-(BOOL)hasCode;
-(NSString *)system;
-(unsigned long long)hash;
-(NSString *)code;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSystem;
@end

