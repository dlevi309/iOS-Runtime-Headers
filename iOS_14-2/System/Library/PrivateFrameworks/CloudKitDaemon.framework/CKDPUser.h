/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPUserAlias, NSString, CKDPIdentifier, CKDPProtectionInfo;

@interface CKDPUser : PBCodable <NSCopying> {

	CKDPUserAlias* _alias;
	NSString* _firstName;
	CKDPIdentifier* _identifier;
	NSString* _lastName;
	CKDPProtectionInfo* _protectionInfo;
	BOOL _isInNetwork;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAlias; 
@property (nonatomic,retain) CKDPUserAlias * alias;                            //@synthesize alias=_alias - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstName; 
@property (nonatomic,retain) NSString * firstName;                             //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) BOOL hasLastName; 
@property (nonatomic,retain) NSString * lastName;                              //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) CKDPProtectionInfo * protectionInfo;              //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (assign,nonatomic) BOOL hasIsInNetwork; 
@property (assign,nonatomic) BOOL isInNetwork;                                 //@synthesize isInNetwork=_isInNetwork - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)firstName;
-(NSString *)lastName;
-(CKDPUserAlias *)alias;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(BOOL)hasIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(id)description;
-(BOOL)hasLastName;
-(BOOL)hasFirstName;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAlias:(CKDPUserAlias *)arg1 ;
-(void)setIdentifier:(CKDPIdentifier *)arg1 ;
-(CKDPIdentifier *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasProtectionInfo;
-(BOOL)hasAlias;
-(BOOL)isInNetwork;
-(void)setIsInNetwork:(BOOL)arg1 ;
-(void)setHasIsInNetwork:(BOOL)arg1 ;
-(BOOL)hasIsInNetwork;
@end

