/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <MusicCarDisplayUI/MCDPlayModeButton.h>

@class UIImage;

@interface MCDRepeatButton : MCDPlayModeButton {

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

