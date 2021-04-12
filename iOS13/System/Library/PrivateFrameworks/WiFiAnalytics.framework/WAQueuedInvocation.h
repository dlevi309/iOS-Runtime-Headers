/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/


@class NSInvocation;

@interface WAQueuedInvocation : NSObject {

	NSInvocation* _invocation;
	/*^block*/id _reply;

}

@property (nonatomic,retain) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
@property (nonatomic,copy) id reply;                                 //@synthesize reply=_reply - In the implementation block
-(NSInvocation *)invocation;
-(id)reply;
-(void)setInvocation:(NSInvocation *)arg1 ;
-(void)setReply:(id)arg1 ;
@end

