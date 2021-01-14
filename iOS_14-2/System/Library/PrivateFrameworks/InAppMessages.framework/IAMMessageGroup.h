/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/


@protocol IAMMessageGroupInternalDelegate;
@class NSString, IAMMessageCoordinator;

@interface IAMMessageGroup : NSObject {

	NSString* _groupIdentifier;
	IAMMessageCoordinator* _messageCoordinator;
	id<IAMMessageGroupInternalDelegate> _internalDelegate;

}

@property (assign,nonatomic,__weak) IAMMessageCoordinator * messageCoordinator;                        //@synthesize messageCoordinator=_messageCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<IAMMessageGroupInternalDelegate> internalDelegate;              //@synthesize internalDelegate=_internalDelegate - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;                                             //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
-(BOOL)shouldPerformModalMessagePresentation;
-(NSString *)groupIdentifier;
-(void)setMessageCoordinator:(IAMMessageCoordinator *)arg1 ;
-(void)reportModalMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2 ;
-(void)reportContextPropertiesDidChange:(id)arg1 ;
-(void)reportModalMessagePresentationFailedWithIdentifier:(id)arg1 ;
-(void)reportModalMessageWasPresentedWithIdentifier:(id)arg1 ;
-(void)reportModalMessageWasDismissedWithIdentifier:(id)arg1 ;
-(IAMMessageCoordinator *)messageCoordinator;
-(id)contextPropertyWithName:(id)arg1 ;
-(id<IAMMessageGroupInternalDelegate>)internalDelegate;
-(void)viewControllerForModalMessagePresentation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithGroupIdentifier:(id)arg1 ;
-(void)setInternalDelegate:(id<IAMMessageGroupInternalDelegate>)arg1 ;
-(void)performModalMessagePresentation:(id)arg1 fromViewController:(id)arg2 ;
-(void)receiveEvent:(id)arg1 ;
@end

