/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)settle;
-(void)setObserver:(/*^block*/id)arg1 ;
-(void)unsettle;
-(void)start;
-(void)watchItem;
-(void)setURL:(id)arg1 ;
-(void)stop;
-(void)_coalesceSubitemObservations;
-(id)initWithQueue:(id)arg1 auditToken:(SCD_Struct_NS0)arg2 ;
-(void)handleFSEventPath:(id)arg1 flags:(unsigned)arg2 id:(unsigned long long)arg3 ;
-(void)setLastObservedEventID:(unsigned long long)arg1 ;
-(void)dealloc;
@end

