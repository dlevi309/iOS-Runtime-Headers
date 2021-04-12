/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDelegate:(id<UIDraggingSystemMonitorDelegate>)arg1 ;
-(id)_init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(oneway void)dragDidBeginWithSystemSession:(id)arg1 info:(id)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)dragDidEndWithSystemSession:(id)arg1 ;
-(BOOL)xpcQueue_shouldAcceptNewConnection:(id)arg1 ;
-(void)xpcQueue_acceptNewConnection:(id)arg1 ;
-(NSSet *)sessions;
-(id)sessionForDropSession:(id)arg1 ;
@end

