/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithSpec:(CAMShutterButtonSpec)arg1 ;
-(void)setSpec:(CAMShutterButtonSpec)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(UIColor *)color;
-(CAMShutterButtonSpec)spec;
-(void)drawRect:(CGRect)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)setShowContrastBorder:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)showContrastBorder;
@end

