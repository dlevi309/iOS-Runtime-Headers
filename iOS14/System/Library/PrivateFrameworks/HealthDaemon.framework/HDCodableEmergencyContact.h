/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableEmergencyContact : PBCodable <NSCopying> {

	NSString* _name;
	NSString* _nameContactIdentifier;
	NSString* _phoneNumber;
	NSString* _phoneNumberContactIdentifier;
	NSString* _phoneNumberLabel;
	NSString* _relationship;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasNameContactIdentifier; 
@property (nonatomic,retain) NSString * nameContactIdentifier;                     //@synthesize nameContactIdentifier=_nameContactIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneNumber; 
@property (nonatomic,retain) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneNumberContactIdentifier; 
@property (nonatomic,retain) NSString * phoneNumberContactIdentifier;              //@synthesize phoneNumberContactIdentifier=_phoneNumberContactIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneNumberLabel; 
@property (nonatomic,retain) NSString * phoneNumberLabel;                          //@synthesize phoneNumberLabel=_phoneNumberLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasRelationship; 
@property (nonatomic,retain) NSString * relationship;                              //@synthesize relationship=_relationship - In the implementation block
-(id)dictionaryRepresentation;
-(void)setNameContactIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumberContactIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumberLabel:(NSString *)arg1 ;
-(NSString *)phoneNumberLabel;
-(BOOL)hasName;
-(NSString *)relationship;
-(NSString *)phoneNumber;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)phoneNumberContactIdentifier;
-(void)setRelationship:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)hasRelationship;
-(id)description;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPhoneNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)nameContactIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasNameContactIdentifier;
-(BOOL)hasPhoneNumberContactIdentifier;
-(BOOL)hasPhoneNumberLabel;
@end

