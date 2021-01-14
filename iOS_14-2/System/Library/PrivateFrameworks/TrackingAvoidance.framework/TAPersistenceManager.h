/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class TAPersistenceStore, TAPersistenceManagerSettings, NSHashTable;

@interface TAPersistenceManager : NSObject {

	TAPersistenceStore* _store;
	TAPersistenceManagerSettings* _settings;
	NSHashTable* _observers;

}

@property (retain) TAPersistenceManagerSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                    //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) TAPersistenceStore * store;               //@synthesize store=_store - In the implementation block
-(BOOL)load;
-(void)addObserver:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(NSHashTable *)observers;
-(TAPersistenceStore *)store;
-(BOOL)save;
-(void)setSettings:(TAPersistenceManagerSettings *)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(TAPersistenceManagerSettings *)settings;
-(void)removeObserver:(id)arg1 ;
-(BOOL)reset;
-(BOOL)_createDirectoryIfNotPresent;
-(void)_notifyObserversOnReadFromURL:(id)arg1 bytes:(unsigned long long)arg2 ;
-(void)_notifyObserversOnWriteToURL:(id)arg1 bytes:(unsigned long long)arg2 ;
-(void)onUpdatedTAStore:(id)arg1 ;
@end

