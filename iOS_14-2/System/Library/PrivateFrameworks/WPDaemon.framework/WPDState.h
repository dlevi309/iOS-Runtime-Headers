/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary;

@interface WPDState : NSObject {

	BOOL _restricted;
	BOOL _initialUpdate;
	long long _state;
	NSObject*<OS_dispatch_queue> _cbQueue;
	/*^block*/id _notification;
	NSMutableSet* _cbManagers;
	NSMutableDictionary* _cbStates;

}

@property (assign) long long state;                                   //@synthesize state=_state - In the implementation block
@property (assign) BOOL restricted;                                   //@synthesize restricted=_restricted - In the implementation block
@property (__weak) NSObject*<OS_dispatch_queue> cbQueue;              //@synthesize cbQueue=_cbQueue - In the implementation block
@property (__weak) id notification;                                   //@synthesize notification=_notification - In the implementation block
@property (retain) NSMutableSet * cbManagers;                         //@synthesize cbManagers=_cbManagers - In the implementation block
@property (retain) NSMutableDictionary * cbStates;                    //@synthesize cbStates=_cbStates - In the implementation block
@property (assign) BOOL initialUpdate;                                //@synthesize initialUpdate=_initialUpdate - In the implementation block
+(long long)getWPStateFromCBManagerState:(long long)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)setCbQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCbManagers:(NSMutableSet *)arg1 ;
-(void)setNotification:(id)arg1 ;
-(id)notification;
-(void)setRestricted:(BOOL)arg1 ;
-(NSMutableSet *)cbManagers;
-(void)updateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)initialUpdate;
-(void)updateWithManager:(id)arg1 Completion:(/*^block*/id)arg2 ;
-(id)description;
-(BOOL)restricted;
-(void)coalesceState:(long long*)arg1 Restricted:(BOOL*)arg2 UpdateCache:(BOOL)arg3 ;
-(void)registerManager:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(NSObject*<OS_dispatch_queue>)cbQueue;
-(void)setInitialUpdate:(BOOL)arg1 ;
-(NSMutableDictionary *)cbStates;
-(void)setCbStates:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
@end

