/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoAccountAuthenticationState : PBCodable <NSCopying> {

	NSString* _accountId;
	NSString* _displayName;
	unsigned _standaloneState;
	NSString* _subsectionId;
	SCD_Struct_NN1 _has;

}

@property (nonatomic,readonly) BOOL hasAccountId; 
@property (nonatomic,retain) NSString * accountId;                  //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) BOOL hasStandaloneState; 
@property (assign,nonatomic) unsigned standaloneState;              //@synthesize standaloneState=_standaloneState - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasSubsectionId; 
@property (nonatomic,retain) NSString * subsectionId;               //@synthesize subsectionId=_subsectionId - In the implementation block
-(id)dictionaryRepresentation;
-(void)setStandaloneState:(unsigned)arg1 ;
-(unsigned)standaloneState;
-(void)mergeFrom:(id)arg1 ;
-(void)setAccountId:(NSString *)arg1 ;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)accountId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisplayName;
-(BOOL)hasAccountId;
-(void)setSubsectionId:(NSString *)arg1 ;
-(void)setHasStandaloneState:(BOOL)arg1 ;
-(BOOL)hasStandaloneState;
-(BOOL)hasSubsectionId;
-(NSString *)subsectionId;
@end

