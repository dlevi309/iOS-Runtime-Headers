/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)orderedEnabledModuleIdentifiers;
-(id)sortModuleIdentifiers:(id)arg1 forInterfaceOrientation:(long long)arg2 ;
-(id)moduleSettingsForModuleIdentifier:(id)arg1 prototypeSize:(CCUILayoutSize)arg2 ;
-(void)_loadSettings;
-(void)_runBlockOnListeners:(/*^block*/id)arg1 ;
-(void)orderedEnabledModuleIdentifiersChangedForSettingsProvider:(id)arg1 ;
@end

