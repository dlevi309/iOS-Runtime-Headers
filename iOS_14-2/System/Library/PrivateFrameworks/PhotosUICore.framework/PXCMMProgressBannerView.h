/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PXCMMProgressBannerViewDelegate;
@class PXMomentShareStatusPresentation, UIVisualEffectView, UITextView, UILabel, UIProgressView, UIAlertController, NSString;

@interface PXCMMProgressBannerView : UIView <PXChangeObserver, UITextViewDelegate> {

	PXMomentShareStatusPresentation* _momentShareStatusPresentation;
	UIVisualEffectView* _visualEffectView;
	UITextView* _activityTextView;
	UILabel* _pauseLabel;
	UIProgressView* _progressView;
	double _layoutHeight;
	id<PXCMMProgressBannerViewDelegate> _delegate;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) UIAlertController * alertController;                              //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMProgressBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double layoutHeight;                                            //@synthesize layoutHeight=_layoutHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id<PXCMMProgressBannerViewDelegate>)delegate;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_updateActivityTitle;
-(void)_updatePauseTitle;
-(double)layoutHeight;
-(UIAlertController *)alertController;
-(void)setDelegate:(id<PXCMMProgressBannerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithMomentShareStatusPresentation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
@end

