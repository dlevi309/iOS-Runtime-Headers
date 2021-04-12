/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol IMDAutoReplying <NSObject>
@property (assign,nonatomic,__weak) id<IMDAutoReplyDelegate> replyDelegate; 
@required
-(void)setReplyDelegate:(id)arg1;
-(void)processMessages:(id)arg1 inChat:(id)arg2;
-(id<IMDAutoReplyDelegate>)replyDelegate;

@end

