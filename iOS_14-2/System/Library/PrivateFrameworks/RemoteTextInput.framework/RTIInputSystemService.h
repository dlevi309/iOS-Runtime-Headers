/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/RTIInputSystemSessionDelegate.h>

@protocol OS_dispatch_queue, RTIInputSystemDelegate;
@class NSMutableSet, RTIInputSystemServiceSession, NSObject, NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface RTIInputSystemService : NSObject <NSXPCListenerDelegate, RTIInputSystemSessionDelegate> {

	NSMutableSet* _sessions;
	BOOL _enabled;
	RTIInputSystemServiceSession* _currentSession;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	id<RTIInputSystemDelegate> _delegate;
	NSString* _machName;
	NSXPCListener* _listener;

}

@property (nonatomic,retain) NSString * machName;                                          //@synthesize machName=_machName - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                     //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;                 //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic,__weak) id<RTIInputSystemDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) RTIInputSystemServiceSession * currentSession;              //@synthesize currentSession=_currentSession - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * listenerEndpoint; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServiceWithMachName:(id)arg1 ;
+(Class)serviceSessionClass;
-(void)setMachName:(NSString *)arg1 ;
-(id<RTIInputSystemDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)inputSession:(id)arg1 documentTraitsDidChange:(id)arg2 ;
-(void)_createListenerIfNecessary;
-(void)setDelegate:(id<RTIInputSystemDelegate>)arg1 ;
-(void)inputSession:(id)arg1 documentStateDidChange:(id)arg2 ;
-(NSXPCListener *)listener;
-(id)initWithMachName:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)inputSession:(id)arg1 didChangePause:(BOOL)arg2 withReason:(id)arg3 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)inputSessionDidDie:(id)arg1 ;
-(void)inputSessionDidBegin:(id)arg1 ;
-(BOOL)isEnabled;
-(RTIInputSystemServiceSession *)currentSession;
-(NSString *)machName;
-(void)_destroyListenerIfNecessary;
-(void)inputSessionDidEnd:(id)arg1 ;
-(void)dealloc;
@end

