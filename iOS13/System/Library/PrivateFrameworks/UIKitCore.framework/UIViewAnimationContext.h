/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray, UITableViewCell;

@interface UIViewAnimationContext : NSObject {

	NSArray* _viewAnimations;
	long long _animationCount;
	/*^block*/id _completionHandler;
	UITableViewCell* _swipeToDeleteCell;

}

@property (nonatomic,retain) NSArray * viewAnimations;                         //@synthesize viewAnimations=_viewAnimations - In the implementation block
@property (assign,nonatomic) long long animationCount;                         //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,readonly) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UITableViewCell * swipeToDeleteCell;              //@synthesize swipeToDeleteCell=_swipeToDeleteCell - In the implementation block
-(id)completionHandler;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)animationCount;
-(void)setAnimationCount:(long long)arg1 ;
-(void)setViewAnimations:(NSArray *)arg1 ;
-(NSArray *)viewAnimations;
-(UITableViewCell *)swipeToDeleteCell;
-(void)setSwipeToDeleteCell:(UITableViewCell *)arg1 ;
@end

