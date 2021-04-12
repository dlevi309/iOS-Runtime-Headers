/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

@class NSDictionary;


@protocol TUConversationManagerDataSource <NSObject>
@property (nonatomic,copy,readonly) NSDictionary * conversationsByGroupUUID; 
@property (assign,nonatomic,__weak) id<TUConversationManagerDataSourceDelegate> delegate; 
@property (assign,nonatomic,__weak) id<TUConversationMediaControllerDataSourceDelegate> mediaDelegate; 
@required
-(void)invalidate;
-(id<TUConversationManagerDataSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setMediaDelegate:(id)arg1;
-(void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2;
-(NSDictionary *)conversationsByGroupUUID;
-(void)registerWithCompletionHandler:(/*^block*/id)arg1;
-(void)addRemoteMembers:(id)arg1 toConversation:(id)arg2;
-(void)buzzMember:(id)arg1 conversation:(id)arg2;
-(void)setDownlinkMuted:(BOOL)arg1 forRemoteParticipantsInConversation:(id)arg2;
-(id<TUConversationMediaControllerDataSourceDelegate>)mediaDelegate;

@end

