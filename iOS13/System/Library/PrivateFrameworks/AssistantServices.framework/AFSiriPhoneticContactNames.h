/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/


@class NSString;

@interface AFSiriPhoneticContactNames : NSObject {

	NSString* _givenName;
	NSString* _middleName;
	NSString* _familyName;
	NSString* _nickname;
	NSString* _organizationName;
	NSString* _languageCode;

}

@property (nonatomic,copy) NSString * givenName;                     //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * middleName;                    //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                    //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * nickname;                      //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,copy) NSString * organizationName;              //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                  //@synthesize languageCode=_languageCode - In the implementation block
-(NSString *)languageCode;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(NSString *)organizationName;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)spokenName;
-(void)setOrganizationName:(NSString *)arg1 ;
@end

