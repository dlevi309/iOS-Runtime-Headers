/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)deviceClass;
-(NSString *)buildVersion;
-(void)setBuildVersion:(NSString *)arg1 ;
-(BOOL)hasIdentifier;
-(void)setDeviceClass:(NSString *)arg1 ;
-(BOOL)hasState;
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasDeviceClass;
-(BOOL)hasBuildVersion;
@end

