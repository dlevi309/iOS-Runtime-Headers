/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPIdentifier *)identifier;
-(void)setIdentifier:(CKDPIdentifier *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(CKDPProtectionInfo *)protectionInfo;
-(void)setProtectionInfo:(CKDPProtectionInfo *)arg1 ;
-(BOOL)hasIdentifier;
-(void)setAlias:(CKDPUserAlias *)arg1 ;
-(CKDPUserAlias *)alias;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(BOOL)hasFirstName;
-(BOOL)hasLastName;
-(BOOL)hasProtectionInfo;
-(BOOL)hasAlias;
-(BOOL)isInNetwork;
-(void)setIsInNetwork:(BOOL)arg1 ;
-(void)setHasIsInNetwork:(BOOL)arg1 ;
-(BOOL)hasIsInNetwork;
@end

