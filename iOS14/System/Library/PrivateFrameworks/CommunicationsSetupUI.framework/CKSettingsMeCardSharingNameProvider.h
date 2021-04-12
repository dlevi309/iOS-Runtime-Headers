/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <libobjc.A.dylib/CNMeCardSharingNameProvider.h>

@class NSString;

@interface CKSettingsMeCardSharingNameProvider : NSObject <CNMeCardSharingNameProvider> {

	NSString* _givenName;
	NSString* _middleName;
	NSString* _familyName;
	NSString* _nickname;

}

@property (nonatomic,retain) NSString * givenName;                  //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,retain) NSString * middleName;                 //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,retain) NSString * familyName;                 //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,retain) NSString * nickname;                   //@synthesize nickname=_nickname - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nameProviderForNickname:(id)arg1 ;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)givenName;
-(NSString *)nickname;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setNickname:(NSString *)arg1 ;
@end

