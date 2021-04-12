/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class LSAppLink, NSURL, LSApplicationProxy;

@interface WBSAppLink : NSObject {

	os_unfair_lock_s _ivarLock;
	BOOL _didResolveAppLink;
	LSAppLink* _cachedAppLink;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * url;                                                         //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) LSApplicationProxy * synchronousTargetApplicationProxy; 
+(void)clearSavedSettings;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(void)disable;
-(void)openExternallyWithWebBrowserState:(id)arg1 referrerURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)decideOpenStrategyWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)synchronouslyDecideOpenStrategy;
-(void)getAppLinkAttributesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableWithCompletionHandler:(/*^block*/id)arg1 ;
-(LSApplicationProxy *)synchronousTargetApplicationProxy;
-(id)_synchronouslyFetchAppLinkWithError:(id*)arg1 ;
-(void)_getAppLinkWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)_openStrategyForAppLink:(id)arg1 ;
-(void)_appLink:(id)arg1 getAppLinkLabel:(id*)arg2 name:(id*)arg3 icon:(id*)arg4 ;
-(void)getAppLinkLabel:(id*)arg1 name:(id*)arg2 icon:(id*)arg3 ;
-(void)openExternally;
@end

