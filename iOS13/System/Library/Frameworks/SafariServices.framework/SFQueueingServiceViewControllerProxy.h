/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id<SFQueueingServiceViewControllerProxyDelegate>)delegate;
-(void)setDelegate:(id<SFQueueingServiceViewControllerProxyDelegate>)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)initWithProtocol:(id)arg1 ;
@end

