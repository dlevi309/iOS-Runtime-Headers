/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setHasBeenAuthenticated:(BOOL)arg1;
-(BOOL)hasBeenAuthenticated;
-(BOOL)showsAuthenticationPromptAsTitle;
-(NSString *)authenticationPrompt;

@end

