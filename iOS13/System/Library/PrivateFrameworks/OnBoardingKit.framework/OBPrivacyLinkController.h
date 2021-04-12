/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, OBBundle, OBPrivacyFlow;

@interface OBPrivacyLinkController : UIViewController {

	NSArray* _bundles;
	NSArray* _bundleIdentifiers;
	BOOL _didOverrideShowUnifiedAbout;
	BOOL _presentedViewControllerShouldUseDarkMode;
	BOOL _displayIcon;
	BOOL _displayLargeIcon;
	BOOL _displayCaptionText;
	BOOL _allowsOpeningSafari;
	BOOL _showsLinkToUnifiedAbout;
	NSString* _displayLanguage;
	unsigned long long _displayDeviceType;

}

@property (assign,nonatomic) BOOL presentedViewControllerShouldUseDarkMode;              //@synthesize presentedViewControllerShouldUseDarkMode=_presentedViewControllerShouldUseDarkMode - In the implementation block
@property (readonly) OBBundle * bundle; 
@property (readonly) NSArray * bundles; 
@property (readonly) OBPrivacyFlow * flow; 
@property (assign) BOOL displayIcon;                                                     //@synthesize displayIcon=_displayIcon - In the implementation block
@property (assign) BOOL displayLargeIcon;                                                //@synthesize displayLargeIcon=_displayLargeIcon - In the implementation block
@property (assign) BOOL displayCaptionText;                                              //@synthesize displayCaptionText=_displayCaptionText - In the implementation block
@property (retain) NSString * displayLanguage;                                           //@synthesize displayLanguage=_displayLanguage - In the implementation block
@property (assign) unsigned long long displayDeviceType;                                 //@synthesize displayDeviceType=_displayDeviceType - In the implementation block
@property (assign) BOOL allowsOpeningSafari;                                             //@synthesize allowsOpeningSafari=_allowsOpeningSafari - In the implementation block
@property (assign,nonatomic) BOOL showsLinkToUnifiedAbout;                               //@synthesize showsLinkToUnifiedAbout=_showsLinkToUnifiedAbout - In the implementation block
+(id)linkWithBundleIdentifiers:(id)arg1 ;
+(Class)_platformSpecificClass;
+(id)linkWithBundleIdentifier:(id)arg1 ;
-(OBBundle *)bundle;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)displayLanguage;
-(void)setDisplayIcon:(BOOL)arg1 ;
-(BOOL)displayIcon;
-(void)setAllowsOpeningSafari:(BOOL)arg1 ;
-(BOOL)allowsOpeningSafari;
-(void)setDisplayLanguage:(NSString *)arg1 ;
-(void)setDisplayDeviceType:(unsigned long long)arg1 ;
-(unsigned long long)displayDeviceType;
-(BOOL)showsLinkToUnifiedAbout;
-(void)setShowsLinkToUnifiedAbout:(BOOL)arg1 ;
-(void)setDisplayCaptionText:(BOOL)arg1 ;
-(id)initWithPrivacyBundle:(id)arg1 ;
-(void)setDisplayLargeIcon:(BOOL)arg1 ;
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(NSArray *)bundles;
-(OBPrivacyFlow *)flow;
-(BOOL)displayCaptionText;
-(BOOL)displayLargeIcon;
-(void)linkPressed;
-(void)setLinkEnabled:(BOOL)arg1 ;
-(BOOL)presentedViewControllerShouldUseDarkMode;
-(void)setPresentedViewControllerShouldUseDarkMode:(BOOL)arg1 ;
@end

