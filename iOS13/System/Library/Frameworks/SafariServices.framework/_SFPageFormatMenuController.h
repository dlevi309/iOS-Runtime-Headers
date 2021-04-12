/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFBrowserContentController;
@class _SFSettingsAlertItem, UIViewController;

@interface _SFPageFormatMenuController : NSObject {

	_SFSettingsAlertItem* _readerAlertItem;
	id<_SFBrowserContentController> _browserContentController;
	UIViewController* _viewController;

}

@property (nonatomic,__weak,readonly) id<_SFBrowserContentController> browserContentController;              //@synthesize browserContentController=_browserContentController - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;                                     //@synthesize viewController=_viewController - In the implementation block
-(UIViewController *)viewController;
-(void)_readerAvailabilityDidChange:(id)arg1 ;
-(id)_readerTextSizeAlertItem;
-(id)_pageZoomAlertItem;
-(id)_readerAlertItem;
-(id)_readerFontAlertItem;
-(id)_readerThemeAlertItem;
-(BOOL)_canHideToolbar;
-(id)_fullScreenAlertItem;
-(id)_desktopMobileToggleAlertItem;
-(BOOL)_canToggleContentBlockers;
-(id)_contentBlockersToggleAlertItem;
-(id)_sitePreferencesAlertItem;
-(id<_SFBrowserContentController>)browserContentController;
-(void)_anchorInWindowCoordinatesForAlert:(id)arg1 ;
-(id)initWithBrowserContentController:(id)arg1 ;
-(void)presentMenuFromViewController:(id)arg1 withSourceInfo:(id)arg2 ;
@end

