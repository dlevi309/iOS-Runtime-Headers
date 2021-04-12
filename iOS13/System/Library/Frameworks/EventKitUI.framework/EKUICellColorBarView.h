/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface EKUICellColorBarView : UIView {

	BOOL _dashedLines;
	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;               //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL dashedLines;              //@synthesize dashedLines=_dashedLines - In the implementation block
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDashedLines:(BOOL)arg1 ;
-(BOOL)dashedLines;
@end

