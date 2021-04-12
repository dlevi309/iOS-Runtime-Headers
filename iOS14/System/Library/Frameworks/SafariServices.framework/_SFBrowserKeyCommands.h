/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@interface _SFBrowserKeyCommands : NSObject
+(long long)_modifierFlagsForSelectorString:(id)arg1 bundle:(id)arg2 table:(id)arg3 ;
+(void)_setUpKeyCommandsIfNecessaryForPersona:(unsigned long long)arg1 ;
+(id)unlocalizedKeyCommandWithSelector:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 webInterceptable:(BOOL)arg4 ;
+(id)localizedKeyCommandWithSelector:(SEL)arg1 discoverabilityTitle:(id)arg2 bundle:(id)arg3 table:(id)arg4 webInterceptable:(BOOL)arg5 ;
+(id)_keyForSelectorString:(id)arg1 bundle:(id)arg2 table:(id)arg3 ;
+(id)_localizedKeyCommandWithSelector:(SEL)arg1 discoverabilityTitle:(id)arg2 webInterceptable:(BOOL)arg3 ;
+(BOOL)_boolForSelectorString:(id)arg1 modifierString:(id)arg2 bundle:(id)arg3 table:(id)arg4 ;
+(id)_placeholderKeyCommandForCommand:(id)arg1 ;
+(id)browserKeyCommandsForPersona:(unsigned long long)arg1 shouldAddEditingCommands:(BOOL)arg2 ;
+(id)unlocalizedKeyCommandWithSelector:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 webInterceptable:(BOOL)arg5 ;
@end

