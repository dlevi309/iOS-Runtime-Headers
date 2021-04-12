/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <libobjc.A.dylib/AXEndpointVending.h>

@protocol AXDragEndpointRequestSatisfierDelegate;
@class NSXPCConnection, NSString;

@interface AXDragEndpointRequestSatisfier : NSObject <AXEndpointVending> {

	NSXPCConnection* _connection;
	id<AXDragEndpointRequestSatisfierDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXDragEndpointRequestSatisfierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AXDragEndpointRequestSatisfierDelegate>)delegate;
-(void)setDelegate:(id<AXDragEndpointRequestSatisfierDelegate>)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)requestDragEndpoint:(/*^block*/id)arg1 ;
@end

