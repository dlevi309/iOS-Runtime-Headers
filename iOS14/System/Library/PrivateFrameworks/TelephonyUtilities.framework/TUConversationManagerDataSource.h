/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

@class NSDictionary;


@protocol TUConversationManagerDataSource <NSObject>
@property (nonatomic,copy,readonly) NSDictionary * conversationsByGroupUUID; 
@property (assign,nonatomic,__weak) id<TUConversationManagerDataSourceDelegate> delegate; 
@property (assign,nonatomic,__weak) id<TUConversationMediaControllerDataSourceDelegate> mediaDelegate; 
@required
-(void)setMediaDelegate:(id)arg1;
-(NSDictionary *)conversationsByGroupUUID;
-(id<TUConversationManagerDataSourceDelegate>)delegate;
-(void)addRemoteMembers:(id)arg1 toConversation:(id)arg2;
-(void)buzzMember:(id)arg1 conversation:(id)arg2;
-(void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2;
-(void)setDelegate:(id)arg1;
-(void)invalidate;
-(id<TUConversationMediaControllerDataSourceDelegate>)mediaDelegate;
-(void)setDownlinkMuted:(BOOL)arg1 forRemoteParticipantsInConversation:(id)arg2;
-(void)registerWithCompletionHandler:(/*^block*/id)arg1;

@end

