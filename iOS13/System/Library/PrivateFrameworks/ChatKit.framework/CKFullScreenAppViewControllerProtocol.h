/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKFullScreenAppViewControllerProtocol <NSObject>
@property (nonatomic,retain) UIViewController*<CKBrowserViewControllerProtocol> contentViewController; 
@property (assign,nonatomic,__weak) id<CKFullScreenAppViewControllerDelegate> delegate; 
@required
-(id<CKFullScreenAppViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setContentViewController:(id)arg1;
-(UIViewController*<CKBrowserViewControllerProtocol>)contentViewController;
-(id)initWithConversation:(id)arg1 plugin:(id)arg2;
-(void)animateBrowserViewFromSourceRect:(CGRect)arg1 interactive:(BOOL)arg2 grabberView:(id)arg3 completion:(/*^block*/id)arg4;
-(void)animateBrowserViewToTargetRect:(CGRect)arg1 grabberView:(id)arg2 completion:(/*^block*/id)arg3;

@end

