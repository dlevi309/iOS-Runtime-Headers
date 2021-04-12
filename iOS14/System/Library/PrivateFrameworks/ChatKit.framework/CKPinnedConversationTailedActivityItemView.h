/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKPinnedConversationActivityItemView.h>

@protocol CKPinnedConversationActivityItem, CKPinnedConversationActivityItemViewDelegate;
@class UIView, CKPinnedConversationActivityItemViewBackdropLayer, CAShapeLayer, CKPinnedConversationActivityItemViewShadowLayer;

@interface CKPinnedConversationTailedActivityItemView : UIView <CKPinnedConversationActivityItemView> {

	id<CKPinnedConversationActivityItem> _activityItem;
	long long _originationDirection;
	long long _originationHorizontalDirection;
	double _preferredTailAttachmentPointXCoordinate;
	id<CKPinnedConversationActivityItemViewDelegate> _activityItemViewDelegate;
	long long _activityItemViewContentScale;
	UIView* _contentView;
	double _pillCornerRadius;
	CKPinnedConversationActivityItemViewBackdropLayer* _backdropLayer;
	CAShapeLayer* _backdropMaskShapeLayer;
	CKPinnedConversationActivityItemViewShadowLayer* _broadShadowLayer;
	CKPinnedConversationActivityItemViewShadowLayer* _tightShadowLayer;
	CAShapeLayer* _contentViewStrokeLayer;
	CGPoint _originationPoint;
	CGSize _parentAvatarViewSize;

}

@property (nonatomic,retain) CKPinnedConversationActivityItemViewBackdropLayer * backdropLayer;                             //@synthesize backdropLayer=_backdropLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * backdropMaskShapeLayer;                                                         //@synthesize backdropMaskShapeLayer=_backdropMaskShapeLayer - In the implementation block
@property (nonatomic,retain) CKPinnedConversationActivityItemViewShadowLayer * broadShadowLayer;                            //@synthesize broadShadowLayer=_broadShadowLayer - In the implementation block
@property (nonatomic,retain) CKPinnedConversationActivityItemViewShadowLayer * tightShadowLayer;                            //@synthesize tightShadowLayer=_tightShadowLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * contentViewStrokeLayer;                                                         //@synthesize contentViewStrokeLayer=_contentViewStrokeLayer - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) double pillCornerRadius;                                                                     //@synthesize pillCornerRadius=_pillCornerRadius - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentViewPadding; 
@property (nonatomic,readonly) double contentViewHorizontalInsetForPillCornerRadius; 
@property (nonatomic,readonly) long long contentViewContentMode; 
@property (nonatomic,retain) id<CKPinnedConversationActivityItem> activityItem;                                             //@synthesize activityItem=_activityItem - In the implementation block
@property (assign,nonatomic) long long originationDirection;                                                                //@synthesize originationDirection=_originationDirection - In the implementation block
@property (assign,nonatomic) long long originationHorizontalDirection;                                                      //@synthesize originationHorizontalDirection=_originationHorizontalDirection - In the implementation block
@property (assign,nonatomic) CGPoint originationPoint;                                                                      //@synthesize originationPoint=_originationPoint - In the implementation block
@property (assign,nonatomic) double preferredTailAttachmentPointXCoordinate;                                                //@synthesize preferredTailAttachmentPointXCoordinate=_preferredTailAttachmentPointXCoordinate - In the implementation block
@property (nonatomic,readonly) CGPoint tailAttachmentPoint; 
@property (assign,nonatomic) CGSize parentAvatarViewSize;                                                                   //@synthesize parentAvatarViewSize=_parentAvatarViewSize - In the implementation block
@property (nonatomic,readonly) BOOL supportsActivityItemViewContentScale; 
@property (assign,nonatomic) long long activityItemViewContentScale;                                                        //@synthesize activityItemViewContentScale=_activityItemViewContentScale - In the implementation block
@property (nonatomic,readonly) BOOL supportsAlignmentWithOriginationSubAvatarFrame; 
@property (assign,nonatomic,__weak) id<CKPinnedConversationActivityItemViewDelegate> activityItemViewDelegate;              //@synthesize activityItemViewDelegate=_activityItemViewDelegate - In the implementation block
-(id)_pathForTailedBalloonSegmentWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 anchorPoint:(CGPoint)arg3 originationHorizontalDirection:(long long)arg4 originationDirection:(long long)arg5 ;
-(void)setBackdropLayer:(CKPinnedConversationActivityItemViewBackdropLayer *)arg1 ;
-(CGRect)pillRect;
-(void)_updateUserInterfaceStyles;
-(id<CKPinnedConversationActivityItem>)activityItem;
-(void)setActivityItem:(id<CKPinnedConversationActivityItem>)arg1 ;
-(double)activityItemToContactItemVerticalOverlap;
-(long long)originationDirection;
-(void)setOriginationDirection:(long long)arg1 ;
-(CGPoint)originationPoint;
-(id)initWithActivityItem:(id)arg1 contentView:(id)arg2 needsContentViewStroke:(BOOL)arg3 ;
-(long long)contentViewContentMode;
-(long long)originationHorizontalDirection;
-(void)setOriginationHorizontalDirection:(long long)arg1 ;
-(void)setOriginationPoint:(CGPoint)arg1 ;
-(CKPinnedConversationActivityItemViewShadowLayer *)broadShadowLayer;
-(double)preferredTailAttachmentPointXCoordinate;
-(void)setPreferredTailAttachmentPointXCoordinate:(double)arg1 ;
-(CGPoint)tailAttachmentPoint;
-(CGSize)parentAvatarViewSize;
-(void)setParentAvatarViewSize:(CGSize)arg1 ;
-(BOOL)supportsActivityItemViewContentScale;
-(UIEdgeInsets)contentViewPadding;
-(double)contentViewHorizontalInsetForPillCornerRadius;
-(long long)activityItemViewContentScale;
-(void)setActivityItemViewContentScale:(long long)arg1 ;
-(id<CKPinnedConversationActivityItemViewDelegate>)activityItemViewDelegate;
-(CKPinnedConversationActivityItemViewShadowLayer *)tightShadowLayer;
-(BOOL)supportsAlignmentWithOriginationSubAvatarFrame;
-(void)setActivityItemViewDelegate:(id<CKPinnedConversationActivityItemViewDelegate>)arg1 ;
-(CAShapeLayer *)backdropMaskShapeLayer;
-(void)setBackdropMaskShapeLayer:(CAShapeLayer *)arg1 ;
-(void)setBroadShadowLayer:(CKPinnedConversationActivityItemViewShadowLayer *)arg1 ;
-(void)setTightShadowLayer:(CKPinnedConversationActivityItemViewShadowLayer *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CKPinnedConversationActivityItemViewBackdropLayer *)backdropLayer;
-(double)pillCornerRadius;
-(UIView *)contentView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)balloonTailWidth;
-(CGPoint)tailAttachmentPointWithOutputForMinimumContinousAnchorX:(double*)arg1 maximumContinuousAnchorX:(double*)arg2 ;
-(double)balloonTailHeight;
-(double)balloonTailRadius;
-(double)balloonCornerRadius;
-(CAShapeLayer *)contentViewStrokeLayer;
-(void)setContentViewStrokeLayer:(CAShapeLayer *)arg1 ;
@end

