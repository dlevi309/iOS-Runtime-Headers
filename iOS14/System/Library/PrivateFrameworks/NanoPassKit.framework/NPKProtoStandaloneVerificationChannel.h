/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoStandaloneVerificationChannel : PBCodable <NSCopying> {

	NSString* _contactPoint;
	NSString* _identifier;
	NSString* _organizationName;
	NSString* _sourceAddress;
	int _type;
	NSString* _typeDescription;
	NSString* _typeDescriptionUnlocalized;
	BOOL _requiresUserInteraction;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasTypeDescriptionUnlocalized; 
@property (nonatomic,retain) NSString * typeDescriptionUnlocalized;              //@synthesize typeDescriptionUnlocalized=_typeDescriptionUnlocalized - In the implementation block
@property (nonatomic,readonly) BOOL hasTypeDescription; 
@property (nonatomic,retain) NSString * typeDescription;                         //@synthesize typeDescription=_typeDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasOrganizationName; 
@property (nonatomic,retain) NSString * organizationName;                        //@synthesize organizationName=_organizationName - In the implementation block
@property (assign,nonatomic) BOOL hasRequiresUserInteraction; 
@property (assign,nonatomic) BOOL requiresUserInteraction;                       //@synthesize requiresUserInteraction=_requiresUserInteraction - In the implementation block
@property (nonatomic,readonly) BOOL hasContactPoint; 
@property (nonatomic,retain) NSString * contactPoint;                            //@synthesize contactPoint=_contactPoint - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceAddress; 
@property (nonatomic,retain) NSString * sourceAddress;                           //@synthesize sourceAddress=_sourceAddress - In the implementation block
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(NSString *)organizationName;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(void)setOrganizationName:(NSString *)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(BOOL)hasOrganizationName;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)sourceAddress;
-(void)setRequiresUserInteraction:(BOOL)arg1 ;
-(void)setContactPoint:(NSString *)arg1 ;
-(void)setSourceAddress:(NSString *)arg1 ;
-(BOOL)requiresUserInteraction;
-(NSString *)typeDescriptionUnlocalized;
-(NSString *)contactPoint;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTypeDescription:(NSString *)arg1 ;
-(NSString *)typeDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTypeDescriptionUnlocalized:(NSString *)arg1 ;
-(BOOL)hasTypeDescriptionUnlocalized;
-(BOOL)hasTypeDescription;
-(void)setHasRequiresUserInteraction:(BOOL)arg1 ;
-(BOOL)hasRequiresUserInteraction;
-(BOOL)hasContactPoint;
-(BOOL)hasSourceAddress;
@end

