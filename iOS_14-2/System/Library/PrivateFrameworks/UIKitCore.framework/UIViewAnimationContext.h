/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)viewAnimations;
-(UITableViewCell *)swipeToDeleteCell;
-(id)completionHandler;
-(long long)animationCount;
-(void)setAnimationCount:(long long)arg1 ;
-(void)setSwipeToDeleteCell:(UITableViewCell *)arg1 ;
-(void)setViewAnimations:(NSArray *)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
@end

