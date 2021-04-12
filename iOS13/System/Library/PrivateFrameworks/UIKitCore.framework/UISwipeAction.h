/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIContextualAction.h>

@class UIVisualEffect, UIColor, UIImage;

@interface UISwipeAction : UIContextualAction {

	BOOL _canBeTriggeredBySwipe;
	BOOL _resetsSwipedRow;
	UIVisualEffect* _backgroundEffect;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) UIColor * color; 
@property (nonatomic,copy) UIImage * icon; 
@property (nonatomic,copy) UIVisualEffect * backgroundEffect;              //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
@property (assign,nonatomic) BOOL canBeTriggeredBySwipe;                   //@synthesize canBeTriggeredBySwipe=_canBeTriggeredBySwipe - In the implementation block
@property (assign,nonatomic) BOOL resetsSwipedRow;                         //@synthesize resetsSwipedRow=_resetsSwipedRow - In the implementation block
+(id)swipeActionWithStyle:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)init;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(UIVisualEffect *)backgroundEffect;
-(void)setBackgroundEffect:(UIVisualEffect *)arg1 ;
-(BOOL)canBeTriggeredBySwipe;
-(BOOL)resetsSwipedRow;
-(void)setResetsSwipedRow:(BOOL)arg1 ;
-(void)setCanBeTriggeredBySwipe:(BOOL)arg1 ;
-(void)resetSwipedRow;
@end

