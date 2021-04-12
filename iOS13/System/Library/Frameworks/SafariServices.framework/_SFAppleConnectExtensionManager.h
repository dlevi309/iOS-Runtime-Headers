/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSExtension, WKUserContentController, NSArray;

@interface _SFAppleConnectExtensionManager : NSObject {

	NSExtension* _appleConnectExtension;
	id _extensionDiscoveryToken;
	WKUserContentController* _userContentController;
	NSArray* _injectedUserScripts;

}

@property (getter=isAppleConnectExtensionInstalled,nonatomic,readonly) BOOL appleConnectExtensionInstalled; 
+(id)sharedManager;
-(void)_loadAppleConnectExtension:(id)arg1 ;
-(id)_findAppleConnectExtension;
-(void)_startListeningForExtensionUpdates;
-(BOOL)isAppleConnectExtensionInstalled;
-(void)loadAppleConnectExtensionWithUserContentController:(id)arg1 ;
-(void)appleConnectExtensionEnabledPreferenceChanged;
-(void)dispatchMessageToAppleConnectExtension:(id)arg1 fromPageDelegate:(id)arg2 userInfo:(id)arg3 ;
@end

