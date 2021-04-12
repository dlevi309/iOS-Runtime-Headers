/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <libobjc.A.dylib/IAMWebMessagePresentationCoordinatorDelegate.h>
#import <libobjc.A.dylib/IAMMessageGroupInternalDelegate.h>
#import <libobjc.A.dylib/IAMMessageTarget.h>

@class NSString, IAMMessageCoordinator, IAMWebMessagePresentationCoordinator, IAMPresentingModalMessageContext, NSDictionary;

@interface IAMModalTarget : NSObject <IAMWebMessagePresentationCoordinatorDelegate, IAMMessageGroupInternalDelegate, IAMMessageTarget> {

	IAMMessageCoordinator* _messageCoordinator;
	IAMWebMessagePresentationCoordinator* _webMessagePresentationCoordinator;
	IAMPresentingModalMessageContext* _presentingMessageContext;
	NSString* _targetIdentifier;
	NSDictionary* _messageGroupsByGroupIdentifier;

}

@property (nonatomic,retain) IAMPresentingModalMessageContext * presentingMessageContext;              //@synthesize presentingMessageContext=_presentingMessageContext - In the implementation block
@property (nonatomic,readonly) NSString * targetIdentifier;                                            //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * messageGroupsByGroupIdentifier;                              //@synthesize messageGroupsByGroupIdentifier=_messageGroupsByGroupIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)isAnyModalTargetPresentingMessage;
-(void)webMessagePresentationCoordinatorWebMessageDidFinishPresentation:(id)arg1 ;
-(void)_handlePresentingMessageContextDidExpireBeforePresentation;
-(void)webMessagePresentationCoordinatorWebMessageDidRequestAction:(id)arg1 actionConfiguration:(id)arg2 ;
-(id)_applicationViewControllerForModalPresentation;
-(void)_reportMessageDidDisappearWithIdentifier:(id)arg1 ;
-(void)_reportMessageDidAppearWithIdentifier:(id)arg1 ;
-(id)initWithMessageCoordinator:(id)arg1 targetIdentifier:(id)arg2 ;
-(void)messageGroup:(id)arg1 didReportModalMessagePresentationFailedWithIdentifier:(id)arg2 ;
-(void)webMessagePresentationCoordinatorWebMessageDidReportEvent:(id)arg1 event:(id)arg2 ;
-(void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 fromMessageEntry:(id)arg3 forTarget:(id)arg4 ;
-(IAMPresentingModalMessageContext *)presentingMessageContext;
-(void)_presentWebModalMessageEntry:(id)arg1 ;
-(void)messageGroup:(id)arg1 didReportModalMessageWasPresentedWithIdentifier:(id)arg2 ;
-(void)_presentMessage:(id)arg1 messageEntry:(id)arg2 fromViewController:(id)arg3 ;
-(void)webMessagePresentationCoordinatorWebMessageDidLoad:(id)arg1 ;
-(void)webMessagePresentationCoordinatorWebMessageDidFail:(id)arg1 ;
-(void)messageGroup:(id)arg1 didReportModalMessageWithIdentifier:(id)arg2 actionWasPerformedWithIdentifier:(id)arg3 ;
-(void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3 ;
-(NSDictionary *)messageGroupsByGroupIdentifier;
-(NSString *)targetIdentifier;
-(void)_handlePresentation:(id)arg1 ;
-(void)setMessageGroupsByGroupIdentifier:(NSDictionary *)arg1 ;
-(void)presentationControllerDismissalTransitionDidEnd:(id)arg1 ;
-(void)setPresentingMessageContext:(IAMPresentingModalMessageContext *)arg1 ;
-(id)viewControllerForModalPresentationUsingCoordinator:(id)arg1 ;
-(void)dealloc;
-(void)messageGroup:(id)arg1 didReportModalMessageWasDismissedWithIdentifier:(id)arg2 ;
@end

