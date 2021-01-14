/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/SCLSuppressSchoolModeAssertionClientDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, NSMutableSet, NSHashTable, NSString;

@interface SCLSuppressSchoolModeAssertionManager : NSObject <NSXPCListenerDelegate, SCLSuppressSchoolModeAssertionClientDelegate> {

	NSObject*<OS_dispatch_queue> _targetQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	NSMutableSet* _clients;
	NSMutableSet* _acquiredClients;
	NSHashTable* _observers;
	unsigned long long _stateHandle;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> targetQueue;              //@synthesize targetQueue=_targetQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableSet * clients;                                //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSMutableSet * acquiredClients;                        //@synthesize acquiredClients=_acquiredClients - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                               //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) unsigned long long stateHandle;                        //@synthesize stateHandle=_stateHandle - In the implementation block
@property (nonatomic,readonly) unsigned long long status; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)clients;
-(void)addObserver:(id)arg1 ;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setStateHandle:(unsigned long long)arg1 ;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)activate;
-(NSXPCListener *)listener;
-(void)clientDidInvalidate:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)stateHandle;
-(void)setClients:(NSMutableSet *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)status;
-(void)dealloc;
-(os_state_data_s*)_stateDataWithHints:(os_state_hints_s*)arg1 ;
-(NSMutableSet *)acquiredClients;
-(void)performObserverBlock:(/*^block*/id)arg1 ;
-(void)clientDidAcquireAssertion:(id)arg1 ;
-(void)setAcquiredClients:(NSMutableSet *)arg1 ;
@end

