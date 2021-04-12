/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class CLKDevice, UIView, CAShapeLayer, NTKCurvedColoringLabel, NSMutableDictionary, NSString;

@interface NTKSiderealAuxiliaryDialLabels : UIView {

	CLKDevice* _device;
	UIView* _topLabelContainerView;
	CAShapeLayer* _topLabelMask;
	NTKCurvedColoringLabel* _topLabel;
	UIView* _bottomLabelContainerView;
	CAShapeLayer* _bottomLabelMask;
	NTKCurvedColoringLabel* _bottomLabel;
	NSMutableDictionary* _fontSizeCache;
	NSString* _topText;
	NSString* _bottomText;

}

@property (nonatomic,retain) NSString * topText;                 //@synthesize topText=_topText - In the implementation block
@property (nonatomic,retain) NSString * bottomText;              //@synthesize bottomText=_bottomText - In the implementation block
-(void)setup;
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
-(void)willStartTransition;
-(NSString *)topText;
-(NSString *)bottomText;
-(void)setTopText:(NSString *)arg1 ;
-(void)setBottomText:(NSString *)arg1 ;
-(id)_curvedLabel;
-(void)applyTransitionFraction:(double)arg1 ;
-(void)_layoutLabel:(id)arg1 text:(id)arg2 monospaced:(BOOL)arg3 offset:(CGPoint)arg4 useCache:(BOOL)arg5 ;
-(void)_setFontSize:(double)arg1 monospaced:(BOOL)arg2 offset:(CGPoint)arg3 onLabel:(id)arg4 ;
-(void)didFinishTransition;
@end

