/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

@class NSString;


@protocol _SFSettingsAuthenticationRequiring <NSObject>
@property (nonatomic,copy,readonly) NSString * authenticationPrompt; 
@property (nonatomic,readonly) BOOL showsAuthenticationPromptAsTitle; 
@property (assign,nonatomic) BOOL hasBeenAuthenticated; 
@optional
-(id)additionalViewControllersToPushHandlingURLResourceDictionary:(id)arg1 didAuthenticate:(BOOL)arg2;

@required
-(BOOL)hasBeenAuthenticated;
-(void)setHasBeenAuthenticated:(BOOL)arg1;
-(BOOL)showsAuthenticationPromptAsTitle;
-(NSString *)authenticationPrompt;

@end

