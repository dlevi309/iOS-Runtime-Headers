/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/_SFPageFormatMenuItemControllerDelegate.h>

@protocol _SFBrowserContentController;
@class _SFSettingsAlertItem, NSArray, UIViewController, NSString;

@interface _SFPageFormatMenuController : NSObject <_SFPageFormatMenuItemControllerDelegate> {

	_SFSettingsAlertItem* _readerAlertItem;
	NSArray* _translationAlertItems;
	id<_SFBrowserContentController> _browserContentController;
	UIViewController* _viewController;

}

@property (nonatomic,__weak,readonly) id<_SFBrowserContentController> browserContentController;              //@synthesize browserContentController=_browserContentController - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;                                     //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewControllerForPresentationForItemController:(id)arg1 ;
-(UIViewController *)viewController;
-(void)_translationAvailabilityDidChange:(id)arg1 ;
-(void)_readerAvailabilityDidChange:(id)arg1 ;
-(id)_pageZoomAlertItem;
-(id)_readerTextSizeAlertItem;
-(id)_readerAlertItem;
-(void)_buildTranslationAlertItemsWithSourceInfo:(id)arg1 ;
-(id)_readerFontAlertItem;
-(id)_readerThemeAlertItem;
-(BOOL)_canHideToolbar;
-(id)_fullScreenAlertItem;
-(id)_desktopMobileToggleAlertItemWithOrientation:(long long)arg1 ;
-(BOOL)_canToggleContentBlockers;
-(id)_contentBlockersToggleAlertItem;
-(id)_sitePreferencesAlertItem;
-(id<_SFBrowserContentController>)browserContentController;
-(void)_anchorInWindowCoordinatesForAlert:(id)arg1 ;
-(BOOL)_hasStartedTranslation;
-(id)_exitTranslationAlertItem;
-(id)_internalTapToRadarTranslationAlertItem;
-(id)_translateAlertItemForLocaleIdentifier:(id)arg1 ;
-(id)initWithBrowserContentController:(id)arg1 ;
-(void)presentMenuFromViewController:(id)arg1 withSourceInfo:(id)arg2 ;
@end

