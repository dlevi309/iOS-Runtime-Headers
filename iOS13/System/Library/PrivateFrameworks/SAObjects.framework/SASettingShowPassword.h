/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingCommand.h>

@class NSString, NSNumber;

@interface SASettingShowPassword : SASettingCommand

@property (nonatomic,copy) NSString * appBundleId; 
@property (nonatomic,copy) NSString * appOrWebsiteName; 
@property (nonatomic,copy) NSNumber * shouldPromptForAuthentication; 
@property (nonatomic,copy) NSString * spokenAppOrWebsiteName; 
+(id)showPassword;
+(id)showPasswordWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)appOrWebsiteName;
-(void)setAppOrWebsiteName:(NSString *)arg1 ;
-(NSNumber *)shouldPromptForAuthentication;
-(void)setShouldPromptForAuthentication:(NSNumber *)arg1 ;
-(NSString *)spokenAppOrWebsiteName;
-(void)setSpokenAppOrWebsiteName:(NSString *)arg1 ;
@end

