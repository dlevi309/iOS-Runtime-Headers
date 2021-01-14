/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)toRadian:(double)arg1 ;
-(void)resetProgress;
-(void)startProgressTimer;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)progress;
-(void)stopProgressTimer;
-(void)increaseUIProgress:(id)arg1 ;
-(void)_updateUIProgress;
-(void)layoutSubviews;
-(void)setPieRadius:(double)arg1 ;
-(void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2 ;
-(void)setProgress:(double)arg1 ;
-(void)_updateSubviews;
-(void)dealloc;
@end

