/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <libobjc.A.dylib/CRCarPlayNavigationOwnerClient.h>

@protocol OS_dispatch_queue;
@class NSArray, NSXPCConnection, CARObserverHashTable, NSObject, NSString;

@interface CARActiveNavigationIdentifiersObserver : NSObject <CRCarPlayNavigationOwnerClient> {

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
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObservers:(CARObserverHashTable *)arg1 ;
-(CARObserverHashTable *)observers;
-(void)_connectionInvalidated;
-(void)_connectionInterrupted;
-(void)_setupConnection;
-(void)activeNavigationIdentifiersChangedTo:(id)arg1 ;
-(void)navigationOwnershipChangedTo:(unsigned long long)arg1 ;
-(NSArray *)activeNavigationIdentifiers;
@end

