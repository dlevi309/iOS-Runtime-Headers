/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/SafariSettingsListController.h>
#import <libobjc.A.dylib/SFContentBlockerManagerObserver.h>

@class _UIContentUnavailableView, NSString;

@interface SafariContentBlockersSettingsController : SafariSettingsListController <SFContentBlockerManagerObserver> {

	_UIContentUnavailableView* _contentUnavailableView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(void)contentBlockerManagerExtensionListDidChange:(id)arg1 ;
-(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(void)_hideContentUnavailableView;
-(void)_showContentUnavailableView;
-(id)_valueOfSpecifier:(id)arg1 ;
@end

