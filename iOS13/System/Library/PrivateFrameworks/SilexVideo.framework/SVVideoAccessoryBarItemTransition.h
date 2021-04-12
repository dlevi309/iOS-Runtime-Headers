/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVAccessoryItem, SVVideoAccessoryItemTransitioning;
@class SVVideoAccessoryBarItemTransitionContext;

@interface SVVideoAccessoryBarItemTransition : NSObject {

	id<SVAccessoryItem> _fromItem;
	id<SVAccessoryItem> _toItem;
	id<SVVideoAccessoryItemTransitioning> _transitionCoordinator;
	SVVideoAccessoryBarItemTransitionContext* _context;

}

@property (nonatomic,retain) SVVideoAccessoryBarItemTransitionContext * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<SVAccessoryItem> fromItem;                                             //@synthesize fromItem=_fromItem - In the implementation block
@property (nonatomic,readonly) id<SVAccessoryItem> toItem;                                               //@synthesize toItem=_toItem - In the implementation block
@property (nonatomic,readonly) id<SVVideoAccessoryItemTransitioning> transitionCoordinator;              //@synthesize transitionCoordinator=_transitionCoordinator - In the implementation block
-(void)cancel;
-(SVVideoAccessoryBarItemTransitionContext *)context;
-(void)setContext:(SVVideoAccessoryBarItemTransitionContext *)arg1 ;
-(id<SVVideoAccessoryItemTransitioning>)transitionCoordinator;
-(id<SVAccessoryItem>)fromItem;
-(id<SVAccessoryItem>)toItem;
-(id)initWithFromItem:(id)arg1 toItem:(id)arg2 transitionCoordinator:(id)arg3 ;
-(void)performTransitionOnContainerView:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

