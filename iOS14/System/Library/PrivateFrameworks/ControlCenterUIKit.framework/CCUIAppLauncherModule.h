/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class NSBundle, SBFApplication, NSString, CCUIContentModuleContext, NSURL, UIImage;

@interface CCUIAppLauncherModule : NSObject <CCUIContentModule> {

	NSBundle* _bundle;
	SBFApplication* _application;
	BOOL _supportsApplicationShortcuts;
	NSString* _applicationIdentifier;
	NSString* _launchApplicationIdentifier;
	NSString* _displayName;
	CCUIContentModuleContext* _contentModuleContext;
	NSURL* _launchURL;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                                                                       //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * launchApplicationIdentifier;                                                                 //@synthesize launchApplicationIdentifier=_launchApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * launchURL;                                                                                      //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                                                 //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL supportsApplicationShortcuts;                                                                    //@synthesize supportsApplicationShortcuts=_supportsApplicationShortcuts - In the implementation block
@property (getter=_application,nonatomic,readonly) SBFApplication * application; 
@property (nonatomic,copy,readonly) UIImage * iconGlyph; 
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)_fetchApplicationIfNeeded;
-(void)handleTapWithTouchType:(long long)arg1 ;
-(id)init;
-(id)contentViewControllerForContext:(id)arg1 ;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(void)setLaunchApplicationIdentifier:(NSString *)arg1 ;
-(BOOL)supportsApplicationShortcuts;
-(void)handleTouchDownWithTouchType:(long long)arg1 ;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(NSString *)applicationIdentifier;
-(NSURL *)launchURL;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)_application;
-(id)launchURLForTouchType:(long long)arg1 ;
-(UIImage *)iconGlyph;
-(NSString *)displayName;
-(void)setSupportsApplicationShortcuts:(BOOL)arg1 ;
-(NSString *)launchApplicationIdentifier;
@end

