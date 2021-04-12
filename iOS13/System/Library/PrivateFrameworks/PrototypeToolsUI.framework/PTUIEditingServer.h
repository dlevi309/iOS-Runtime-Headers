/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
*/

#import <libobjc.A.dylib/PTSettingsKeyPathObserver.h>
#import <libobjc.A.dylib/_PTSettingsRestoreDefaultsObserver.h>
#import <libobjc.A.dylib/PTChoiceRowDataSource.h>

@protocol PTEditingServerDataSource, PTEditingServerDelegate;
@class NSDictionary, NSArray, NSMutableDictionary, NSMapTable, NSString;

@interface PTUIEditingServer : NSObject <PTSettingsKeyPathObserver, _PTSettingsRestoreDefaultsObserver, PTChoiceRowDataSource> {

	id<PTEditingServerDataSource> _dataSource;
	id<PTEditingServerDelegate> _delegate;
	NSDictionary* _domainInfoByID;
	NSDictionary* _testRecipeInfoByID;
	NSArray* _domainGroupNames;
	NSMutableDictionary* _domainIDsByGroupName;
	NSMutableDictionary* _rootSettingsByDomainID;
	NSMutableDictionary* _proxyDefinitionsByDomainID;
	NSMutableDictionary* _testRecipeIDsByDomainID;
	NSMapTable* _moduleControllerByDomainID;
	BOOL _forRemoteEditing;

}

@property (assign,nonatomic) BOOL forRemoteEditing;                 //@synthesize forRemoteEditing=_forRemoteEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_settingsSection;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(long long)numberOfSectionsForChoiceRow:(id)arg1 ;
-(id)choiceRow:(id)arg1 titleForSection:(long long)arg2 ;
-(long long)choiceRow:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)choiceRow:(id)arg1 valueForRow:(long long)arg2 inSection:(long long)arg3 ;
-(id)choiceRow:(id)arg1 titleForRow:(long long)arg2 inSection:(long long)arg3 ;
-(id)choiceRow:(id)arg1 shortTitleForRow:(long long)arg2 inSection:(long long)arg3 ;
-(void)settingsWillRestoreDefaults:(id)arg1 ;
-(void)settingsDidRestoreDefaults:(id)arg1 ;
-(void)reloadDomains;
-(void)reloadTestRecipes;
-(void)proxyDefinitionChanged:(id)arg1 ;
-(id)_loadRootSettingsOrProxyForDomainID:(id)arg1 ;
-(id)_testRecipeSection;
-(id)domainIDForRootSettings:(id)arg1 ;
-(id)domainGroupNames;
-(id)_settingsGroupRow:(id)arg1 ;
-(id)_settingsDomainGroupModule:(id)arg1 ;
-(id)domainIDsInGroup:(id)arg1 ;
-(id)_settingsDomainRow:(id)arg1 ;
-(id)rootSettingsForDomainID:(id)arg1 ;
-(id)displayNameForDomainID:(id)arg1 ;
-(void)_enumerateDomainsWithOneOrMoreTestRecipesUsingBlock:(/*^block*/id)arg1 ;
-(id)_recipeIDForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)titleForTestRecipeID:(id)arg1 ;
-(id)testRecipeIDsForDomainID:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 delegate:(id)arg2 forRemoteEditing:(BOOL)arg3 ;
-(id)groupNameForDomainID:(id)arg1 ;
-(id)testRecipeSelectionModule;
-(id)settingsEditingModule;
-(BOOL)forRemoteEditing;
-(void)setForRemoteEditing:(BOOL)arg1 ;
@end

