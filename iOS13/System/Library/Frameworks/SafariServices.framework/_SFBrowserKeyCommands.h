/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@interface _SFBrowserKeyCommands : NSObject
+(void)_setUpKeyCommandsIfNecessaryForPersona:(unsigned long long)arg1 ;
+(id)_localizedKeyCommandWithSelector:(SEL)arg1 discoverabilityTitle:(id)arg2 webInterceptable:(BOOL)arg3 ;
+(id)unlocalizedKeyCommandWithSelector:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 discoverabilityTitle:(id)arg4 webInterceptable:(BOOL)arg5 ;
+(id)_placeholderKeyCommandForCommand:(id)arg1 ;
+(id)unlocalizedKeyCommandWithSelector:(SEL)arg1 input:(id)arg2 modifierFlags:(long long)arg3 webInterceptable:(BOOL)arg4 ;
+(id)localizedKeyCommandWithSelector:(SEL)arg1 discoverabilityTitle:(id)arg2 bundle:(id)arg3 table:(id)arg4 webInterceptable:(BOOL)arg5 ;
+(id)_keyForSelectorString:(id)arg1 bundle:(id)arg2 table:(id)arg3 ;
+(long long)_modifierFlagsForSelectorString:(id)arg1 bundle:(id)arg2 table:(id)arg3 ;
+(BOOL)_boolForSelectorString:(id)arg1 modifierString:(id)arg2 bundle:(id)arg3 table:(id)arg4 ;
+(id)browserKeyCommandsForPersona:(unsigned long long)arg1 shouldAddEditingCommands:(BOOL)arg2 ;
@end

