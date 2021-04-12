/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSObject*<OS_dispatch_queue>)queue;
-(void)loadSettings;
-(void)_saveSettings;
-(void)saveSettings;
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

