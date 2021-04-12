/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <libobjc.A.dylib/CRCarPlayNavigationOwnerClient.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class NSArray, NSXPCConnection, CARObserverHashTable, NSObject, NSString;

@interface CARActiveNavigationIdentifiersObserver : NSObject <CRCarPlayNavigationOwnerClient, BSInvalidatable> {

	NSArray* _activeNavigationIdentifiers;
	NSXPCConnection* _connection;
	CARObserverHashTable* _observers;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) CARObserverHashTable * observers;                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                    //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * activeNavigationIdentifiers;              //@synthesize activeNavigationIdentifiers=_activeNavigationIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_setupConnection;
-(void)addObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(CARObserverHashTable *)observers;
-(id)init;
-(void)activeNavigationIdentifiersChangedTo:(id)arg1 ;
-(void)navigationOwnershipChangedTo:(unsigned long long)arg1 ;
-(NSArray *)activeNavigationIdentifiers;
-(NSXPCConnection *)connection;
-(void)setObservers:(CARObserverHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(void)invalidate;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

