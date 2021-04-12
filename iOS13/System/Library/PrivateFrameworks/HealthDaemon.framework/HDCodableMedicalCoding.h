/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)code;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(BOOL)hasDisplayString;
-(void)setCode:(NSString *)arg1 ;
-(NSString *)codingSystem;
-(NSString *)codingVersion;
-(BOOL)hasCode;
-(void)setCodingSystem:(NSString *)arg1 ;
-(void)setCodingVersion:(NSString *)arg1 ;
-(BOOL)hasCodingSystem;
-(BOOL)hasCodingVersion;
@end

