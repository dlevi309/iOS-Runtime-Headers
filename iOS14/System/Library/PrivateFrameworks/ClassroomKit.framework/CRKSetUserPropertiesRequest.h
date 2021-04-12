/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString, DMFControlGroupIdentifier, NSData, NSNumber;

@interface CRKSetUserPropertiesRequest : CATTaskRequest {

	NSString* _userIdentifier;
	DMFControlGroupIdentifier* _courseIdentifier;
	NSString* _displayName;
	NSString* _givenName;
	NSString* _familyName;
	NSString* _phoneticGivenName;
	NSString* _phoneticFamilyName;
	NSString* _userSource;
	NSData* _imageData;
	NSNumber* _useMeCardIfAvailable;

}

@property (nonatomic,copy) NSString * userIdentifier;                                   //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,retain) DMFControlGroupIdentifier * courseIdentifier;              //@synthesize courseIdentifier=_courseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * givenName;                                        //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                                       //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * phoneticGivenName;                                //@synthesize phoneticGivenName=_phoneticGivenName - In the implementation block
@property (nonatomic,copy) NSString * phoneticFamilyName;                               //@synthesize phoneticFamilyName=_phoneticFamilyName - In the implementation block
@property (nonatomic,copy) NSString * userSource;                                       //@synthesize userSource=_userSource - In the implementation block
@property (nonatomic,copy) NSData * imageData;                                          //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSNumber * useMeCardIfAvailable;                           //@synthesize useMeCardIfAvailable=_useMeCardIfAvailable - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)familyName;
-(id)initWithUser:(id)arg1 ;
-(NSString *)userIdentifier;
-(void)setFamilyName:(NSString *)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)givenName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)phoneticFamilyName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setPhoneticFamilyName:(NSString *)arg1 ;
-(NSData *)imageData;
-(void)setPhoneticGivenName:(NSString *)arg1 ;
-(NSString *)phoneticGivenName;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(void)setImageData:(NSData *)arg1 ;
-(DMFControlGroupIdentifier *)courseIdentifier;
-(void)setCourseIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(NSString *)userSource;
-(NSNumber *)useMeCardIfAvailable;
-(void)setUserSource:(NSString *)arg1 ;
-(void)setUseMeCardIfAvailable:(NSNumber *)arg1 ;
@end

