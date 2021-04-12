/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)initWithQueue:(id)arg1 ;
-(long long)state;
-(id)notification;
-(void)setState:(long long)arg1 ;
-(void)setNotification:(id)arg1 ;
-(void)setRestricted:(BOOL)arg1 ;
-(BOOL)restricted;
-(NSMutableDictionary *)cbStates;
-(NSMutableSet *)cbManagers;
-(BOOL)initialUpdate;
-(void)coalesceState:(long long*)arg1 Restricted:(BOOL*)arg2 UpdateCache:(BOOL)arg3 ;
-(void)setInitialUpdate:(BOOL)arg1 ;
-(void)registerManager:(id)arg1 ;
-(void)updateWithManager:(id)arg1 Completion:(/*^block*/id)arg2 ;
-(void)updateWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cbQueue;
-(void)setCbQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCbManagers:(NSMutableSet *)arg1 ;
-(void)setCbStates:(NSMutableDictionary *)arg1 ;
@end

