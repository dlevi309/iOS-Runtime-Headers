/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <Foundation/Foundation-Structs.h>
@class NSObject, NSURL, NSFileWatcherObservations, NSMutableDictionary, NSString;

@interface NSFileWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	SCD_Struct_NS0 _auditToken;
	NSURL* _url;
	/*^block*/id _observer;
	BOOL _isWatching;
	NSObject*<OS_dispatch_source> _eventSource;
	unsigned long long _lastObservedEventID;
	FSEventStreamRef _eventStream;
	BOOL _eventsAreAboutDirectory;
	BOOL _isUnsettled;
	NSFileWatcherObservations* _itemObservations;
	NSMutableDictionary* _subitemObservationsByEventPath;
	NSURL* _fileReferenceURL;
	NSString* _formerPath;
	NSURL* _formerURL;

}
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)setURL:(id)arg1 ;
-(void)setObserver:(/*^block*/id)arg1 ;
-(void)settle;
-(id)initWithQueue:(id)arg1 auditToken:(SCD_Struct_NS0)arg2 ;
-(void)setLastObservedEventID:(unsigned long long)arg1 ;
-(void)watchItem;
-(void)_coalesceSubitemObservations;
-(void)handleFSEventPath:(id)arg1 flags:(unsigned)arg2 id:(unsigned long long)arg3 ;
-(void)unsettle;
@end

