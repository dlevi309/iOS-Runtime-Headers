/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/


@protocol CLSettingsManagerProtocol <CLIntersiloServiceProtocol>
@required
-(void)flush;
-(void)refresh;
-(id)syncgetSettingsAndRegisterForUpdates:(byref id)arg1;
-(void)unregisterForUpdates:(byref id)arg1;
-(id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(byref id)arg3;

@end

