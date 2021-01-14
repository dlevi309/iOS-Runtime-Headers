/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NPSManager, NSArray, NSString, NSObject;

@interface NCSInternalSettingsManager : NSObject {

	NSMutableArray* _complicationDefinitions;
	NPSManager* _syncManager;
	NSArray* _storedSettings;
	NSString* _selectedComplicationIdentifier;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) BOOL hasSettings; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * selectedComplicationIdentifier; 
-(id)init;
-(void)_saveSettings;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)saveSettings;
-(void)loadSettings;
-(void)enumerateAllComplicationDefinitionsUsingBlock:(/*^block*/id)arg1 ;
-(id)_localizedNameForComplication:(id)arg1 ;
-(void)enumerateComplicationDefinitionsUsingBlock:(/*^block*/id)arg1 ;
-(NSString *)selectedComplicationIdentifier;
-(void)setSelectedComplicationIdentifier:(NSString *)arg1 ;
-(BOOL)hasSettings;
-(void)addComplicationDefinition:(id)arg1 ;
-(void)removeComplicationDefinitionsInArray:(id)arg1 ;
-(void)moveComplicationDefinitionFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(id)complicationDefinitionForAppBundleIdentifier:(id)arg1 ;
-(id)complicationDefinitionForComplicationIdentifier:(id)arg1 ;
-(id)complicationDefinitionForWatchKitIdentifier:(id)arg1 ;
-(id)complicationIdentifierForComplicationDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_numberOfActiveComplications;
@end

