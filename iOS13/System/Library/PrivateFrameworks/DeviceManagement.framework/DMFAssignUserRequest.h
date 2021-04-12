/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSNumber, NSArray;

@interface DMFAssignUserRequest : DMFTaskRequest {

	NSString* _userIdentifier;
	NSNumber* _groupID;
	NSString* _displayName;
	NSString* _givenName;
	NSString* _familyName;
	NSString* _imageURL;
	NSString* _fullScreenImageURL;
	NSString* _appleID;
	NSString* _passcodeType;
	NSString* _password;
	NSArray* _enrolledGroupIdentifiers;

}

@property (nonatomic,copy) NSString * userIdentifier;                       //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * groupID;                              //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * givenName;                            //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                           //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * imageURL;                             //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSString * fullScreenImageURL;                   //@synthesize fullScreenImageURL=_fullScreenImageURL - In the implementation block
@property (nonatomic,copy) NSString * appleID;                              //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * passcodeType;                         //@synthesize passcodeType=_passcodeType - In the implementation block
@property (nonatomic,copy) NSString * password;                             //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSArray * enrolledGroupIdentifiers;              //@synthesize enrolledGroupIdentifiers=_enrolledGroupIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(NSString *)displayName;
-(NSNumber *)groupID;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setGroupID:(NSNumber *)arg1 ;
-(NSString *)appleID;
-(NSString *)passcodeType;
-(void)setPasscodeType:(NSString *)arg1 ;
-(NSString *)imageURL;
-(void)setAppleID:(NSString *)arg1 ;
-(void)setImageURL:(NSString *)arg1 ;
-(NSString *)fullScreenImageURL;
-(NSArray *)enrolledGroupIdentifiers;
-(void)setFullScreenImageURL:(NSString *)arg1 ;
-(void)setEnrolledGroupIdentifiers:(NSArray *)arg1 ;
@end

