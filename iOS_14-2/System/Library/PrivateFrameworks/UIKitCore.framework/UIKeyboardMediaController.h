/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldPrefetchRemoteView;
-(void)requestInsertionPointCompletion:(/*^block*/id)arg1 ;
-(void)dismissCard;
-(void)draggedStickerToPoint:(CGPoint)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)dismissCardIfNeeded;
-(void)setDelegate:(id<UIKeyboardMediaControllerDelegate>)arg1 ;
-(void)_didInsertMedia;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)_didPresentCard;
-(void)prefetchRecentsViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_embedRecentlyUsedMediaViewInView:(id)arg1 animated:(BOOL)arg2 ;
-(void)showRecentlyUsedMediaInView:(id)arg1 ;
-(void)_displayiMessageAppWithID:(id)arg1 ;
-(BOOL)shouldRetryFetchingRecents;
-(void)_tearDownRemoteViews;
-(void)_instantiateCardFromViewService;
-(void)dismissCardAnimated;
-(BOOL)recentsViewWillBeVisible;
-(void)pasteImageAtFileHandle:(id)arg1 ;
-(void)_instantiateViewServiceRecentlyUsedMediaWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentCard;
-(void)stageStickerWithFileHandle:(id)arg1 url:(id)arg2 accessibilityLabel:(id)arg3 ;
-(void)releaseRecentlyUsedMediaViewIfNeeded;
@end

