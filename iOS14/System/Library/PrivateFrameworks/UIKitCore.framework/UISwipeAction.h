/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCompletionHandler:(id)arg1 ;
-(UIColor *)color;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(id)completionHandler;
-(void)setColor:(UIColor *)arg1 ;
-(void)setBackgroundEffect:(UIVisualEffect *)arg1 ;
-(BOOL)canBeTriggeredBySwipe;
-(void)resetSwipedRow;
-(BOOL)resetsSwipedRow;
-(void)setResetsSwipedRow:(BOOL)arg1 ;
-(void)setCanBeTriggeredBySwipe:(BOOL)arg1 ;
-(UIVisualEffect *)backgroundEffect;
@end

