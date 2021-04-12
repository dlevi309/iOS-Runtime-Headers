/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIImageView.h>

@class CAFilter;

@interface SBDarkeningImageView : UIImageView {

	CAFilter* _multiplyFilter;
	double _brightness;

}

@property (assign,nonatomic) double brightness;              //@synthesize brightness=_brightness - In the implementation block
-(id)description;
-(double)brightness;
-(void)setBrightness:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

