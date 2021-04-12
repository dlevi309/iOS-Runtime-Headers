/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <libobjc.A.dylib/NRNSXPCListenerProtocol.h>

@protocol NRNSXPCListenerDelegate, OS_dispatch_queue;
@class NSString, NSObject;

@interface NRMockNSXPCListener : NSObject <NRNSXPCListenerProtocol> {

	BOOL _suspended;
	BOOL _invalidated;
	id<NRNSXPCListenerDelegate> _delegate;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<NRNSXPCListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<NRNSXPCListenerDelegate>)delegate;
-(void)setDelegate:(id<NRNSXPCListenerDelegate>)arg1 ;
-(void)resume;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)suspend;
-(id)serverConnectionWithClientConnection:(id)arg1 ;
@end

