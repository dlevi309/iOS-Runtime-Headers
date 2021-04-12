/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol NCNotificationActionRunner <NSObject>
@property (assign,nonatomic) BOOL shouldForwardAction; 
@required
-(void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5;
-(BOOL)shouldForwardAction;
-(void)setShouldForwardAction:(BOOL)arg1;

@end

