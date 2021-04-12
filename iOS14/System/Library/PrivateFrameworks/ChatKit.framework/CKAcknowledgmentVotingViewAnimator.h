/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKAcknowledgmentVotingViewAnimatorDelegate;
@class UIView, NSArray;

@interface CKAcknowledgmentVotingViewAnimator : NSObject {

	UIView* _animationContainerView;
	id<CKAcknowledgmentVotingViewAnimatorDelegate> _delegate;
	NSArray* _sectionAnimators;
	NSArray* _animatorModelItems;

}

@property (nonatomic,retain) UIView * animationContainerView;                                             //@synthesize animationContainerView=_animationContainerView - In the implementation block
@property (nonatomic,copy) NSArray * sectionAnimators;                                                    //@synthesize sectionAnimators=_sectionAnimators - In the implementation block
@property (nonatomic,copy) NSArray * animatorModelItems;                                                  //@synthesize animatorModelItems=_animatorModelItems - In the implementation block
@property (assign,nonatomic,__weak) id<CKAcknowledgmentVotingViewAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CKAcknowledgmentVotingViewAnimatorDelegate>)delegate;
-(void)setAnimationContainerView:(UIView *)arg1 ;
-(void)setAnimatorModelItems:(NSArray *)arg1 ;
-(void)setSectionAnimators:(NSArray *)arg1 ;
-(NSArray *)sectionAnimators;
-(NSArray *)animatorModelItems;
-(void)setDelegate:(id<CKAcknowledgmentVotingViewAnimatorDelegate>)arg1 ;
-(id)initWithCollectionView:(id)arg1 animatorModelItems:(id)arg2 acknowledgmentTypes:(id)arg3 ;
-(UIView *)animationContainerView;
-(void)startAnimationWithDelay:(double)arg1 ;
@end

