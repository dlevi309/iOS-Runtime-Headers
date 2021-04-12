/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
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
-(id<AXDragEndpointVendorDelegate>)delegate;
-(void)setDelegate:(id<AXDragEndpointVendorDelegate>)arg1 ;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithXPCListener:(id)arg1 ;
-(void)endpointRequestSatisfierDidDisconnect:(id)arg1 ;
-(id)endpointForConnection:(id)arg1 forEndpointRequestSatisfier:(id)arg2 ;
@end

