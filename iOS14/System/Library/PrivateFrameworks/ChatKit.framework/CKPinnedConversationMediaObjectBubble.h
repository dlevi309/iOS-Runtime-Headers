/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKPinnedConversationTailedActivityItemView.h>

@class CKPinnedConversationMediaObjectActivityItem, UIImageView, NSLayoutConstraint;

@interface CKPinnedConversationMediaObjectBubble : CKPinnedConversationTailedActivityItemView {

	double _pillCornerRadius;
	long long _activityItemViewContentScale;
	CKPinnedConversationMediaObjectActivityItem* _mediaObjectActivityItem;
	UIImageView* _imageView;
	NSLayoutConstraint* _imageViewWidthConstraint;
	NSLayoutConstraint* _imageViewHeightConstraint;

}

@property (nonatomic,retain) UIImageView * imageView;                                                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewWidthConstraint;                                        //@synthesize imageViewWidthConstraint=_imageViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewHeightConstraint;                                       //@synthesize imageViewHeightConstraint=_imageViewHeightConstraint - In the implementation block
@property (nonatomic,readonly) CKPinnedConversationMediaObjectActivityItem * mediaObjectActivityItem;              //@synthesize mediaObjectActivityItem=_mediaObjectActivityItem - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(UIImageView *)imageView;
-(CGSize)_imageViewSize;
-(void)setActivityItem:(id)arg1 ;
-(void)_updateMediaObjectPreview;
-(void)_updatePillCornerRadius;
-(long long)contentViewContentMode;
-(void)_updateImageViewSizeConstraints;
-(BOOL)isAnimojiVideo;
-(void)setParentAvatarViewSize:(CGSize)arg1 ;
-(BOOL)supportsActivityItemViewContentScale;
-(id)initWithMediaObjectActivityItem:(id)arg1 ;
-(UIEdgeInsets)contentViewPadding;
-(double)contentViewHorizontalInsetForPillCornerRadius;
-(CKPinnedConversationMediaObjectActivityItem *)mediaObjectActivityItem;
-(NSLayoutConstraint *)imageViewWidthConstraint;
-(void)setImageViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageViewHeightConstraint;
-(long long)activityItemViewContentScale;
-(void)setActivityItemViewContentScale:(long long)arg1 ;
-(void)setImageViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)supportsAlignmentWithOriginationSubAvatarFrame;
-(BOOL)isSticker;
-(id)_previewImage;
-(double)pillCornerRadius;
@end

