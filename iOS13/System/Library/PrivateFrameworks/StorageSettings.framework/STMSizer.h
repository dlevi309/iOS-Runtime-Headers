/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/

#import <StorageSettings/StorageSettings-Structs.h>
#import <StorageSettings/STMSizeCache.h>

@class NSMutableDictionary, NSArray;

@interface STMSizer : STMSizeCache {

	os_unfair_lock_s _pendingEventsLock;
	NSMutableDictionary* _pendingEventsByPath;
	FSEventStreamRef _fsStream;
	BOOL _streamRunning;
	NSArray* _rootPaths;

}

@property (nonatomic,retain) NSArray * rootPaths;              //@synthesize rootPaths=_rootPaths - In the implementation block
-(void)dealloc;
-(id)initWithPrefsKey:(id)arg1 ;
-(void)setEvent:(id)arg1 forItem:(id)arg2 ;
-(void)startSizing:(id)arg1 ;
-(void)setRootPaths:(NSArray *)arg1 ;
-(void)startSizer;
-(void)stopSizer;
-(void)processEvents:(id)arg1 ;
-(NSArray *)rootPaths;
@end

