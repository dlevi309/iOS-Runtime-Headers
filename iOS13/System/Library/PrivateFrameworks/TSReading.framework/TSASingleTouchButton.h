/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImage;

@interface TSASingleTouchButton : UIButton {

	UIImage* _touchImage;
	BOOL _showsTouchOnTopWhenHighlighted;

}

@property (assign,nonatomic) BOOL showsTouchOnTopWhenHighlighted;              //@synthesize showsTouchOnTopWhenHighlighted=_showsTouchOnTopWhenHighlighted - In the implementation block
@property (nonatomic,retain) UIImage * touchImage;                             //@synthesize touchImage=_touchImage - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UIImage *)touchImage;
-(CGPoint)_pressFeedbackPosition;
-(id)_pressFeedbackImage;
-(void)setShowsTouchOnTopWhenHighlighted:(BOOL)arg1 ;
-(void)setTouchImage:(UIImage *)arg1 ;
-(BOOL)showsTouchOnTopWhenHighlighted;
@end

