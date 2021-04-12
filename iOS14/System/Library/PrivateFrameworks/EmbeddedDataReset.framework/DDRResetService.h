/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedDataReset.framework/EmbeddedDataReset
*/

#import <EmbeddedDataReset/EmbeddedDataReset-Structs.h>
#import <libobjc.A.dylib/DDRClientResetProtocol.h>
#import <libobjc.A.dylib/DDRClientObserverProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSHashTable, NSObject, NSString;

@interface DDRResetService : NSObject <DDRClientResetProtocol, DDRClientObserverProtocol> {

	BOOL _invalidated;
	int _currentResetState;
	os_unfair_lock_s _lock;
	NSXPCConnection* _dataResetXPCConnection;
	NSXPCConnection* _observerNonLaunchingXPCConnection;
	NSHashTable* _obervers;
	long long _mode;
	NSObject*<OS_dispatch_queue> _observerQueue;

}

@property (nonatomic,retain) NSXPCConnection * dataResetXPCConnection;                         //@synthesize dataResetXPCConnection=_dataResetXPCConnection - In the implementation block
@property (nonatomic,retain) NSXPCConnection * observerNonLaunchingXPCConnection;              //@synthesize observerNonLaunchingXPCConnection=_observerNonLaunchingXPCConnection - In the implementation block
@property (assign,nonatomic) int currentResetState;                                            //@synthesize currentResetState=_currentResetState - In the implementation block
@property (nonatomic,retain) NSHashTable * obervers;                                           //@synthesize obervers=_obervers - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                                 //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic) long long mode;                                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerQueue;                       //@synthesize observerQueue=_observerQueue - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                                            //@synthesize lock=_lock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)sync;
-(void)setObervers:(NSHashTable *)arg1 ;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(long long)mode;
-(void)didCompleteDataResetMode:(long long)arg1 withError:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSXPCConnection *)observerNonLaunchingXPCConnection;
-(BOOL)invalidated;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSHashTable *)obervers;
-(void)setCurrentResetState:(int)arg1 ;
-(os_unfair_lock_s)lock;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)setDataResetXPCConnection:(NSXPCConnection *)arg1 ;
-(void)setMode:(long long)arg1 ;
-(NSXPCConnection *)dataResetXPCConnection;
-(int)currentResetState;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(void)resetWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)didBeginDataResetWithMode:(long long)arg1 ;
-(void)invalidate;
-(void)notifyClientsOfResetFailedWithErrorCode:(long long)arg1 ;
-(void)setObserverNonLaunchingXPCConnection:(NSXPCConnection *)arg1 ;
-(void)addOberver:(id)arg1 ;
-(void)willBeginDataResetWithMode:(long long)arg1 ;
@end

