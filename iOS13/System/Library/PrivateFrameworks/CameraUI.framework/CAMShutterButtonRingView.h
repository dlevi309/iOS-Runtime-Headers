/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface CAMShutterButtonRingView : UIView {

	BOOL _showContrastBorder;
	UIColor* _color;
	CAMShutterButtonSpec _spec;

}

@property (assign,nonatomic) CAMShutterButtonSpec spec;              //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) BOOL showContrastBorder;                //@synthesize showContrastBorder=_showContrastBorder - In the implementation block
@property (nonatomic,retain) UIColor * color;                        //@synthesize color=_color - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)drawRect:(CGRect)arg1 ;
-(void)setSpec:(CAMShutterButtonSpec)arg1 ;
-(CAMShutterButtonSpec)spec;
-(id)initWithSpec:(CAMShutterButtonSpec)arg1 ;
-(void)setShowContrastBorder:(BOOL)arg1 ;
-(BOOL)showContrastBorder;
@end

