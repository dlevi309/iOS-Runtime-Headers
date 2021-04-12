/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKSMSCompose;
@class NSMutableArray;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject {

	NSMutableArray* _queuedInvocations;
	id<CKSMSCompose> _serviceViewControllerProxy;

}

@property (nonatomic,retain) NSMutableArray * queuedInvocations;                       //@synthesize queuedInvocations=_queuedInvocations - In the implementation block
@property (nonatomic,retain) id<CKSMSCompose> serviceViewControllerProxy;              //@synthesize serviceViewControllerProxy=_serviceViewControllerProxy - In the implementation block
-(id)init;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<CKSMSCompose>)serviceViewControllerProxy;
-(void)setServiceViewControllerProxy:(id<CKSMSCompose>)arg1 ;
-(void)setQueuedInvocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)queuedInvocations;
@end

