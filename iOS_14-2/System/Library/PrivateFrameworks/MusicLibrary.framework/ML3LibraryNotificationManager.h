/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <libobjc.A.dylib/MSVDistributedNotificationObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableOrderedSet, ML3MusicLibrary, NSString;

@interface ML3LibraryNotificationManager : NSObject <MSVDistributedNotificationObserverDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _notificationObservers;
	NSMutableOrderedSet* _queuedLocalNotifications;
	NSMutableOrderedSet* _queuedDistributedNotificationNames;
	ML3MusicLibrary* _library;

}

@property (nonatomic,__weak,readonly) ML3MusicLibrary * library;              //@synthesize library=_library - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ML3MusicLibrary *)library;
-(id)initWithLibrary:(id)arg1 distributedAndLocalNames:(id)arg2 ;
-(void)enqueueLocalNotification:(id)arg1 ;
-(void)_postEnqueuedLocalNotifications;
-(void)addObserverForDistributedName:(id)arg1 localName:(id)arg2 ;
-(void)enqueueDistributedNotificationNamed:(id)arg1 ;
-(void)removeObserverWithDistributedName:(id)arg1 ;
-(BOOL)observerShouldForwardDistributedNotification:(id)arg1 ;
-(void)removeObserverWithLocalName:(id)arg1 ;
-(id)_observerForDistributedName:(id)arg1 ;
-(void)enqueueLocalNotificationNamed:(id)arg1 ;
-(id)_observerForLocalName:(id)arg1 ;
-(void)_postEnqueuedDistributedNotifications;
@end

