/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <UIKitCore/UIButton.h>

@interface SVButton : UIButton {

	/*^block*/id _touchUpInsideBlock;
	UIEdgeInsets _touchInsets;

}

@property (assign,nonatomic) UIEdgeInsets touchInsets;                                 //@synthesize touchInsets=_touchInsets - In the implementation block
@property (setter=onTouchUpInside:,nonatomic,copy) id touchUpInsideBlock;              //@synthesize touchUpInsideBlock=_touchUpInsideBlock - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)touchInsets;
-(void)setTouchInsets:(UIEdgeInsets)arg1 ;
-(void)onTouchUpInside:(/*^block*/id)arg1 ;
-(void)_privateButtonTapped;
-(id)touchUpInsideBlock;
@end

