/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@protocol PKPassDeleteAnimationControllerDelegate;
@class UIAlertController, PKPassView, PKPassGroupView;

@interface PKPassDeleteAnimationController : NSObject {

	UIAlertController* _alertController;
	id<PKPassDeleteAnimationControllerDelegate> _delegate;
	PKPassView* _passView;
	PKPassGroupView* _groupView;

}

@property (assign,nonatomic,__weak) id<PKPassDeleteAnimationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) PKPassView * passView;                                           //@synthesize passView=_passView - In the implementation block
@property (nonatomic,retain,readonly) PKPassGroupView * groupView;                                     //@synthesize groupView=_groupView - In the implementation block
+(void)performPassbookDeleteWithView:(id)arg1 inSuperview:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id<PKPassDeleteAnimationControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPassDeleteAnimationControllerDelegate>)arg1 ;
-(void)finished:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(PKPassView *)passView;
-(void)showInViewController:(id)arg1 ;
-(PKPassGroupView *)groupView;
-(void)_unregisterForEnterBackgroundNotification;
-(void)_startAnimation;
-(void)_registerForEnterBackgroundNotification;
-(id)initWithPassView:(id)arg1 groupView:(id)arg2 ;
-(void)forceDeleteAnimation;
@end

