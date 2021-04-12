/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)code;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)system;
-(void)setSystem:(NSString *)arg1 ;
-(BOOL)hasVersion;
-(void)setCode:(NSString *)arg1 ;
-(BOOL)hasSystem;
-(BOOL)hasCode;
@end

