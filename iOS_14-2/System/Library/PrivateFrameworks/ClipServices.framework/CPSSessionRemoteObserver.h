/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/

#import <libobjc.A.dylib/CPSSessionObserving.h>

@protocol NSXPCProxyCreating;
@class NSString;

@interface CPSSessionRemoteObserver : NSObject <CPSSessionObserving> {

	id<NSXPCProxyCreating> _xpcProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observerWithXPCProxy:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithXPCProxy:(id)arg1 ;
@end

