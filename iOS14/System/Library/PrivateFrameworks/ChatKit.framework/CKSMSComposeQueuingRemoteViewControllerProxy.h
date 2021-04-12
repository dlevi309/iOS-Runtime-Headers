/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setQueuedInvocations:(NSMutableArray *)arg1 ;
-(id)init;
-(void)setServiceViewControllerProxy:(id<CKSMSCompose>)arg1 ;
-(id<CKSMSCompose>)serviceViewControllerProxy;
-(NSMutableArray *)queuedInvocations;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

