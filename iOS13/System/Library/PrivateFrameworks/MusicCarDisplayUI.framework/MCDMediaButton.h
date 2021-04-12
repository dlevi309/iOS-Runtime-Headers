/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <MusicCarDisplayUI/MCDButton.h>

@interface MCDMediaButton : MCDButton {

	double _cornerRadius;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(BOOL)canShowHighlight;
-(double)focusLayerCornerRadius;
-(id)colorForKnobFocusLayer;
@end

