/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKFullScreenAppViewControllerProtocol <NSObject>
@property (nonatomic,retain) UIViewController*<CKBrowserViewControllerProtocol> contentViewController; 
@property (assign,nonatomic,__weak) id<CKFullScreenAppViewControllerDelegate> delegate; 
@required
-(id<CKFullScreenAppViewControllerDelegate>)delegate;
-(void)setContentViewController:(id)arg1;
-(void)animateBrowserViewFromSourceRect:(CGRect)arg1 interactive:(BOOL)arg2 grabberView:(id)arg3 completion:(/*^block*/id)arg4;
-(void)animateBrowserViewToTargetRect:(CGRect)arg1 grabberView:(id)arg2 completion:(/*^block*/id)arg3;
-(UIViewController*<CKBrowserViewControllerProtocol>)contentViewController;
-(void)setDelegate:(id)arg1;
-(id)initWithConversation:(id)arg1 plugin:(id)arg2;

@end

