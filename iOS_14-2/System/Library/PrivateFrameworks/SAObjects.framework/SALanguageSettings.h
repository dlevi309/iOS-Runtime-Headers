/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)configuredLocales;
-(void)setConfiguredLocales:(NSDictionary *)arg1 ;
-(BOOL)mutatingCommand;
@end

