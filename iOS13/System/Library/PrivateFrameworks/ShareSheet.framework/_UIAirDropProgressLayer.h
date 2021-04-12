/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface _UIAirDropProgressLayer : CALayer {

	double _progressLineWidth;
	double _oneFullRotation;
	BOOL _showProgressTray;
	UIColor* _progressColor;
	UIColor* _progressBackgroundColor;

}

@property (nonatomic,retain) UIColor * progressColor;                        //@synthesize progressColor=_progressColor - In the implementation block
@property (nonatomic,retain) UIColor * progressBackgroundColor;              //@synthesize progressBackgroundColor=_progressBackgroundColor - In the implementation block
@property (assign,nonatomic) double progressLineWidth;                       //@synthesize progressLineWidth=_progressLineWidth - In the implementation block
@property (assign,nonatomic) BOOL showProgressTray;                          //@synthesize showProgressTray=_showProgressTray - In the implementation block
@property (assign,nonatomic) double progress; 
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(id)init;
-(void)setProgressColor:(UIColor *)arg1 ;
-(void)setProgressBackgroundColor:(UIColor *)arg1 ;
-(void)setProgressLineWidth:(double)arg1 ;
-(void)setShowProgressTray:(BOOL)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(UIColor *)progressColor;
-(UIColor *)progressBackgroundColor;
-(double)progressLineWidth;
-(BOOL)showProgressTray;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

