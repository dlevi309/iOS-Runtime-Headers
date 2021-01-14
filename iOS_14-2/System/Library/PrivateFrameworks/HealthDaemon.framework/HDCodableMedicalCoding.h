/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableMedicalCoding : PBCodable <NSCopying> {

	NSString* _code;
	NSString* _codingSystem;
	NSString* _codingVersion;
	NSString* _displayString;

}

@property (nonatomic,readonly) BOOL hasCodingSystem; 
@property (nonatomic,retain) NSString * codingSystem;               //@synthesize codingSystem=_codingSystem - In the implementation block
@property (nonatomic,readonly) BOOL hasCodingVersion; 
@property (nonatomic,retain) NSString * codingVersion;              //@synthesize codingVersion=_codingVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasCode; 
@property (nonatomic,retain) NSString * code;                       //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayString; 
@property (nonatomic,retain) NSString * displayString;              //@synthesize displayString=_displayString - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)displayString;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)codingVersion;
-(void)setDisplayString:(NSString *)arg1 ;
-(void)setCode:(NSString *)arg1 ;
-(id)description;
-(BOOL)hasCode;
-(unsigned long long)hash;
-(NSString *)code;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)codingSystem;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDisplayString;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCodingSystem:(NSString *)arg1 ;
-(void)setCodingVersion:(NSString *)arg1 ;
-(BOOL)hasCodingSystem;
-(BOOL)hasCodingVersion;
@end

