/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SYLogDeviceState : PBCodable <NSCopying> {

	NSString* _buildVersion;
	NSString* _deviceClass;
	NSString* _identifier;
	unsigned _state;
	SCD_Struct_SY5 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceClass; 
@property (nonatomic,retain) NSString * deviceClass;               //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) BOOL hasBuildVersion; 
@property (nonatomic,retain) NSString * buildVersion;              //@synthesize buildVersion=_buildVersion - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) unsigned state;                       //@synthesize state=_state - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasState;
-(BOOL)hasIdentifier;
-(NSString *)deviceClass;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasDeviceClass;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)setDeviceClass:(NSString *)arg1 ;
-(void)setHasState:(BOOL)arg1 ;
-(NSString *)buildVersion;
-(BOOL)hasBuildVersion;
-(void)setState:(unsigned)arg1 ;
-(unsigned long long)hash;
-(unsigned)state;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

