/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKPinnedConversationActivityItemView.h>

@protocol CKPinnedConversationActivityItemViewDelegate;
@class CKPinnedConversationTypingBubbleActivityItem, CKPinnedConversationActivityItemViewBackdropLayer, CAShapeLayer, CKPinnedConversationActivityItemViewShadowLayer, CALayer, CAReplicatorLayer;

@interface CKPinnedConversationTypingBubble : UIView <CKPinnedConversationActivityItemView> {

	id<CKPinnedConversationActivityItemViewDelegate> _activityItemViewDelegate;
	long long _activityItemViewContentScale;
	long long _originationHorizontalDirection;
	CKPinnedConversationTypingBubbleActivityItem* _typingBubbleActivityItem;
	long long _originationDirection;
	double _preferredTailAttachmentPointXCoordinate;
	CKPinnedConversationActivityItemViewBackdropLayer* _backdropLayer;
	CAShapeLayer* _backdropMaskShapeLayer;
	CKPinnedConversationActivityItemViewShadowLayer* _broadShadowLayer;
	CKPinnedConversationActivityItemViewShadowLayer* _tightShadowLayer;
	CALayer* _thinkingDotContainer;
	CAShapeLayer* _thinkingDot;
	CAReplicatorLayer* _thinkingDots;
	CGSize _parentAvatarViewSize;
	CGPoint _originationPoint;

}

@property (nonatomic,retain) CKPinnedConversationActivityItemViewBackdropLayer * backdropLayer;                             //@synthesize backdropLayer=_backdropLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * backdropMaskShapeLayer;                                                         //@synthesize backdropMaskShapeLayer=_backdropMaskShapeLayer - In the implementation block
@property (nonatomic,retain) CKPinnedConversationActivityItemViewShadowLayer * broadShadowLayer;                            //@synthesize broadShadowLayer=_broadShadowLayer - In the implementation block
@property (nonatomic,retain) CKPinnedConversationActivityItemViewShadowLayer * tightShadowLayer;                            //@synthesize tightShadowLayer=_tightShadowLayer - In the implementation block
@property (nonatomic,retain) CALayer * thinkingDotContainer;                                                                //@synthesize thinkingDotContainer=_thinkingDotContainer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * thinkingDot;                                                                    //@synthesize thinkingDot=_thinkingDot - In the implementation block
@property (nonatomic,retain) CAReplicatorLayer * thinkingDots;                                                              //@synthesize thinkingDots=_thinkingDots - In the implementation block
@property (nonatomic,readonly) CKPinnedConversationTypingBubbleActivityItem * typingBubbleActivityItem;                     //@synthesize typingBubbleActivityItem=_typingBubbleActivityItem - In the implementation block
@property (assign,nonatomic) long long originationDirection;                                                                //@synthesize originationDirection=_originationDirection - In the implementation block
@property (assign,nonatomic) CGPoint originationPoint;                                                                      //@synthesize originationPoint=_originationPoint - In the implementation block
@property (assign,nonatomic) double preferredTailAttachmentPointXCoordinate;                                                //@synthesize preferredTailAttachmentPointXCoordinate=_preferredTailAttachmentPointXCoordinate - In the implementation block
@property (nonatomic,retain) id<CKPinnedConversationActivityItem> activityItem; 
@property (assign,nonatomic) long long originationHorizontalDirection;                                                      //@synthesize originationHorizontalDirection=_originationHorizontalDirection - In the implementation block
@property (nonatomic,readonly) CGPoint tailAttachmentPoint; 
@property (assign,nonatomic) CGSize parentAvatarViewSize;                                                                   //@synthesize parentAvatarViewSize=_parentAvatarViewSize - In the implementation block
@property (nonatomic,readonly) BOOL supportsActivityItemViewContentScale; 
@property (assign,nonatomic) long long activityItemViewContentScale;                                                        //@synthesize activityItemViewContentScale=_activityItemViewContentScale - In the implementation block
@property (nonatomic,readonly) BOOL supportsAlignmentWithOriginationSubAvatarFrame; 
@property (assign,nonatomic,__weak) id<CKPinnedConversationActivityItemViewDelegate> activityItemViewDelegate;              //@synthesize activityItemViewDelegate=_activityItemViewDelegate - In the implementation block
-(void)setBackdropLayer:(CKPinnedConversationActivityItemViewBackdropLayer *)arg1 ;
-(void)_updateUserInterfaceStyles;
-(id<CKPinnedConversationActivityItem>)activityItem;
-(void)setActivityItem:(id<CKPinnedConversationActivityItem>)arg1 ;
-(double)activityItemToContactItemVerticalOverlap;
-(long long)originationDirection;
-(void)setOriginationDirection:(long long)arg1 ;
-(CGPoint)originationPoint;
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
-(id)initWithActivityItem:(id)arg1 ;
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
-(CAShapeLayer *)thinkingDot;
-(CKPinnedConversationActivityItemViewBackdropLayer *)backdropLayer;
-(CAReplicatorLayer *)thinkingDots;
-(CGSize)largeBubbleSize;
-(CGSize)smallBubbleSize;
-(double)thinkingDotDiameter;
-(void)_updateThinkingDotColor;
-(double)thinkingDotOpacity;
-(double)thinkingDotSpace;
-(CGSize)thinkingDotContainerSize;
-(CALayer *)thinkingDotContainer;
-(id)thinkingDotColor;
-(unsigned long long)tailCornerAnchor;
-(void)calculateBezierPathWithOutputsForPath:(id*)arg1 largeBubbleFrame:(CGRect*)arg2 mediumBubbleFrame:(CGRect*)arg3 smallBubbleFrame:(CGRect*)arg4 ;
-(CGSize)mediumBubbleSize;
-(CGPoint)mediumBubbleOffset;
-(CGPoint)smallBubbleOffset;
-(double)largeBubbleCornerRadius;
-(CKPinnedConversationTypingBubbleActivityItem *)typingBubbleActivityItem;
-(void)setThinkingDotContainer:(CALayer *)arg1 ;
-(void)setThinkingDot:(CAShapeLayer *)arg1 ;
-(void)setThinkingDots:(CAReplicatorLayer *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

