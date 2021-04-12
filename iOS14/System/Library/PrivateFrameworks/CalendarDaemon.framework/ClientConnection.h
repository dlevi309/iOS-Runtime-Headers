/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <libobjc.A.dylib/CADDatabaseProvider.h>

@protocol CADAccountAccessHandler, OS_dispatch_queue, ClientConnectionDelegate;
@class NSObject, NSOperationQueue, NSMutableDictionary, NSMutableSet, CADOperationProxy, ClientIdentity, NSXPCConnection, CADDatabaseInitializationOptions, NSString;

@interface ClientConnection : NSObject <CADDatabaseProvider> {

	BOOL _allowedEntityTypesValid;
	long long _eventAccess;
	long long _reminderAccess;
	CalDatabase* _database;
	id<CADAccountAccessHandler> _accountAccessHandler;
	id<CADAccountAccessHandler> _strictAccountAccessHandler;
	NSObject*<OS_dispatch_queue> _dbQueue;
	NSOperationQueue* _operations;
	NSMutableDictionary* _insertedObjects;
	NSMutableSet* _canceledRequests;
	NSObject*<OS_dispatch_queue> _canceledRequestsLock;
	BOOL _initializationOptionsSet;
	CADOperationProxy* _cadOperationProxy;
	id<ClientConnectionDelegate> _delegate;
	ClientIdentity* _identity;
	NSXPCConnection* _xpcConnection;
	CADDatabaseInitializationOptions* _databaseInitializationOptions;

}

@property (nonatomic,readonly) id<CADAccountAccessHandler> accountAccessHandler; 
@property (assign,nonatomic,__weak) id<ClientConnectionDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CalDatabase* database;                                                         //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) ClientIdentity * identity;                                                   //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) CADOperationProxy * cadOperationProxy;                                       //@synthesize cadOperationProxy=_cadOperationProxy - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) NSString * changeTrackingID; 
@property (nonatomic,retain) CADDatabaseInitializationOptions * databaseInitializationOptions;              //@synthesize databaseInitializationOptions=_databaseInitializationOptions - In the implementation block
@property (readonly) BOOL initializationOptionsSet;                                                         //@synthesize initializationOptionsSet=_initializationOptionsSet - In the implementation block
-(id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)operations;
-(void)setDatabase:(CalDatabase*)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(BOOL)eventAccessGranted;
-(void)addOperation:(id)arg1 ;
-(BOOL)isStoreManaged:(void*)arg1 ;
-(id<ClientConnectionDelegate>)delegate;
-(void)dumpState;
-(ClientIdentity *)identity;
-(void)clearCachedAuthorizationStatus;
-(id)strictAccountAccessHandler;
-(CADDatabaseInitializationOptions *)databaseInitializationOptions;
-(id)insertedObjects;
-(BOOL)isStoreRestricted:(void*)arg1 forAction:(unsigned long long)arg2 strict:(BOOL)arg3 ;
-(void)setDelegate:(id<ClientConnectionDelegate>)arg1 ;
-(BOOL)initializationOptionsSet;
-(void)_loadAccessPermissionsIfNeeded;
-(BOOL)isCalendarItemManaged:(void*)arg1 ;
-(void)setDatabaseInitializationOptions:(CADDatabaseInitializationOptions *)arg1 ;
-(BOOL)_hasTCCAccessToEntityWithObjectIDUsingDeepInspection:(id)arg1 ;
-(BOOL)isCalendarRestricted:(void*)arg1 forAction:(unsigned long long)arg2 ;
-(void)handleDatabaseChanged;
-(void*)objectForKey:(id)arg1 ;
-(BOOL)hasTCCAccessToEntityWithObjectID:(id)arg1 ;
-(BOOL)isCalendarManaged:(void*)arg1 ;
-(NSString *)changeTrackingID;
-(void)_initAccountAccessHandler;
-(BOOL)isNotificationRestricted:(void*)arg1 forAction:(unsigned long long)arg2 ;
-(id<CADAccountAccessHandler>)accountAccessHandler;
-(void)insertObject:(void*)arg1 key:(id)arg2 ;
-(CalDatabase*)database;
-(CADOperationProxy *)cadOperationProxy;
-(void)closeDatabase;
-(void)clearInsertedObjects;
-(BOOL)isCalendarItemRestricted:(void*)arg1 forAction:(unsigned long long)arg2 ;
-(BOOL)reminderAccessGranted;
-(BOOL)isStoreRestricted:(void*)arg1 forAction:(unsigned long long)arg2 ;
-(id)_createManagedConfigAccountAccessHandlerWithValidator:(id)arg1 ;
-(void)dealloc;
-(BOOL)isObjectWithObjectIDAJunkEvent:(id)arg1 ;
@end

