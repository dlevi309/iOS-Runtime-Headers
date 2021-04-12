/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoBooksComplicationsCompanion.bundle/NanoBooksComplicationsCompanion
*/


@protocol OS_dispatch_queue;
@class NBComplicationLibraryItem, NSHashTable, NSObject, NSDate;

@interface NBComplicationLibraryManager : NSObject {

	NBComplicationLibraryItem* _recentAudiobook;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _lastFetchedDate;

}

@property (nonatomic,retain) NSHashTable * observers;                                  //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NBComplicationLibraryItem * recentAudiobook;              //@synthesize recentAudiobook=_recentAudiobook - In the implementation block
@property (nonatomic,retain) NSDate * lastFetchedDate;                                 //@synthesize lastFetchedDate=_lastFetchedDate - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)setLastFetchedDate:(NSDate *)arg1 ;
-(NSDate *)lastFetchedDate;
-(NBComplicationLibraryItem *)recentAudiobook;
-(void)setRecentAudiobook:(NBComplicationLibraryItem *)arg1 ;
-(void)q_updateMediaItem;
-(void)q_coalescedCheckForUpdates;
-(void)_notifyObserversWithLibraryItem:(id)arg1 ;
-(void)checkForUpdates;
-(void)_handleMediaLibraryUpdates:(id)arg1 ;
@end

