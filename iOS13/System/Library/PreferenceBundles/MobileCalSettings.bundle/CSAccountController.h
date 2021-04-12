/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/EKUIAccountRefresherDelegate.h>
#import <libobjc.A.dylib/DelegateDetailProtocol.h>

@class NSArray, EKEventStore, EKSource, CalendarModel, EKUIAccountRefresher, NSString;

@interface CSAccountController : PSListController <EKUIAccountRefresherDelegate, DelegateDetailProtocol> {

	NSArray* _accountsICanAccess;
	NSArray* _accountsWithGrantedAccess;
	EKEventStore* _eventStore;
	EKSource* _ownerSource;
	CalendarModel* _model;
	EKUIAccountRefresher* _currentAccountRefresher;
	BOOL _loadingGrantedDelegates;
	BOOL _isShowingLoadingCell;
	unsigned long long _accountsICanAccessSection;
	unsigned long long _accountsWithGrantedAccessSection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(void)accountRefreshFinished:(id)arg1 ;
-(void)didModifyDelegate:(id)arg1 ;
-(void)eventStoreChanged:(id)arg1 ;
-(void)cleanupAccountRefresher;
-(void)reloadGrantedDelegates;
-(void)reloadDelegateSources;
-(id)_valueForAccountEnabledness:(id)arg1 ;
-(void)_updateSpecifierSubtitle:(id)arg1 ;
-(id)_accessLevelStringForSpecifier:(id)arg1 ;
-(id)specifiersForAccountsWithGrantedAccess;
-(id)specifiersForAccountsICanAccess;
@end

