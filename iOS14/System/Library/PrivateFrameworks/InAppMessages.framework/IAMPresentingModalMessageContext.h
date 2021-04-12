/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/


@class IAMMessage, IAMMessageGroup, UIViewController, NSTimer;

@interface IAMPresentingModalMessageContext : NSObject {

	IAMMessage* _message;
	IAMMessageGroup* _messageGroup;
	UIViewController* _presentingViewController;
	NSTimer* _presentationExpirationTimer;
	/*^block*/id _presentationHandler;

}

@property (nonatomic,retain) IAMMessage * message;                                            //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) IAMMessageGroup * messageGroup;                                  //@synthesize messageGroup=_messageGroup - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) NSTimer * presentationExpirationTimer;                           //@synthesize presentationExpirationTimer=_presentationExpirationTimer - In the implementation block
@property (nonatomic,copy) id presentationHandler;                                            //@synthesize presentationHandler=_presentationHandler - In the implementation block
-(void)setMessage:(IAMMessage *)arg1 ;
-(IAMMessage *)message;
-(NSTimer *)presentationExpirationTimer;
-(id)initWithMessage:(id)arg1 messageGroup:(id)arg2 presentingViewController:(id)arg3 presentationExpirationTimer:(id)arg4 presentationHandler:(/*^block*/id)arg5 ;
-(void)setPresentationExpirationTimer:(NSTimer *)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(IAMMessageGroup *)messageGroup;
-(void)setMessageGroup:(IAMMessageGroup *)arg1 ;
-(void)setPresentationHandler:(id)arg1 ;
-(id)presentationHandler;
@end

