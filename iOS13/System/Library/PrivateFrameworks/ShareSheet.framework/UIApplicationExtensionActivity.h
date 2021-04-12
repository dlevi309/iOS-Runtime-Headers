/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIActivity.h>
#import <UIKit/UIActivityExtensionItemDataSource.h>
#import <UIKit/UIActivityExtensionItemDataTarget.h>

@class NSExtension, NSExtensionItem, UIViewController, _UIActivityBundleHelper, NSDate, UISUIActivityExtensionItemDataRequest, NSString;

@interface UIApplicationExtensionActivity : UIActivity <UIActivityExtensionItemDataSource, UIActivityExtensionItemDataTarget> {

	NSExtension* _applicationExtension;
	NSExtensionItem* __injectedExtensionItem;
	UIViewController* _extensionViewController;
	id _extensionContextIdentifier;
	UIViewController* _presenterViewController;
	/*^block*/id _presenterCompletion;
	_UIActivityBundleHelper* _activityBundleHelper;
	/*^block*/id _extensionRequestCleanupCompletion;
	NSDate* _installationDate;
	UISUIActivityExtensionItemDataRequest* _extensionItemDataRequest;

}

@property (nonatomic,retain) UIViewController * extensionViewController;                                    //@synthesize extensionViewController=_extensionViewController - In the implementation block
@property (nonatomic,retain) NSExtension * applicationExtension;                                            //@synthesize applicationExtension=_applicationExtension - In the implementation block
@property (nonatomic,copy) id extensionContextIdentifier;                                                   //@synthesize extensionContextIdentifier=_extensionContextIdentifier - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presenterViewController;                             //@synthesize presenterViewController=_presenterViewController - In the implementation block
@property (nonatomic,copy) id presenterCompletion;                                                          //@synthesize presenterCompletion=_presenterCompletion - In the implementation block
@property (nonatomic,retain) _UIActivityBundleHelper * activityBundleHelper;                                //@synthesize activityBundleHelper=_activityBundleHelper - In the implementation block
@property (nonatomic,retain) NSExtensionItem * _injectedExtensionItem;                                      //@synthesize _injectedExtensionItem=__injectedExtensionItem - In the implementation block
@property (nonatomic,copy) id extensionRequestCleanupCompletion;                                            //@synthesize extensionRequestCleanupCompletion=_extensionRequestCleanupCompletion - In the implementation block
@property (nonatomic,readonly) NSDate * installationDate;                                                   //@synthesize installationDate=_installationDate - In the implementation block
@property (nonatomic,readonly) NSString * containingAppBundleIdentifier; 
@property (nonatomic,retain) UISUIActivityExtensionItemDataRequest * extensionItemDataRequest;              //@synthesize extensionItemDataRequest=_extensionItemDataRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)activityCategory;
+(id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2 ;
+(id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2 ;
+(id)_applicationExtensionActivitiesForItems:(id)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(id)activityType;
-(void)setExtensionContextIdentifier:(id)arg1 ;
-(id)extensionContextIdentifier;
-(void)_cleanup;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)_activityImage;
-(long long)_defaultSortGroup;
-(id)initWithApplicationExtension:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityExtensionItemData:(id)arg1 ;
-(BOOL)_canBeExcludeWhenMatchingWithContext:(id)arg1 ;
-(id)_actionImage;
-(NSExtension *)applicationExtension;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_managesOwnPresentation;
-(void)setExtensionItemDataRequest:(UISUIActivityExtensionItemDataRequest *)arg1 ;
-(void)setApplicationExtension:(NSExtension *)arg1 ;
-(void)set_injectedExtensionItem:(NSExtensionItem *)arg1 ;
-(_UIActivityBundleHelper *)activityBundleHelper;
-(NSExtensionItem *)_injectedExtensionItem;
-(UISUIActivityExtensionItemDataRequest *)extensionItemDataRequest;
-(BOOL)_isServiceExtension;
-(void)setExtensionRequestCleanupCompletion:(id)arg1 ;
-(void)_instantiateExtensionViewControllerWithInputItems:(id)arg1 ;
-(void)setPresenterViewController:(UIViewController *)arg1 ;
-(void)setPresenterCompletion:(id)arg1 ;
-(void)_presentExtensionViewControllerIfPossible;
-(UIViewController *)extensionViewController;
-(id)extensionRequestCleanupCompletion;
-(void)setExtensionViewController:(UIViewController *)arg1 ;
-(UIViewController *)presenterViewController;
-(id)presenterCompletion;
-(void)_injectedJavaScriptResult:(id)arg1 ;
-(NSString *)containingAppBundleIdentifier;
-(void)setActivityBundleHelper:(_UIActivityBundleHelper *)arg1 ;
-(NSDate *)installationDate;
@end

