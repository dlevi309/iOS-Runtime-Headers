/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/ATConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class ATConnection, NSObject, NSMutableSet, NSString;

@interface VUIAirTrafficController : NSObject <ATConnectionDelegate> {

	ATConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSMutableSet* _observers;

}

@property (nonatomic,retain) ATConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * observers;                                  //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultController;
-(void)removeAllObservers;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)addObserver:(id)arg1 ;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableSet *)observers;
-(id)init;
-(ATConnection *)connection;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)setConnection:(ATConnection *)arg1 ;
-(void)_onConnectionQueue_startObservingIfIdle;
-(void)_onConnectionQueue_stopObservingIfIdle;
@end

