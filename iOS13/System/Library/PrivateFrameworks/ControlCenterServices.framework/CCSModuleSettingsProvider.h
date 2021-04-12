/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSArray* _userDisabledModuleIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * orderedFixedModuleIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * orderedUserEnabledModuleIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * userDisabledModuleIdentifiers; 
+(void)initialize;
+(id)sharedProvider;
+(id)_configurationFileURL;
+(id)_defaultFixedModuleIdentifiers;
+(id)_configurationDirectoryURL;
+(id)_readSettings;
+(id)_defaultUserEnabledModuleIdentifiers;
+(void)_writeOrderedIdentifiers:(id)arg1 userDisabledIdentifiers:(id)arg2 ;
+(id)_defaultEnabledModuleOrder;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)orderedFixedModuleIdentifiers;
-(NSArray *)orderedUserEnabledModuleIdentifiers;
-(NSArray *)userDisabledModuleIdentifiers;
-(void)setAndSaveOrderedUserEnabledModuleIdentifiers:(id)arg1 ;
-(void)_queue_loadSettings;
-(void)_queue_startMonitoringConfigurationUpdates;
-(void)_queue_stopMonitoringConfigurationUpdates;
-(void)_queue_saveSettings;
-(void)_queue_sendConfigurationFileUpdateMessageToObservers;
-(void)_queue_handleConfigurationFileUpdate;
-(void)_queue_runBlockOnListeners:(/*^block*/id)arg1 ;
@end

