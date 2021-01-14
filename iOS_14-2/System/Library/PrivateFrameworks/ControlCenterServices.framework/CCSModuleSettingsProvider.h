/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSHashTable, NSArray;

@interface CCSModuleSettingsProvider : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSObject*<OS_dispatch_source> _configurationChangedSource;
	NSHashTable* _observers;
	NSArray* _orderedFixedModuleIdentifiers;
	NSArray* _orderedUserEnabledModuleIdentifiers;
	NSArray* _orderedUserEnabledFixedModuleIdentifiers;
	NSArray* _userDisabledModuleIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * orderedFixedModuleIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * orderedUserEnabledModuleIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * orderedUserEnabledFixedModuleIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * userDisabledModuleIdentifiers; 
+(void)initialize;
+(id)sharedProvider;
+(id)_configurationFileURL;
+(id)_defaultFixedModuleIdentifiers;
+(id)_configurationDirectoryURL;
+(id)_readSettings;
+(id)_defaultUserEnabledFixedModuleIdentifiers;
+(id)_defaultUserEnabledModuleIdentifiers;
+(void)_writeOrderedIdentifiers:(id)arg1 userEnabledFixedIdentifiers:(id)arg2 userDisabledIdentifiers:(id)arg3 ;
+(id)_defaultEnabledModuleOrder;
-(NSArray *)userDisabledModuleIdentifiers;
-(void)addObserver:(id)arg1 ;
-(NSArray *)orderedFixedModuleIdentifiers;
-(id)init;
-(void)_queue_startMonitoringConfigurationUpdates;
-(void)setAndSaveOrderedUserEnabledFixedModuleIdentifiers:(id)arg1 ;
-(void)_queue_loadSettings;
-(NSArray *)orderedUserEnabledFixedModuleIdentifiers;
-(void)_queue_sendConfigurationFileUpdateMessageToObservers;
-(void)_queue_runBlockOnListeners:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_queue_stopMonitoringConfigurationUpdates;
-(void)setAndSaveOrderedUserEnabledModuleIdentifiers:(id)arg1 ;
-(void)_queue_saveSettings;
-(void)_queue_handleConfigurationFileUpdate;
-(void)dealloc;
-(NSArray *)orderedUserEnabledModuleIdentifiers;
@end

