/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <Foundation/NSProxy.h>

@protocol SFQueueingServiceViewControllerProxyDelegate;
@class NSMutableArray, Protocol;

@interface SFQueueingServiceViewControllerProxy : NSProxy {

	NSMutableArray* _queuedInvocations;
	Protocol* _protocol;
	id _target;
	id<SFQueueingServiceViewControllerProxyDelegate> _delegate;

}

@property (nonatomic,retain) id target;                                                                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic,__weak) id<SFQueueingServiceViewControllerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setTarget:(id)arg1 ;
-(id<SFQueueingServiceViewControllerProxyDelegate>)delegate;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setDelegate:(id<SFQueueingServiceViewControllerProxyDelegate>)arg1 ;
-(id)initWithProtocol:(id)arg1 ;
-(id)target;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

