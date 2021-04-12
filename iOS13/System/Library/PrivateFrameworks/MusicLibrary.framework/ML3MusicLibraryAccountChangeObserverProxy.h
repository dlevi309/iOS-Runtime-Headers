/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <libobjc.A.dylib/MLMediaLibraryAccountChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, NSString;

@interface ML3MusicLibraryAccountChangeObserverProxy : NSObject <MLMediaLibraryAccountChangeObserver> {

	NSHashTable* _weakObservers;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;              //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * weakObservers;                            //@synthesize weakObservers=_weakObservers - In the implementation block
@property (nonatomic,readonly) NSHashTable * readonlyObservers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedProxy;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)addAccountChangeObserver:(id)arg1 ;
-(void)performDatabasePathChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)emergencyDisconnectWithCompletion:(/*^block*/id)arg1 ;
-(void)terminateForFailureToPerformDatabasePathChange;
-(NSHashTable *)readonlyObservers;
-(NSHashTable *)weakObservers;
-(void)removeAccountChangeObserver:(id)arg1 ;
@end

