/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

