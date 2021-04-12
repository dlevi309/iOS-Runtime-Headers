/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, CRKImage, NSPersonNameComponents;

@interface CRKUser : NSObject <NSSecureCoding, NSCopying> {

	BOOL _useMeCardIfAvailable;
	NSString* _userIdentifier;
	NSString* _displayName;
	NSString* _givenName;
	NSString* _familyName;
	NSString* _phoneticGivenName;
	NSString* _phoneticFamilyName;
	NSString* _imageIdentifier;
	NSString* _imageURL;
	NSString* _userSource;
	long long _role;
	NSData* _userImageData;
	CRKImage* _userImage;

}

@property (nonatomic,copy) NSString * userIdentifier;                                                  //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * givenName;                                                       //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                                                      //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * phoneticGivenName;                                               //@synthesize phoneticGivenName=_phoneticGivenName - In the implementation block
@property (nonatomic,copy) NSString * phoneticFamilyName;                                              //@synthesize phoneticFamilyName=_phoneticFamilyName - In the implementation block
@property (nonatomic,copy) NSString * imageIdentifier;                                                 //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (nonatomic,copy) NSString * imageURL;                                                        //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSString * userSource;                                                      //@synthesize userSource=_userSource - In the implementation block
@property (assign,getter=shouldUseMeCardIfAvailable,nonatomic) BOOL useMeCardIfAvailable;              //@synthesize useMeCardIfAvailable=_useMeCardIfAvailable - In the implementation block
@property (nonatomic,copy) NSData * userImageData;                                                     //@synthesize userImageData=_userImageData - In the implementation block
@property (nonatomic,copy) CRKImage * userImage;                                                       //@synthesize userImage=_userImage - In the implementation block
@property (assign,nonatomic) long long role;                                                           //@synthesize role=_role - In the implementation block
@property (nonatomic,copy,readonly) NSPersonNameComponents * nameComponents; 
@property (nonatomic,readonly) BOOL isMeCardUser; 
@property (nonatomic,readonly) BOOL isValid; 
+(BOOL)supportsSecureCoding;
+(id)meCardUser;
+(id)customUserFromMeCardUser:(id)arg1 ;
-(NSString *)familyName;
-(void)setImageURL:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(void)setFamilyName:(NSString *)arg1 ;
-(id)init;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)givenName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRole:(long long)arg1 ;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)phoneticFamilyName;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isEqualToUser:(id)arg1 ;
-(id)description;
-(BOOL)isValid;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setPhoneticFamilyName:(NSString *)arg1 ;
-(void)setPhoneticGivenName:(NSString *)arg1 ;
-(NSString *)phoneticGivenName;
-(NSString *)imageIdentifier;
-(unsigned long long)hash;
-(id)dictionaryValue;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)imageURL;
-(long long)role;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSPersonNameComponents *)nameComponents;
-(BOOL)isEqual:(id)arg1 ;
-(void)setImageIdentifier:(NSString *)arg1 ;
-(NSString *)userSource;
-(NSData *)userImageData;
-(BOOL)shouldUseMeCardIfAvailable;
-(void)setUserSource:(NSString *)arg1 ;
-(void)setUseMeCardIfAvailable:(BOOL)arg1 ;
-(void)updateUserImage;
-(void)setUserImageData:(NSData *)arg1 ;
-(BOOL)isMeCardUser;
-(void)setUserImage:(CRKImage *)arg1 ;
-(CRKImage *)userImage;
@end

