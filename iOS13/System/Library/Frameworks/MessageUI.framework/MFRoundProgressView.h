/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSTimer, NSDate, UIView, CAShapeLayer;

@interface MFRoundProgressView : UIView {

	CGPoint _pieCenter;
	double _pieRadius;
	NSTimer* _progressTimer;
	NSDate* _prevUpdateTime;
	double _uiProgress;
	double _realProgress;
	double _increaseRate;
	UIView* _contentView;
	CAShapeLayer* _sliceLayer;
	CAShapeLayer* _circleLayer;
	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
-(void)dealloc;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_updateSubviews;
-(void)resetProgress;
-(void)setPieRadius:(double)arg1 ;
-(void)_updateUIProgress;
-(void)increaseUIProgress:(id)arg1 ;
-(void)stopProgressTimer;
-(double)toRadian:(double)arg1 ;
-(void)startProgressTimer;
-(void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2 ;
@end

