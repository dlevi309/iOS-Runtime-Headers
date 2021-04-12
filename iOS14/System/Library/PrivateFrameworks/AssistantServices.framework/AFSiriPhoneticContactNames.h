/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)familyName;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)organizationName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)givenName;
-(NSString *)languageCode;
-(NSString *)nickname;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(id)spokenName;
@end

