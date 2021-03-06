/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, LSApplicationProxy, LSApplicationRecord, _LSValidationToken, NSDictionary;

@interface LSAppLink : NSObject <NSSecureCoding> {

	NSURL* _URL;
	LSApplicationProxy* _targetApplicationProxy;
	LSApplicationRecord* _targetApplicationRecord;
	_LSValidationToken* __validationToken;

}

@property (nonatomic,retain) NSDictionary * browserSettings; 
@property (assign) long long openStrategy; 
@property (retain) _LSValidationToken * _validationToken;                      //@synthesize _validationToken=__validationToken - In the implementation block
@property (copy) NSURL * URL;                                                  //@synthesize URL=_URL - In the implementation block
@property (retain) LSApplicationRecord * targetApplicationRecord;              //@synthesize targetApplicationRecord=_targetApplicationRecord - In the implementation block
@property (readonly) LSApplicationProxy * targetApplicationProxy;              //@synthesize targetApplicationProxy=_targetApplicationProxy - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
+(BOOL)supportsSecureCoding;
+(id)_appLinkWithURL:(id)arg1 applicationRecord:(id)arg2 plugInClass:(Class)arg3 ;
+(void)_openWithAppLink:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)setSettingsSwitchState:(long long)arg1 forApplicationIdentifier:(id)arg2 error:(id*)arg3 ;
+(BOOL)removeAllSettingsReturningError:(id*)arg1 ;
+(id)_appLinksWithState:(id)arg1 context:(LSContext*)arg2 limit:(unsigned long long)arg3 requireEntitlement:(BOOL)arg4 error:(id*)arg5 ;
+(long long)settingsSwitchStateForApplicationIdentifier:(id)arg1 ;
+(id)_appLinksWithState:(id)arg1 limit:(unsigned long long)arg2 requireEntitlement:(BOOL)arg3 error:(id*)arg4 ;
+(void)openWithURL:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)getAppLinkWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_dispatchQueue;
+(id)_appLinksWithState:(id)arg1 context:(LSContext*)arg2 limit:(unsigned long long)arg3 URLComponents:(id)arg4 error:(id*)arg5 ;
+(BOOL)URLComponentsAreValidForAppLinks:(id)arg1 error:(id*)arg2 ;
+(void)getAppLinksWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_openAppLink:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)appLinksWithURL:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 ;
+(BOOL)areEnabledByDefault;
+(BOOL)_URLIsValidForAppLinks:(id)arg1 error:(id*)arg2 ;
+(void)openWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)openInWebBrowser:(BOOL)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 configuration:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)openInWebBrowser:(BOOL)arg1 setAppropriateOpenStrategyAndWebBrowserState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openInWebBrowser:(BOOL)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(long long)openStrategy;
-(_LSValidationToken *)_validationToken;
-(NSDictionary *)browserSettings;
-(BOOL)setEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(void)openWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setOpenStrategy:(long long)arg1 ;
-(BOOL)_validateReturningError:(id*)arg1 ;
-(void)set_validationToken:(_LSValidationToken *)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)setBrowserSettings:(id)arg1 error:(id*)arg2 ;
-(void)setBrowserSettings:(NSDictionary *)arg1 ;
-(LSApplicationProxy *)targetApplicationProxy;
-(BOOL)removeSettingsReturningError:(id*)arg1 ;
-(id)_userActivityWithState:(id)arg1 error:(id*)arg2 ;
-(void)setTargetApplicationRecord:(LSApplicationRecord *)arg1 ;
-(LSApplicationRecord *)targetApplicationRecord;
-(id)_validationTokenPayload;
-(void)setURL:(NSURL *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isEqual:(id)arg1 ;
@end

