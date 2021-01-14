/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class NSMutableArray, Protocol;

@interface SKInvocationQueueProxy : NSObject {

	NSMutableArray* _invocationQueue;
	id _invocationTarget;
	Protocol* _protocol;

}

@property (nonatomic,retain) id invocationTarget;              //@synthesize invocationTarget=_invocationTarget - In the implementation block
-(id)initWithProtocol:(id)arg1 ;
-(id)invocationTarget;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setInvocationTarget:(id)arg1 ;
@end

