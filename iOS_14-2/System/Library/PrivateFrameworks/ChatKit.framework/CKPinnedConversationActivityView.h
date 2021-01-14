/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKPinnedConversationActivityItemViewDelegate.h>

@class NSMutableArray, CKPinnedConversationActivitySnapshot, CAShapeLayer, NSArray, NSString;

@interface CKPinnedConversationActivityView : UIView <CKPinnedConversationActivityItemViewDelegate> {

	BOOL _suppressingActivity;
	BOOL _showContentAlignmentDebugFrames;
	long long _activityItemOriginationDirection;
	NSMutableArray* _activityItemViews;
	NSMutableArray* _contactItemViews;
	CKPinnedConversationActivitySnapshot* _latestSnapshot;
	CAShapeLayer* _innerContentAlignmentDebugLayer;
	CAShapeLayer* _outerContentAlignmentDebugLayer;
	CAShapeLayer* _activityItemAttachmentCircleDebugLayer;
	CAShapeLayer* _originationPointDebugLayer;
	CGPoint _activityItemOriginationPoint;
	CGRect _avatarFrame;
	CGRect _innerContentAlignmentFrame;
	CGRect _outerContentAlignmentFrame;
	CGRect _activityItemOriginationSubAvatarFrame;

}

@property (nonatomic,retain) NSMutableArray * activityItemViews;                                 //@synthesize activityItemViews=_activityItemViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * contactItemViews;                                  //@synthesize contactItemViews=_contactItemViews - In the implementation block
@property (nonatomic,retain) CKPinnedConversationActivitySnapshot * latestSnapshot;              //@synthesize latestSnapshot=_latestSnapshot - In the implementation block
@property (nonatomic,retain) CAShapeLayer * innerContentAlignmentDebugLayer;                     //@synthesize innerContentAlignmentDebugLayer=_innerContentAlignmentDebugLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerContentAlignmentDebugLayer;                     //@synthesize outerContentAlignmentDebugLayer=_outerContentAlignmentDebugLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * activityItemAttachmentCircleDebugLayer;              //@synthesize activityItemAttachmentCircleDebugLayer=_activityItemAttachmentCircleDebugLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * originationPointDebugLayer;                          //@synthesize originationPointDebugLayer=_originationPointDebugLayer - In the implementation block
@property (assign,nonatomic) CGRect avatarFrame;                                                 //@synthesize avatarFrame=_avatarFrame - In the implementation block
@property (assign,nonatomic) CGRect innerContentAlignmentFrame;                                  //@synthesize innerContentAlignmentFrame=_innerContentAlignmentFrame - In the implementation block
@property (assign,nonatomic) CGRect outerContentAlignmentFrame;                                  //@synthesize outerContentAlignmentFrame=_outerContentAlignmentFrame - In the implementation block
@property (assign,nonatomic) long long activityItemOriginationDirection;                         //@synthesize activityItemOriginationDirection=_activityItemOriginationDirection - In the implementation block
@property (assign,nonatomic) CGPoint activityItemOriginationPoint;                               //@synthesize activityItemOriginationPoint=_activityItemOriginationPoint - In the implementation block
@property (assign,nonatomic) CGRect activityItemOriginationSubAvatarFrame;                       //@synthesize activityItemOriginationSubAvatarFrame=_activityItemOriginationSubAvatarFrame - In the implementation block
@property (assign,getter=isSuppressingActivity,nonatomic) BOOL suppressingActivity;              //@synthesize suppressingActivity=_suppressingActivity - In the implementation block
@property (assign,nonatomic) BOOL showContentAlignmentDebugFrames;                               //@synthesize showContentAlignmentDebugFrames=_showContentAlignmentDebugFrames - In the implementation block
@property (nonatomic,readonly) NSArray * displayedContacts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_layoutViewsAssociatedWithActivityItemViews:(id)arg1 excludingContactItemViews:(id)arg2 withContentScale:(id)arg3 applyingTransform:(BOOL)arg4 updatingActivityItemViews:(BOOL)arg5 updatingAttachedContactItemViews:(BOOL)arg6 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)avatarFrame;
-(id)_unattachedContactItemViews;
-(NSMutableArray *)contactItemViews;
-(void)_layoutUnattachedContactItemViews:(id)arg1 withContentScale:(id)arg2 applyingTransform:(BOOL)arg3 ;
-(double)activityItemAttachmentCircleRadiusInsetForAvatarFrame:(CGRect)arg1 ;
-(BOOL)isSuppressingActivity;
-(void)_updateSnapshotAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_presentedActivityItems;
-(id)contactItemViewMatchingContactItemIdentifier:(id)arg1 fromContactItemViews:(id)arg2 ;
-(id)_activityItemViewWithActivityItemIdentifier:(id)arg1 ;
-(BOOL)haveAttachedContactItemViewsForActivityViews:(id)arg1 ;
-(void)setAvatarFrame:(CGRect)arg1 ;
-(CGRect)activityItemOriginationSubAvatarFrame;
-(double)contactItemViewDiameterForAvatarFrame:(CGRect)arg1 ;
-(CGPoint)activityItemOriginationPoint;
-(long long)activityItemOriginationDirection;
-(long long)activityViewContentAlignmentForContactItemAlignment:(long long)arg1 ;
-(NSMutableArray *)activityItemViews;
-(double)contactItemViewCenterXCoordinateForYCoordinate:(double)arg1 avatarFrame:(CGRect)arg2 contentAlignment:(long long)arg3 ;
-(void)activityItemViewNeedsResize:(id)arg1 ;
-(double)tailAttachmentXCoordinateForYCoordinate:(double)arg1 avatarFrame:(CGRect)arg2 contentAlignment:(long long)arg3 ;
-(void)setShowContentAlignmentDebugFrames:(BOOL)arg1 ;
-(CGPoint)_convertPointInOwnCoordinateSpace:(CGPoint)arg1 toUnscaledCoordinateSpaceOfSubview:(id)arg2 ;
-(void)setActivityItemOriginationDirection:(long long)arg1 ;
-(BOOL)nextContactItemIsClockwiseForOriginationDirection:(long long)arg1 contactItemAlignment:(long long)arg2 ;
-(void)setInnerContentAlignmentFrame:(CGRect)arg1 ;
-(CGPoint)pointAlongCircle:(CGRect)arg1 atArcLength:(double)arg2 fromPoint:(CGPoint)arg3 clockwise:(BOOL)arg4 ;
-(void)setSuppressingActivity:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)circleXCoordinateForYCoordinate:(double)arg1 radius:(double)arg2 centerPoint:(CGPoint)arg3 contentAlignment:(long long)arg4 ;
-(void)setOuterContentAlignmentFrame:(CGRect)arg1 ;
-(void)setActivityItemOriginationPoint:(CGPoint)arg1 ;
-(void)applySnapshot:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)displayedContacts;
-(void)resetToEmptySnapshot;
-(void)setSuppressingActivity:(BOOL)arg1 ;
-(CGRect)innerContentAlignmentFrame;
-(CGRect)outerContentAlignmentFrame;
-(void)setActivityItemViews:(NSMutableArray *)arg1 ;
-(void)setActivityItemOriginationSubAvatarFrame:(CGRect)arg1 ;
-(BOOL)showContentAlignmentDebugFrames;
-(void)setContactItemViews:(NSMutableArray *)arg1 ;
-(CKPinnedConversationActivitySnapshot *)latestSnapshot;
-(void)setLatestSnapshot:(CKPinnedConversationActivitySnapshot *)arg1 ;
-(CAShapeLayer *)innerContentAlignmentDebugLayer;
-(void)setInnerContentAlignmentDebugLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)outerContentAlignmentDebugLayer;
-(void)setOuterContentAlignmentDebugLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)activityItemAttachmentCircleDebugLayer;
-(void)setActivityItemAttachmentCircleDebugLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)originationPointDebugLayer;
-(void)setOriginationPointDebugLayer:(CAShapeLayer *)arg1 ;
@end

