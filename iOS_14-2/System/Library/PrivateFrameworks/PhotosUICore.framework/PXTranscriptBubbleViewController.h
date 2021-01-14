/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PXTranscriptBubbleDelegate;
@class UIView;

@interface PXTranscriptBubbleViewController : UIViewController {

	BOOL _transitionInProgress;
	CGSize _lastRequestedSize;
	long long _lastResizeRequestID;
	BOOL _isReadyForDisplay;
	id<PXTranscriptBubbleDelegate> _delegate;
	UIView* _contentView;
	UIView* _targetContentView;

}

@property (nonatomic,retain) UIView * contentView;                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * targetContentView;                                  //@synthesize targetContentView=_targetContentView - In the implementation block
@property (assign,nonatomic,__weak) id<PXTranscriptBubbleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)viewWillLayoutSubviews;
-(id<PXTranscriptBubbleDelegate>)delegate;
-(void)setDelegate:(id<PXTranscriptBubbleDelegate>)arg1 ;
-(void)viewDidLoad;
-(CGSize)contentSizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(CGSize)_contentViewSizeThatFits:(CGSize)arg1 ;
-(CGSize)workaroundSizeForSize:(CGSize)arg1 ;
-(BOOL)_requiresResizeForCurrentSize:(CGSize)arg1 ;
-(void)setTargetContentView:(UIView *)arg1 ;
-(void)transitionToContentView:(id)arg1 ;
-(void)_scheduleContentViewUpdate;
-(void)_resizeTimeoutForRequestID:(long long)arg1 ;
-(void)_switchToPendingTargetViewIfNecessary;
-(UIView *)targetContentView;
-(void)viewDidLayoutSubviews;
@end

