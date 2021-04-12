/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol IMDAutoReplying <NSObject>
@property (assign,nonatomic,__weak) id<IMDAutoReplyDelegate> replyDelegate; 
@required
-(void)setReplyDelegate:(id)arg1;
-(void)processMessages:(id)arg1 inChat:(id)arg2;
-(id<IMDAutoReplyDelegate>)replyDelegate;

@end

