/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/SYServiceDelegate.h>
#import <libobjc.A.dylib/SYSessionDelegate.h>

@protocol OS_dispatch_queue;
@class SYService, NSObject, NSMutableArray, NSMutableDictionary, NSString;

@interface MSPSyncManager : NSObject <SYServiceDelegate, SYSessionDelegate> {

	SYService* _service;
	NSObject*<OS_dispatch_queue> _saveQueue;
	NSMutableArray* _bookmarks;
	NSMutableDictionary* _bookmarksMap;
	NSMutableArray* _bookmarksForDisplay;
	NSMutableArray* _pins;
	NSMutableDictionary* _pinsMap;
	NSMutableArray* _history;
	NSMutableDictionary* _historyMap;
	BOOL _resetSyncRequested;
	NSMutableArray* _pendingSyncItems;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_bookmarkIsDisplayable:(id)arg1 ;
-(id)history;
-(id)pins;
-(BOOL)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3 ;
-(void)_notifyObservers;
-(id)init;
-(void)completedSync;
-(unsigned)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2 ;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
-(void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3 ;
-(void)notifyObservers;
-(void)_addPin:(id)arg1 ;
-(id)readPins;
-(id)bookmarks;
-(void)setDroppedPin:(id)arg1 ;
-(void)_updateFromDisk;
-(void)_resumeSyncService;
-(id)_wrapBookmark:(id)arg1 changeType:(long long)arg2 ;
-(id)_wrapPin:(id)arg1 changeType:(long long)arg2 ;
-(id)_wrapHistoryItem:(id)arg1 changeType:(long long)arg2 ;
-(void)completedPreparingSync;
-(void)_applyAddItem:(id)arg1 ;
-(void)_applyUpdateItem:(id)arg1 ;
-(void)_applyDeleteItem:(id)arg1 ;
-(void)_clearAllNanoPersistableData;
-(void)_addBookmark:(id)arg1 ;
-(void)_addHistoryItem:(id)arg1 ;
-(void)_updateBookmark:(id)arg1 ;
-(void)_updatePin:(id)arg1 ;
-(void)_updateHistoryItem:(id)arg1 ;
-(void)_removeBookmark:(id)arg1 ;
-(void)_removePin:(id)arg1 ;
-(void)_removeHistoryItem:(id)arg1 ;
-(void)writeBookmarks:(id)arg1 ;
-(void)writePins:(id)arg1 ;
-(void)writeHistory:(id)arg1 ;
-(id)readBookmarks;
-(void)_findDisplayableBookmarks;
-(id)readHistory;
-(void)_setHasChangesAvailable;
-(void)setNeedsFullSync;
-(id)displayableBookmarks;
-(void)updateHistoryItem:(id)arg1 ;
@end

