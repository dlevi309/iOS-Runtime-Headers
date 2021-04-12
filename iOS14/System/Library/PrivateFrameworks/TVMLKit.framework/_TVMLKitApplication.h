/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/_TVMLKitApplication.h>

@protocol _TVMLKitApplication <IKApplication>
@property (nonatomic,readonly) BOOL supportsPictureInPicturePlayback; 
@property (nonatomic,__weak,readonly) id<UITraitEnvironment> keyTraitEnvironment; 
@required
-(BOOL)supportsPictureInPicturePlayback;
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
@property (nonatomic,readonly) BOOL supportsPictureInPicturePlayback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)appIdentifier;
-(UIWindow *)keyWindow;
-(void)setHeadless:(BOOL)arg1 ;
-(BOOL)headless;
-(id)vendorIdentifier;
-(id)initWithLaunchContext:(id)arg1 ;
-(id)activeDocument;
-(id)appJSURL;
-(void)setKeyTraitEnvironment:(id<UITraitEnvironment>)arg1 ;
-(BOOL)shouldIgnoreJSValidation;
-(id)localStorage;
-(id)vendorStorage;
-(id)userDefaultsStorage;
-(id)bagBootURLKey;
-(id)offlineJSURL;
-(id)appJSCachePath;
-(id)appLocalJSURL;
-(BOOL)appIsTrusted;
-(BOOL)appIsPrivileged;
-(id)appLaunchParams;
-(id)appTraitCollection;
-(void)setKeyWindow:(UIWindow *)arg1 ;
-(BOOL)supportsPictureInPicturePlayback;
-(id<UITraitEnvironment>)keyTraitEnvironment;
-(void)setLocalDataStorage:(IKAppDataStorage *)arg1 ;
-(void)setAppRootViewController:(UIViewController*<TVAppRootViewController>)arg1 ;
-(void)setJavaScriptLaunchOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)javaScriptLaunchOptions;
-(UIViewController*<TVAppRootViewController>)appRootViewController;
-(IKAppDataStorage *)localDataStorage;
-(TVApplicationControllerContext *)launchContext;
-(void)setLaunchContext:(TVApplicationControllerContext *)arg1 ;
@end

