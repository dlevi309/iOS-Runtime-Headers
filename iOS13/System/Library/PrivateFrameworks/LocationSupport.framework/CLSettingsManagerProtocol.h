/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/


@protocol CLSettingsManagerProtocol <CLIntersiloServiceProtocol>
@required
-(void)refresh;
-(void)flush;
-(id)syncgetSettingsAndRegisterForUpdates:(byref id)arg1;
-(void)unregisterForUpdates:(byref id)arg1;
-(id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(byref id)arg3;

@end

