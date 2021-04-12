/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPersonNameComponents;

@interface CPLShareParticipant : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isCurrentUser;
	BOOL _hasiCloudAccount;
	long long _role;
	long long _acceptanceStatus;
	long long _permission;
	NSString* _userIdentifier;
	NSString* _email;
	NSString* _phoneNumber;
	NSPersonNameComponents* _nameComponents;

}

@property (assign,nonatomic) BOOL isCurrentUser;                                 //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (assign,nonatomic) long long role;                                     //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) long long acceptanceStatus;                         //@synthesize acceptanceStatus=_acceptanceStatus - In the implementation block
@property (assign,nonatomic) long long permission;                               //@synthesize permission=_permission - In the implementation block
@property (nonatomic,copy) NSString * userIdentifier;                            //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSString * email;                                     //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSPersonNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (assign,nonatomic) BOOL hasiCloudAccount;                              //@synthesize hasiCloudAccount=_hasiCloudAccount - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)descriptionForPermission:(long long)arg1 ;
+(id)descriptionForAcceptanceStatus:(long long)arg1 ;
+(id)descriptionForRole:(long long)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(BOOL)isCurrentUser;
-(id)initWithPhoneNumber:(id)arg1 ;
-(id)init;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(void)setAcceptanceStatus:(long long)arg1 ;
-(long long)acceptanceStatus;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRole:(long long)arg1 ;
-(id)description;
-(void)setIsCurrentUser:(BOOL)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setHasiCloudAccount:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEmail:(id)arg1 ;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(long long)role;
-(NSString *)email;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)permission;
-(NSPersonNameComponents *)nameComponents;
-(BOOL)hasiCloudAccount;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPermission:(long long)arg1 ;
-(id)initWithUserIdentifier:(id)arg1 ;
-(id)initWithUserIdentifier:(id)arg1 phoneNumber:(id)arg2 email:(id)arg3 ;
@end

