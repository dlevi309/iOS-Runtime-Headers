/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/CCSModuleSettingsProviderObserver.h>

@class CCSModuleSettingsProvider, NSDictionary, NSHashTable, NSString;

@interface CCUIModuleSettingsManager : NSObject <CCSModuleSettingsProviderObserver> {

	CCSModuleSettingsProvider* _settingsProvider;
	NSDictionary* _settingsByIdentifier;
	NSHashTable* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)_runBlockOnListeners:(/*^block*/id)arg1 ;
-(id)init;
-(void)_loadSettings;
-(id)orderedEnabledModuleIdentifiers;
-(id)moduleSettingsForModuleIdentifier:(id)arg1 prototypeSize:(CCUILayoutSize)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(id)sortModuleIdentifiers:(id)arg1 forInterfaceOrientation:(long long)arg2 ;
-(void)orderedEnabledModuleIdentifiersChangedForSettingsProvider:(id)arg1 ;
@end

