/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <libobjc.A.dylib/IAMWebMessagePresentationCoordinatorDelegate.h>
#import <libobjc.A.dylib/IAMMessageTarget.h>

@class NSString, IAMMessageCoordinator, IAMWebMessagePresentationCoordinator, IAMMessage;

@interface IAMModalTarget : NSObject <IAMWebMessagePresentationCoordinatorDelegate, IAMMessageTarget> {

	IAMMessageCoordinator* _messageCoordinator;
	IAMWebMessagePresentationCoordinator* _webMessagePresentationCoordinator;
	IAMMessage* _priorityMessage;
	BOOL _isPresentingMessage;
	NSString* _targetIdentifier;

}

@property (nonatomic,readonly) NSString * targetIdentifier;              //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)isAnyModalTargetPresentingMessage;
-(void)dealloc;
-(void)unregister;
-(NSString *)targetIdentifier;
-(id)viewControllerForModalPresentationUsingCoordinator:(id)arg1 ;
-(void)webMessagePresentationCoordinatorWebMessageDidFail:(id)arg1 ;
-(void)webMessagePresentationCoordinatorWebMessageDidLoad:(id)arg1 ;
-(void)webMessagePresentationCoordinatorWebMessageDidFinishPresentation:(id)arg1 ;
-(void)webMessagePresentationCoordinatorWebMessageDidReportEvent:(id)arg1 event:(id)arg2 ;
-(void)webMessagePresentationCoordinatorWebMessageDidRequestAction:(id)arg1 actionConfiguration:(id)arg2 ;
-(void)_presentFromMessageEntry:(id)arg1 ;
-(void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3 ;
-(id)initWithMessageCoordinator:(id)arg1 targetIdentifier:(id)arg2 ;
@end

