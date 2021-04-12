/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class NSMutableArray, Protocol;

@interface SKInvocationQueueProxy : NSObject {

	NSMutableArray* _invocationQueue;
	id _invocationTarget;
	Protocol* _protocol;

}

@property (nonatomic,retain) id invocationTarget;              //@synthesize invocationTarget=_invocationTarget - In the implementation block
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithProtocol:(id)arg1 ;
-(id)invocationTarget;
-(void)setInvocationTarget:(id)arg1 ;
@end

