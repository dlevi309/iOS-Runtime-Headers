/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/_DUIClientSystemApp.h>

@protocol OS_dispatch_queue, UIDraggingSystemMonitorDelegate;
@class NSXPCListener, NSObject, NSMapTable, NSSet, NSString;

@interface UIDraggingSystemMonitor : NSObject <NSXPCListenerDelegate, _DUIClientSystemApp> {

	NSXPCListener* _systemListener;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	NSMapTable* _sessionsBySessionInfo;
	id<UIDraggingSystemMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) NSSet * sessions; 
@property (assign,nonatomic,__weak) id<UIDraggingSystemMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)sharedInstance;
-(id)init;
-(id<UIDraggingSystemMonitorDelegate>)delegate;
-(NSSet *)sessions;
-(void)setDelegate:(id<UIDraggingSystemMonitorDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_init;
-(BOOL)xpcQueue_shouldAcceptNewConnection:(id)arg1 ;
-(void)xpcQueue_acceptNewConnection:(id)arg1 ;
-(id)sessionForDropSession:(id)arg1 ;
-(oneway void)dragDidBeginWithSystemSession:(id)arg1 info:(id)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)dragDidEndWithSystemSession:(id)arg1 ;
@end

