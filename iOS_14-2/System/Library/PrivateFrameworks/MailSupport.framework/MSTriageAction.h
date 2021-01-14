/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/


@protocol MSTriageActionDelegate;
@class MSMessageListItemSelection, EMMessageRepository;

@interface MSTriageAction : NSObject {

	id<MSTriageActionDelegate> _delegate;
	MSMessageListItemSelection* _messageListItemSelection;

}

@property (nonatomic,readonly) MSMessageListItemSelection * messageListItemSelection;              //@synthesize messageListItemSelection=_messageListItemSelection - In the implementation block
@property (nonatomic,readonly) EMMessageRepository * messageRepository; 
@property (nonatomic,__weak,readonly) id<MSTriageActionDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
+(id)log;
+(void)_performAction:(id)arg1 messageRepository:(id)arg2 undoManager:(id)arg3 actionName:(id)arg4 ;
-(id)_changeAction;
-(id<MSTriageActionDelegate>)delegate;
-(EMMessageRepository *)messageRepository;
-(MSMessageListItemSelection *)messageListItemSelection;
-(void)performWithUndoManager:(id)arg1 actionName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 ;
@end

