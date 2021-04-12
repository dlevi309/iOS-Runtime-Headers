/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebJSPropertiesDelegate.h>

@class AMSUIWebView, AMSUIWebClientContext, AMSUIWebJSProperties, NSString;

@interface AMSUIWebJSDataProvider : NSObject <AMSUIWebJSPropertiesDelegate> {

	AMSUIWebView* _webView;
	AMSUIWebClientContext* _context;
	AMSUIWebJSProperties* _properties;
	NSString* _otpIdentifier;

}

@property (assign,nonatomic,__weak) AMSUIWebView * webView;                       //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AMSUIWebJSProperties * properties;                   //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSString * otpIdentifier;                            //@synthesize otpIdentifier=_otpIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebView *)webView;
-(AMSUIWebJSProperties *)properties;
-(id)initWithContext:(id)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setProperties:(AMSUIWebJSProperties *)arg1 ;
-(void)setWebView:(AMSUIWebView *)arg1 ;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(BOOL)startOTPListener;
-(BOOL)stopOTPListener;
-(id)runJSRequest:(id)arg1 ;
-(id)syncProperties;
-(id)postEvent:(id)arg1 options:(id)arg2 ;
-(id)loadPageModelWithInfo:(id)arg1 ;
-(void)_observeNotifications;
-(id)_syncPropertiesScriptWithProperties:(id)arg1 ;
-(BOOL)_canInteractWithJS;
-(void)setOtpIdentifier:(NSString *)arg1 ;
-(NSString *)otpIdentifier;
-(void)_postSubscriptionChangedWithType:(long long)arg1 ;
-(void)_safariDataUpdate:(id)arg1 ;
-(void)_subscriptionStatusChangeAppStore:(id)arg1 ;
-(void)_subscriptionStatusChangeNews:(id)arg1 ;
-(void)_subscriptionStatusChangeMusic:(id)arg1 ;
-(void)_subscriptionStatusChangeTV:(id)arg1 ;
-(void)_subscriptionStatusChangeiCloud:(id)arg1 ;
-(void)_purchaseDidSucceed:(id)arg1 ;
-(void)propertiesDidChange:(id)arg1 ;
-(id)createWebView;
@end

