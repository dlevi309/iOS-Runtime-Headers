/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString, NSNumber, NSArray;

@interface CRKAssignUserRequest : CATTaskRequest {

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
	NSArray* _enrolledCourseIdentifiers;

}

@property (nonatomic,copy) NSString * userIdentifier;                        //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * groupID;                               //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * givenName;                             //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                            //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * imageURL;                              //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSString * fullScreenImageURL;                    //@synthesize fullScreenImageURL=_fullScreenImageURL - In the implementation block
@property (nonatomic,copy) NSString * appleID;                               //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * passcodeType;                          //@synthesize passcodeType=_passcodeType - In the implementation block
@property (nonatomic,copy) NSString * password;                              //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) NSArray * enrolledCourseIdentifiers;              //@synthesize enrolledCourseIdentifiers=_enrolledCourseIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)familyName;
-(void)setImageURL:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(void)setFamilyName:(NSString *)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)givenName;
-(NSNumber *)groupID;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setGroupID:(NSNumber *)arg1 ;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)password;
-(NSString *)fullScreenImageURL;
-(void)setPasscodeType:(NSString *)arg1 ;
-(void)setFullScreenImageURL:(NSString *)arg1 ;
-(NSString *)passcodeType;
-(void)setPassword:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)imageURL;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)displayName;
-(NSArray *)enrolledCourseIdentifiers;
-(void)setEnrolledCourseIdentifiers:(NSArray *)arg1 ;
@end

