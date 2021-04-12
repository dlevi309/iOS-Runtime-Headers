/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/_TVMLKitApplication.h>

@protocol _TVMLKitApplication <IKApplication>
@property (nonatomic,__weak,readonly) id<UITraitEnvironment> keyTraitEnvironment; 
@required
-(id<UITraitEnvironment>)keyTraitEnvironment;

@end


@protocol TVAppRootViewController, UITraitEnvironment;
@class TVApplicationControllerContext, IKAppDataStorage, UIViewController, UIWindow, NSDictionary, NSString;

@interface _TVMLKitApplication : NSObject <_TVMLKitApplication> {

	BOOL _headless;
	TVApplicationControllerContext* _launchContext;
	IKAppDataStorage* _localDataStorage;
	UIViewController*<TVAppRootViewController> _appRootViewController;
	UIWindow* _keyWindow;
	id<UITraitEnvironment> _keyTraitEnvironment;
	NSDictionary* _javaScriptLaunchOptions;

}

@property (assign,nonatomic,__weak) TVApplicationControllerContext * launchContext;                                //@synthesize launchContext=_launchContext - In the implementation block
@property (assign,nonatomic,__weak) IKAppDataStorage * localDataStorage;                                           //@synthesize localDataStorage=_localDataStorage - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<TVAppRootViewController> appRootViewController;              //@synthesize appRootViewController=_appRootViewController - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * keyWindow;                                                          //@synthesize keyWindow=_keyWindow - In the implementation block
@property (assign,nonatomic,__weak) id<UITraitEnvironment> keyTraitEnvironment;                                    //@synthesize keyTraitEnvironment=_keyTraitEnvironment - In the implementation block
@property (nonatomic,copy) NSDictionary * javaScriptLaunchOptions;                                                 //@synthesize javaScriptLaunchOptions=_javaScriptLaunchOptions - In the implementation block
@property (assign,nonatomic) BOOL headless;                                                                        //@synthesize headless=_headless - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)localStorage;
-(UIWindow *)keyWindow;
-(id)appIdentifier;
-(id)vendorIdentifier;
-(id)activeDocument;
-(BOOL)headless;
-(void)setHeadless:(BOOL)arg1 ;
-(BOOL)appIsTrusted;
-(id)vendorStorage;
-(id)userDefaultsStorage;
-(id)appJSCachePath;
-(id)appLocalJSURL;
-(id)bagBootURLKey;
-(id)appJSURL;
-(id)appTraitCollection;
-(id)offlineJSURL;
-(BOOL)appIsPrivileged;
-(BOOL)shouldIgnoreJSValidation;
-(id)appLaunchParams;
-(TVApplicationControllerContext *)launchContext;
-(void)setLaunchContext:(TVApplicationControllerContext *)arg1 ;
-(void)setKeyWindow:(UIWindow *)arg1 ;
-(id<UITraitEnvironment>)keyTraitEnvironment;
-(id)initWithLaunchContext:(id)arg1 ;
-(void)setLocalDataStorage:(IKAppDataStorage *)arg1 ;
-(void)setAppRootViewController:(UIViewController*<TVAppRootViewController>)arg1 ;
-(void)setJavaScriptLaunchOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)javaScriptLaunchOptions;
-(void)setKeyTraitEnvironment:(id<UITraitEnvironment>)arg1 ;
-(UIViewController*<TVAppRootViewController>)appRootViewController;
-(IKAppDataStorage *)localDataStorage;
@end

