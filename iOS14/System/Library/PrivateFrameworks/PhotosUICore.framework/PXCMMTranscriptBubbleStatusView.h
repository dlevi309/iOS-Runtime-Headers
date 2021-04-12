/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXUpdater, PXCMMTranscriptTextView, UIImageView, PXRoundedCornerOverlayView, UIActivityIndicatorView, PXCMMSpec, NSString;

@interface PXCMMTranscriptBubbleStatusView : UIView {

	PXUpdater* _updater;
	PXCMMTranscriptTextView* _textView;
	UIImageView* _iconImageView;
	PXRoundedCornerOverlayView* _roundedCornerOverlay;
	UIActivityIndicatorView* _activityIndicator;
	BOOL _showsActivityIndicator;
	PXCMMSpec* _spec;
	UIEdgeInsets _bubbleSafeAreaInsets;

}

@property (nonatomic,retain) PXCMMSpec * spec;                               //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) UIEdgeInsets bubbleSafeAreaInsets;              //@synthesize bubbleSafeAreaInsets=_bubbleSafeAreaInsets - In the implementation block
@property (nonatomic,copy) NSString * statusTitle; 
@property (nonatomic,copy) NSString * statusDescription; 
@property (assign,nonatomic) BOOL showsActivityIndicator;                    //@synthesize showsActivityIndicator=_showsActivityIndicator - In the implementation block
-(void)setSpec:(PXCMMSpec *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(PXCMMSpec *)spec;
-(void)layoutSubviews;
-(void)setShowsActivityIndicator:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStatusDescription:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_updateRoundedCornerOverlayView;
-(NSString *)statusDescription;
-(NSString *)statusTitle;
-(void)setStatusTitle:(NSString *)arg1 ;
-(CGSize)_performLayoutInSize:(CGSize)arg1 minimizingSize:(BOOL)arg2 updateSubviewFrames:(BOOL)arg3 ;
-(void)_updateActivityIndicator;
-(UIEdgeInsets)bubbleSafeAreaInsets;
-(void)setBubbleSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(BOOL)showsActivityIndicator;
@end

