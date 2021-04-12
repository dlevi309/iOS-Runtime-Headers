/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MFProgressViewDelegate;
@class CADisplayLink, UIColor, NSTimer;

@interface MFProgressView : UIView {

	double _stroke;
	double _diameter;
	CADisplayLink* _displayLink;
	double _displayedProgress;
	double _targetProgress;
	UIColor* _tintColor;
	NSTimer* _simulateActivityTimer;
	id<MFProgressViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MFProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                     //@synthesize tintColor=_tintColor - In the implementation block
+(id)progressViewWithDefaultStyleStrokeAndRect;
-(CGSize)intrinsicContentSize;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)_onDisplayLink:(id)arg1 ;
-(id<MFProgressViewDelegate>)delegate;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithProgressViewStyle:(int)arg1 stroke:(double)arg2 frame:(CGRect)arg3 ;
-(void)_invalidateDisplayLink;
-(void)_invalidateSimulationTimer;
-(void)simulateActivity;
-(void)_adjustProgress;
-(void)_drawProgressInRect:(CGRect)arg1 ;
-(BOOL)_isValidCenter:(CGPoint)arg1 radius:(double)arg2 rect:(CGRect)arg3 ;
-(void)progressDidFinish;
-(void)setDelegate:(id<MFProgressViewDelegate>)arg1 ;
-(void)_drawCircleWithCenter:(CGPoint)arg1 radius:(double)arg2 ;
-(void)_drawWedgeWithCenter:(CGPoint)arg1 radius:(double)arg2 ;
-(void)_stopSimulationIfCompleted;
-(void)setProgress:(double)arg1 ;
-(UIColor *)tintColor;
-(void)dealloc;
@end

