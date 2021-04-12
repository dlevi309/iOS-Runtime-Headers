/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CNMeCardSharingNameProvider.h>

@class NSString;

@interface CKMeCardSharingNameProvider : NSObject <CNMeCardSharingNameProvider> {

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
+(id)nameContactForPrimaryAccount;
+(id)nameProviderForNickname:(id)arg1 ;
+(id)nameProviderForContact:(id)arg1 ;
+(id)nameProviderForPrimaryAccount;
+(id)nameProviderForAccount:(id)arg1 ;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
@end

