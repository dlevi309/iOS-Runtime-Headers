/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAUIAddViews, NSString, SAUIImageResource, NSDictionary, NSURL, NSArray;

@interface SAUIAppPunchOut : SABaseClientBoundCommand

@property (nonatomic,retain) SAUIAddViews * alternativePunchOut; 
@property (assign,nonatomic) BOOL appAvailableInStorefront; 
@property (nonatomic,copy) NSString * appDisplayName; 
@property (nonatomic,retain) SAUIImageResource * appIcon; 
@property (nonatomic,copy) NSDictionary * appIconMap; 
@property (assign,nonatomic) BOOL appInstalled; 
@property (nonatomic,copy) NSURL * appStoreUri; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSArray * launchOptions; 
@property (assign,nonatomic) BOOL launchOverSiri; 
@property (nonatomic,copy) NSString * predefinedButtonType; 
@property (nonatomic,copy) NSString * providerId; 
@property (nonatomic,copy) NSString * punchOutName; 
@property (nonatomic,copy) NSURL * punchOutUri; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSArray * themeIcons; 
+(id)appPunchOut;
+(id)appPunchOutWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)launchOptions;
-(void)setLaunchOptions:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setBundleId:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(NSString *)bundleId;
-(NSString *)subtitle;
-(void)setAppIcon:(SAUIImageResource *)arg1 ;
-(SAUIAddViews *)alternativePunchOut;
-(void)setAlternativePunchOut:(SAUIAddViews *)arg1 ;
-(BOOL)appAvailableInStorefront;
-(void)setAppAvailableInStorefront:(BOOL)arg1 ;
-(NSString *)appDisplayName;
-(void)setAppDisplayName:(NSString *)arg1 ;
-(NSDictionary *)appIconMap;
-(void)setAppIconMap:(NSDictionary *)arg1 ;
-(BOOL)appInstalled;
-(void)setAppInstalled:(BOOL)arg1 ;
-(NSURL *)appStoreUri;
-(void)setAppStoreUri:(NSURL *)arg1 ;
-(BOOL)launchOverSiri;
-(void)setLaunchOverSiri:(BOOL)arg1 ;
-(NSString *)predefinedButtonType;
-(void)setPredefinedButtonType:(NSString *)arg1 ;
-(NSString *)punchOutName;
-(void)setPunchOutName:(NSString *)arg1 ;
-(NSURL *)punchOutUri;
-(void)setPunchOutUri:(NSURL *)arg1 ;
-(NSArray *)themeIcons;
-(void)setThemeIcons:(NSArray *)arg1 ;
-(void)setProviderId:(NSString *)arg1 ;
-(BOOL)mutatingCommand;
-(void)setSubtitle:(NSString *)arg1 ;
-(SAUIImageResource *)appIcon;
-(NSString *)providerId;
@end

