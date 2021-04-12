/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKPinnedConversationActivityItemView
@property (nonatomic,retain) id<CKPinnedConversationActivityItem> activityItem; 
@property (assign,nonatomic) long long originationDirection; 
@property (assign,nonatomic) long long originationHorizontalDirection; 
@property (assign,nonatomic) CGPoint originationPoint; 
@property (assign,nonatomic) double preferredTailAttachmentPointXCoordinate; 
@property (nonatomic,readonly) CGPoint tailAttachmentPoint; 
@property (assign,nonatomic) CGSize parentAvatarViewSize; 
@property (nonatomic,readonly) BOOL supportsActivityItemViewContentScale; 
@property (assign,nonatomic) long long activityItemViewContentScale; 
@property (nonatomic,readonly) BOOL supportsAlignmentWithOriginationSubAvatarFrame; 
@property (assign,nonatomic,__weak) id<CKPinnedConversationActivityItemViewDelegate> activityItemViewDelegate; 
@required
-(id<CKPinnedConversationActivityItem>)activityItem;
-(void)setActivityItem:(id)arg1;
-(double)activityItemToContactItemVerticalOverlap;
-(long long)originationDirection;
-(void)setOriginationDirection:(long long)arg1;
-(CGPoint)originationPoint;
-(long long)originationHorizontalDirection;
-(void)setOriginationHorizontalDirection:(long long)arg1;
-(void)setOriginationPoint:(CGPoint)arg1;
-(double)preferredTailAttachmentPointXCoordinate;
-(void)setPreferredTailAttachmentPointXCoordinate:(double)arg1;
-(CGPoint)tailAttachmentPoint;
-(CGSize)parentAvatarViewSize;
-(void)setParentAvatarViewSize:(CGSize)arg1;
-(BOOL)supportsActivityItemViewContentScale;
-(long long)activityItemViewContentScale;
-(void)setActivityItemViewContentScale:(long long)arg1;
-(id<CKPinnedConversationActivityItemViewDelegate>)activityItemViewDelegate;
-(BOOL)supportsAlignmentWithOriginationSubAvatarFrame;
-(void)setActivityItemViewDelegate:(id)arg1;

@end

