/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AXDragEndpointRequestSatisfierDelegate.h>

@protocol AXDragEndpointVendorDelegate;
@class NSXPCListener, NSMutableSet, NSString;

@interface AXDragEndpointVendor : NSObject <NSXPCListenerDelegate, AXDragEndpointRequestSatisfierDelegate> {

	NSXPCListener* _listener;
	NSMutableSet* _activeConnections;
	id<AXDragEndpointVendorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXDragEndpointVendorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCListener:(id)arg1 ;
-(id<AXDragEndpointVendorDelegate>)delegate;
-(void)setDelegate:(id<AXDragEndpointVendorDelegate>)arg1 ;
-(void)endpointRequestSatisfierDidDisconnect:(id)arg1 ;
-(id)endpointForConnection:(id)arg1 forEndpointRequestSatisfier:(id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)resume;
@end

