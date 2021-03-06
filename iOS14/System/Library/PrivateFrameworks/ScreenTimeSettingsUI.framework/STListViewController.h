/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/STGroupSpecifierProviderDelegate.h>

@class NSArray, NSMutableDictionary, NSString;

@interface STListViewController : PSListController <STGroupSpecifierProviderDelegate> {

	NSArray* _specifierProviders;
	NSMutableDictionary* _cellHeightBySpecifierIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * cellHeightBySpecifierIdentifier;              //@synthesize cellHeightBySpecifierIdentifier=_cellHeightBySpecifierIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * specifierProviders;                                         //@synthesize specifierProviders=_specifierProviders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)specifiers;
-(id)init;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)setSpecifierProviders:(NSArray *)arg1 ;
-(NSArray *)specifierProviders;
-(void)specifierProvider:(id)arg1 reloadSpecifier:(id)arg2 animated:(BOOL)arg3 ;
-(void)specifierProvider:(id)arg1 reloadSectionHeaderFootersWithAnimation:(long long)arg2 ;
-(void)specifierProvider:(id)arg1 showController:(id)arg2 animated:(BOOL)arg3 ;
-(void)specifierProvider:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)specifierProvider:(id)arg1 dismissViewControllerAnimated:(BOOL)arg2 ;
-(void)specifierProvider:(id)arg1 showConfirmationViewForSpecifier:(id)arg2 ;
-(void)specifierProvider:(id)arg1 popToViewControllerAnimated:(BOOL)arg2 ;
-(void)specifierProvider:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)specifierProviderBeginUpdates:(id)arg1 ;
-(void)specifierProviderEndUpdates:(id)arg1 ;
-(void)specifierProvider:(id)arg1 lazyLoadBundle:(id)arg2 ;
-(void)specifierProvider:(id)arg1 showPINSheet:(id)arg2 ;
-(void)removeObserversForSpecifierProvider:(id)arg1 ;
-(void)addObserversForSpecifierProvider:(id)arg1 ;
-(NSMutableDictionary *)cellHeightBySpecifierIdentifier;
-(id)visibleSpecifierProviders;
-(void)setCellHeightBySpecifierIdentifier:(NSMutableDictionary *)arg1 ;
@end

