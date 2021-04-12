/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIKeyboardMediaServiceRemoteViewControllerDelegate.h>

@protocol UIKeyboardMediaControllerDelegate;
@class UIViewController, _UIAsyncInvocation, UIView, _UITextDragCaretView, NSString;

@interface UIKeyboardMediaController : NSObject <UIKeyboardMediaServiceRemoteViewControllerDelegate> {

	UIViewController* _remoteCardViewController;
	_UIAsyncInvocation* _remoteCardViewControllerRequest;
	UIViewController* _recentlyUsedMediaViewController;
	_UIAsyncInvocation* _recentlyUsedMediaViewControllerRequest;
	UIView* _targetViewAwaitingRecents;
	BOOL _hasRequestedRecentlyUsedMediaViewController;
	unsigned long long _viewServiceTerminationCount;
	_UITextDragCaretView* _dropCaret;
	BOOL _shouldRetryFetchingRecents;
	id<UIKeyboardMediaControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UIKeyboardMediaControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldRetryFetchingRecents;                                  //@synthesize shouldRetryFetchingRecents=_shouldRetryFetchingRecents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedKeyboardMediaController;
-(id<UIKeyboardMediaControllerDelegate>)delegate;
-(void)setDelegate:(id<UIKeyboardMediaControllerDelegate>)arg1 ;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(BOOL)recentsViewWillBeVisible;
-(void)_embedRecentlyUsedMediaViewInView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_instantiateViewServiceRecentlyUsedMediaWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prefetchRecentsViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)releaseRecentlyUsedMediaViewIfNeeded;
-(void)dismissCardIfNeeded;
-(void)_tearDownRemoteViews;
-(void)dismissCardAnimated;
-(void)_displayiMessageAppWithID:(id)arg1 ;
-(void)_instantiateCardFromViewService;
-(void)dismissCard;
-(void)pasteImageAtFileHandle:(id)arg1 ;
-(void)presentCard;
-(void)stageStickerWithFileHandle:(id)arg1 url:(id)arg2 accessibilityLabel:(id)arg3 ;
-(void)requestInsertionPointCompletion:(/*^block*/id)arg1 ;
-(void)draggedStickerToPoint:(CGPoint)arg1 ;
-(BOOL)shouldPrefetchRemoteView;
-(void)showRecentlyUsedMediaInView:(id)arg1 ;
-(BOOL)shouldRetryFetchingRecents;
@end

