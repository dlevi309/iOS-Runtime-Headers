/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)phoneNumber;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)hasPhoneNumber;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(BOOL)hasFirstName;
-(BOOL)hasLastName;
-(BOOL)hasEmailAddress;
-(void)setContainerScopedUserId:(NSString *)arg1 ;
-(BOOL)hasContainerScopedUserId;
-(NSString *)containerScopedUserId;
@end

