/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(NSString *)organizationName;
-(NSString *)contactPoint;
-(void)setTypeDescription:(NSString *)arg1 ;
-(NSString *)typeDescription;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasIdentifier;
-(void)setOrganizationName:(NSString *)arg1 ;
-(BOOL)hasOrganizationName;
-(BOOL)requiresUserInteraction;
-(void)setRequiresUserInteraction:(BOOL)arg1 ;
-(void)setContactPoint:(NSString *)arg1 ;
-(void)setSourceAddress:(NSString *)arg1 ;
-(NSString *)sourceAddress;
-(NSString *)typeDescriptionUnlocalized;
-(void)setTypeDescriptionUnlocalized:(NSString *)arg1 ;
-(BOOL)hasTypeDescriptionUnlocalized;
-(BOOL)hasTypeDescription;
-(void)setHasRequiresUserInteraction:(BOOL)arg1 ;
-(BOOL)hasRequiresUserInteraction;
-(BOOL)hasContactPoint;
-(BOOL)hasSourceAddress;
@end

