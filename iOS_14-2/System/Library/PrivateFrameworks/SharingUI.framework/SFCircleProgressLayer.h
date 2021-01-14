/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <SharingUI/SharingUI-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface SFCircleProgressLayer : CALayer {

	double _progressLineWidth;
	double _oneFullRotation;
	BOOL _showProgressTray;
	long long _progressStartPoint;
	UIColor* _progressColor;
	UIColor* _progressBackgroundColor;

}

@property (assign,nonatomic) long long progressStartPoint;                   //@synthesize progressStartPoint=_progressStartPoint - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;                        //@synthesize progressColor=_progressColor - In the implementation block
@property (nonatomic,retain) UIColor * progressBackgroundColor;              //@synthesize progressBackgroundColor=_progressBackgroundColor - In the implementation block
@property (assign,nonatomic) double progressLineWidth;                       //@synthesize progressLineWidth=_progressLineWidth - In the implementation block
@property (assign,nonatomic) BOOL showProgressTray;                          //@synthesize showProgressTray=_showProgressTray - In the implementation block
@property (assign,nonatomic) double progress; 
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(id)init;
-(id)initWithLayer:(id)arg1 ;
-(long long)progressStartPoint;
-(BOOL)showProgressTray;
-(void)setProgressStartPoint:(long long)arg1 ;
-(void)setProgressBackgroundColor:(UIColor *)arg1 ;
-(void)setProgressLineWidth:(double)arg1 ;
-(void)setShowProgressTray:(BOOL)arg1 ;
-(UIColor *)progressBackgroundColor;
-(UIColor *)progressColor;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setProgressColor:(UIColor *)arg1 ;
-(double)progressLineWidth;
@end

