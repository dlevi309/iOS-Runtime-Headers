/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)emergencyDisconnectWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)removeAccountChangeObserver:(id)arg1 ;
-(NSHashTable *)readonlyObservers;
-(id)_init;
-(NSHashTable *)weakObservers;
-(void)terminateForFailureToPerformDatabasePathChange;
-(void)performDatabasePathChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addAccountChangeObserver:(id)arg1 ;
@end

