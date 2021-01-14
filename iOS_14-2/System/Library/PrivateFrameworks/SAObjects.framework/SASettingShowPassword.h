/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)appOrWebsiteName;
-(void)setAppOrWebsiteName:(NSString *)arg1 ;
-(NSNumber *)shouldPromptForAuthentication;
-(void)setShouldPromptForAuthentication:(NSNumber *)arg1 ;
-(NSString *)spokenAppOrWebsiteName;
-(void)setSpokenAppOrWebsiteName:(NSString *)arg1 ;
@end

