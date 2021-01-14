/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSAppLink.h>

@class _SWCServiceDetails;

@interface _LSSharedWebCredentialsAppLink : LSAppLink {

	LSBinding* _binding;
	_SWCServiceDetails* _serviceDetails;

}

@property (nonatomic,retain) _SWCServiceDetails * serviceDetails;              //@synthesize serviceDetails=_serviceDetails - In the implementation block
@property (readonly) LSBinding* binding;                                       //@synthesize binding=_binding - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(BOOL)_areAppLinksEnabledForServiceDetails:(id)arg1 cachedSettings:(id*)arg2 ;
+(id)_SWCSettingsWithApplicationIdentifier:(id)arg1 error:(id*)arg2 ;
+(BOOL)_setSWCSetting:(id)arg1 forKey:(id)arg2 withApplicationIdentifier:(id)arg3 error:(id*)arg4 ;
+(BOOL)setSettingsSwitchState:(long long)arg1 forApplicationIdentifier:(id)arg2 error:(id*)arg3 ;
+(BOOL)removeAllSettingsReturningError:(id*)arg1 ;
+(id)_SWCSpecifierForSettingsWithApplicationIdentifier:(id)arg1 ;
+(long long)settingsSwitchStateForApplicationIdentifier:(id)arg1 ;
-(LSBinding*)binding;
-(_SWCServiceDetails *)serviceDetails;
-(id)_SWCSpecifierForSettings;
-(BOOL)_setSWCSetting:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)browserSettings;
-(BOOL)setEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(void)setServiceDetails:(_SWCServiceDetails *)arg1 ;
-(id)_SWCSettingsReturningError:(id*)arg1 ;
-(BOOL)setBrowserSettings:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeSettingsReturningError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
@end

