/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSURLSession;

@interface AMSURLDelegateProxy : NSObject {

	AMSURLSession* _session;
	id _delegate;

}

@property (nonatomic,__weak,readonly) AMSURLSession * session;              //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                            //@synthesize delegate=_delegate - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)invalidate;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(AMSURLSession *)session;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 ;
@end

