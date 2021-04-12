/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/SafariSettingsListController.h>
#import <libobjc.A.dylib/SFContentBlockerManagerObserver.h>

@class _UIContentUnavailableView, NSTimer, NSString;

@interface SafariContentBlockersSettingsController : SafariSettingsListController <SFContentBlockerManagerObserver> {

	_UIContentUnavailableView* _contentUnavailableView;
	NSTimer* _reloadSpecifiersTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)contentBlockerManagerExtensionListDidChange:(id)arg1 ;
-(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_valueOfSpecifier:(id)arg1 ;
-(void)_showContentUnavailableView;
-(void)_hideContentUnavailableView;
@end

