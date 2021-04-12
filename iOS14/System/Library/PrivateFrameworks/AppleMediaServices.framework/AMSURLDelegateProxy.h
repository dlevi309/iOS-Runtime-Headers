/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)delegate;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 ;
-(AMSURLSession *)session;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)invalidate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

