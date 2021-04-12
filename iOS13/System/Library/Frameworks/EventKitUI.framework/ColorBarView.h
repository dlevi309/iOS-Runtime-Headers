/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UIView.h>

@class UIColor;

@interface ColorBarView : UIView {

	BOOL _hasRoundedCorners;
	BOOL _dashedLines;
	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;                     //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL hasRoundedCorners;              //@synthesize hasRoundedCorners=_hasRoundedCorners - In the implementation block
@property (assign,nonatomic) BOOL dashedLines;                    //@synthesize dashedLines=_dashedLines - In the implementation block
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setDashedLines:(BOOL)arg1 ;
-(BOOL)dashedLines;
-(void)setHasRoundedCorners:(BOOL)arg1 ;
-(BOOL)hasRoundedCorners;
@end

