/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <CarPlayUI/CPUIPlayModeButton.h>

@class UIImage;

@interface CPUIRepeatButton : CPUIPlayModeButton {

	UIImage* _repeatImage;
	UIImage* _repeatOneImage;

}

@property (nonatomic,retain) UIImage * repeatImage;                 //@synthesize repeatImage=_repeatImage - In the implementation block
@property (nonatomic,retain) UIImage * repeatOneImage;              //@synthesize repeatOneImage=_repeatOneImage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setRepeatType:(long long)arg1 ;
-(UIImage *)repeatOneImage;
-(UIImage *)repeatImage;
-(void)setRepeatImage:(UIImage *)arg1 ;
-(void)setRepeatOneImage:(UIImage *)arg1 ;
@end

