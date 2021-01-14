/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIView;

@interface UIInputViewAnimationStyleExtraView : NSObject {

	int _clipContainerType;
	int _alignment;
	UIView* _view;
	/*^block*/id _animation;

}

@property (assign,nonatomic) int clipContainerType;              //@synthesize clipContainerType=_clipContainerType - In the implementation block
@property (nonatomic,retain) UIView * view;                      //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) int alignment;                      //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,copy) id animation;                         //@synthesize animation=_animation - In the implementation block
+(id)extraView:(id)arg1 withAlignment:(int)arg2 animation:(/*^block*/id)arg3 onSnapshot:(BOOL)arg4 ;
-(id)animation;
-(int)alignment;
-(void)setAnimation:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(void)setAlignment:(int)arg1 ;
-(UIView *)view;
-(void)setClipContainerType:(int)arg1 ;
-(int)clipContainerType;
-(void)dealloc;
@end

