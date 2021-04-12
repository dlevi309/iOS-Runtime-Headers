/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDictionary;

@interface SALanguageSettings : SABaseClientBoundCommand

@property (nonatomic,copy) NSDictionary * configuredLocales; 
+(id)languageSettings;
+(id)languageSettingsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSDictionary *)configuredLocales;
-(void)setConfiguredLocales:(NSDictionary *)arg1 ;
@end

