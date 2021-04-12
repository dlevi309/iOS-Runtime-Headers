/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, IMNicknameAvatarImage;

@interface IMNickname : NSObject <NSCopying, NSSecureCoding> {

	NSString* _firstName;
	NSString* _lastName;
	IMNicknameAvatarImage* _avatar;
	NSString* _displayName;
	NSString* _handle;
	NSString* _recordID;

}

@property (nonatomic,copy) NSString * firstName;                          //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                           //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) IMNicknameAvatarImage * avatar;              //@synthesize avatar=_avatar - In the implementation block
@property (nonatomic,retain) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) NSString * nameHash; 
@property (nonatomic,readonly) NSString * imageHash; 
+(BOOL)supportsSecureCoding;
+(id)uniqueFilePathForWritingImageData;
+(id)nameHashWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)dictionaryRepresentation;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)firstName;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)lastName;
-(id)dataRepresentation;
-(IMNicknameAvatarImage *)avatar;
-(void)setRecordID:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)handle;
-(id)init;
-(void)setFirstName:(NSString *)arg1 ;
-(id)publicDictionaryRepresentation;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 avatar:(id)arg3 ;
-(id)_imageHashCreatedInChunks;
-(id)initWithMeContact:(id)arg1 ;
-(id)initWithPublicDictionaryRepresentationWithoutAvatar:(id)arg1 ;
-(id)publicDictionaryRepresentationWithoutAvatar;
-(id)_sharingState;
-(BOOL)isUpdateFromNickname:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)updateNameFromContact:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setAvatar:(IMNicknameAvatarImage *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)imageHash;
-(NSString *)nameHash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)recordID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

