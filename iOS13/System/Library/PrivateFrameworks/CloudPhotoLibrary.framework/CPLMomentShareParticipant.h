/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPersonNameComponents;

@interface CPLMomentShareParticipant : NSObject <NSSecureCoding, NSCopying> {

	BOOL _hasiCloudAccount;
	BOOL _isCurrentUser;
	short _type;
	short _status;
	NSString* _email;
	NSString* _phoneNumber;
	NSString* _userIdentifier;
	NSPersonNameComponents* _nameComponents;

}

@property (nonatomic,copy) NSString * email;                                     //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * userIdentifier;                            //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSPersonNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (assign,nonatomic) BOOL hasiCloudAccount;                              //@synthesize hasiCloudAccount=_hasiCloudAccount - In the implementation block
@property (assign,nonatomic) BOOL isCurrentUser;                                 //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (assign,nonatomic) short type;                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) short status;                                       //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(short)type;
-(void)setType:(short)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(short)status;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setStatus:(short)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(NSPersonNameComponents *)nameComponents;
-(BOOL)hasiCloudAccount;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(void)setHasiCloudAccount:(BOOL)arg1 ;
-(void)setIsCurrentUser:(BOOL)arg1 ;
-(BOOL)isCurrentUser;
@end

