/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MRAVAirPlaySecuritySettingsProtobuf : PBCodable <NSCopying> {

	NSString* _password;
	int _securityType;
	SCD_Struct_MR4 _has;

}

@property (nonatomic,readonly) BOOL hasPassword; 
@property (nonatomic,retain) NSString * password;               //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) int securityType;                  //@synthesize securityType=_securityType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)password;
-(id)dictionaryRepresentation;
-(void)setPassword:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSecurityType:(int)arg1 ;
-(int)securityType;
-(BOOL)hasPassword;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(BOOL)hasSecurityType;
-(id)securityTypeAsString:(int)arg1 ;
-(int)StringAsSecurityType:(id)arg1 ;
@end

