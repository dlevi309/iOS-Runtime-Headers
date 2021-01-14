/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) id<NRNSXPCListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)suspend;
-(id<NRNSXPCListenerDelegate>)delegate;
-(void)setDelegate:(id<NRNSXPCListenerDelegate>)arg1 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)invalidate;
-(void)resume;
-(void)dealloc;
@end

