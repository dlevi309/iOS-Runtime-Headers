/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
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
-(id)initWithConnection:(id)arg1 ;
-(id<AXDragEndpointRequestSatisfierDelegate>)delegate;
-(void)requestDragEndpoint:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<AXDragEndpointRequestSatisfierDelegate>)arg1 ;
@end

