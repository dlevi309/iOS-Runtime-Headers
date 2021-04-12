/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <Foundation/NSXPCListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NRNSXPCListenerProtocol.h>

@protocol NRNSXPCListenerDelegate;
@class NSString;

@interface NRNSXPCListener : NSXPCListener <NSXPCListenerDelegate, NRNSXPCListenerProtocol> {

	id<NRNSXPCListenerDelegate> _listenerDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<NRNSXPCListenerDelegate> delegate; 
-(void)setDelegate:(id<NRNSXPCListenerDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

