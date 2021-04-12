/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class NSBundle, NSString, CCUIContentModuleContext, NSURL, UIImage;

@interface CCUIAppLauncherModule : NSObject <CCUIContentModule> {

	NSBundle* _bundle;
	BOOL _supportsApplicationShortcuts;
	NSString* _applicationIdentifier;
	NSString* _displayName;
	CCUIContentModuleContext* _contentModuleContext;
	NSURL* _launchURL;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                                                                       //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * launchURL;                                                                                      //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                                                 //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL supportsApplicationShortcuts;                                                                    //@synthesize supportsApplicationShortcuts=_supportsApplicationShortcuts - In the implementation block
@property (nonatomic,copy,readonly) UIImage * iconGlyph; 
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)init;
-(NSString *)displayName;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSURL *)launchURL;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(id)contentViewControllerForContext:(id)arg1 ;
-(UIImage *)iconGlyph;
-(id)launchURLForTouchType:(long long)arg1 ;
-(void)handleTouchDownWithTouchType:(long long)arg1 ;
-(void)handleTapWithTouchType:(long long)arg1 ;
-(BOOL)supportsApplicationShortcuts;
-(void)setSupportsApplicationShortcuts:(BOOL)arg1 ;
@end

