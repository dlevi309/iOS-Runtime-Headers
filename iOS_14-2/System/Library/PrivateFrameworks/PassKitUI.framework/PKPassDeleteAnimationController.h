/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKPassView *)passView;
-(id<PKPassDeleteAnimationControllerDelegate>)delegate;
-(void)finished:(BOOL)arg1 ;
-(void)_startAnimation;
-(PKPassGroupView *)groupView;
-(void)setDelegate:(id<PKPassDeleteAnimationControllerDelegate>)arg1 ;
-(void)_unregisterForEnterBackgroundNotification;
-(void)_registerForEnterBackgroundNotification;
-(id)initWithPassView:(id)arg1 groupView:(id)arg2 ;
-(void)showInViewController:(id)arg1 ;
-(void)forceDeleteAnimation;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)dealloc;
@end

