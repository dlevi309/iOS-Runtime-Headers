/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPContactInformation : PBCodable <NSCopying> {

	NSString* _containerScopedUserId;
	NSString* _emailAddress;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _phoneNumber;

}

@property (nonatomic,readonly) BOOL hasEmailAddress; 
@property (nonatomic,retain) NSString * emailAddress;                       //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasContainerScopedUserId; 
@property (nonatomic,retain) NSString * containerScopedUserId;              //@synthesize containerScopedUserId=_containerScopedUserId - In the implementation block
@property (nonatomic,readonly) BOOL hasFirstName; 
@property (nonatomic,retain) NSString * firstName;                          //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) BOOL hasLastName; 
@property (nonatomic,retain) NSString * lastName;                           //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneNumber; 
@property (nonatomic,retain) NSString * phoneNumber;                        //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(NSString *)phoneNumber;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasEmailAddress;
-(id)description;
-(BOOL)hasLastName;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(BOOL)hasFirstName;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPhoneNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContainerScopedUserId:(NSString *)arg1 ;
-(BOOL)hasContainerScopedUserId;
-(NSString *)containerScopedUserId;
@end

