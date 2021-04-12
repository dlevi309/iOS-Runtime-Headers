/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, LSApplicationProxy, _LSValidationToken, NSDictionary;

@interface LSAppLink : NSObject <NSSecureCoding> {

	NSURL* _URL;
	LSApplicationProxy* _targetApplicationProxy;
	_LSValidationToken* __validationToken;

}

@property (nonatomic,retain) NSDictionary * browserSettings; 
@property (assign) long long openStrategy; 
@property (retain) _LSValidationToken * _validationToken;                    //@synthesize _validationToken=__validationToken - In the implementation block
@property (copy) NSURL * URL;                                                //@synthesize URL=_URL - In the implementation block
@property (retain) LSApplicationProxy * targetApplicationProxy;              //@synthesize targetApplicationProxy=_targetApplicationProxy - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
+(BOOL)supportsSecureCoding;
+(BOOL)URLComponentsAreValidForAppLinks:(id)arg1 error:(id*)arg2 ;
+(id)_dispatchQueue;
+(id)appLinksWithURL:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 ;
+(BOOL)areEnabledByDefault;
+(void)getAppLinkWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)getAppLinksWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)openWithURL:(id)arg1 configuration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_openWithAppLink:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)openWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)removeAllSettingsReturningError:(id*)arg1 ;
+(id)_appLinksWithState:(id)arg1 context:(LSContext*)arg2 limit:(unsigned long long)arg3 requireEntitlement:(BOOL)arg4 error:(id*)arg5 ;
+(id)_appLinksWithState:(id)arg1 context:(LSContext*)arg2 limit:(unsigned long long)arg3 URLComponents:(id)arg4 error:(id*)arg5 ;
+(id)_appLinksWithState:(id)arg1 limit:(unsigned long long)arg2 requireEntitlement:(BOOL)arg3 error:(id*)arg4 ;
+(void)_openAppLink:(id)arg1 state:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)_URLIsValidForAppLinks:(id)arg1 error:(id*)arg2 ;
+(id)_appLinkWithURL:(id)arg1 applicationProxy:(id)arg2 plugInClass:(Class)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(BOOL)isEnabled;
-(_LSValidationToken *)_validationToken;
-(BOOL)setEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(LSApplicationProxy *)targetApplicationProxy;
-(void)setTargetApplicationProxy:(LSApplicationProxy *)arg1 ;
-(void)set_validationToken:(_LSValidationToken *)arg1 ;
-(id)_validationTokenPayload;
-(void)openWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)setBrowserSettings:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)browserSettings;
-(void)setBrowserSettings:(NSDictionary *)arg1 ;
-(BOOL)removeSettingsReturningError:(id*)arg1 ;
-(void)openInWebBrowser:(BOOL)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)openInWebBrowser:(BOOL)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 configuration:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setOpenStrategy:(long long)arg1 ;
-(long long)openStrategy;
-(void)openInWebBrowser:(BOOL)arg1 setAppropriateOpenStrategyAndWebBrowserState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_validateReturningError:(id*)arg1 ;
-(id)_userActivityWithState:(id)arg1 error:(id*)arg2 ;
@end

