/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, RERemoteTrainingClientListenerDelegate;
@class NSMutableSet, NSXPCListener, NSObject, NSString;

@interface RERemoteTrainingClientListener : NSObject <NSXPCListenerDelegate> {

	NSMutableSet* _clients;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _queue;
	id<RERemoteTrainingClientListenerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RERemoteTrainingClientListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<RERemoteTrainingClientListenerDelegate>)delegate;
-(void)setDelegate:(id<RERemoteTrainingClientListenerDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

