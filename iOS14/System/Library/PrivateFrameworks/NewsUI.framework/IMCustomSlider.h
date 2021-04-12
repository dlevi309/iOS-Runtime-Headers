/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UISlider.h>

@protocol IMCustomSliderDelegate;
@class UIImage, NSMutableDictionary, CALayer;

@interface IMCustomSlider : UISlider {

	CGPoint _offset;
	BOOL _fineScrubbing;
	CGPoint _previousLocation;
	CGPoint _beginLocation;
	double _factor;
	int _speed;
	UIImage* _thumb;
	UIImage* _highlightedThumb;
	float _breadcrumbValue;
	id<IMCustomSliderDelegate> _delegate;
	double _fineScrubbingVerticalRange;
	NSMutableDictionary* _perStateContent;
	CALayer* _breadcrumbLayer;

}

@property (nonatomic,retain) NSMutableDictionary * perStateContent;                   //@synthesize perStateContent=_perStateContent - In the implementation block
@property (nonatomic,retain) CALayer * breadcrumbLayer;                               //@synthesize breadcrumbLayer=_breadcrumbLayer - In the implementation block
@property (assign,nonatomic) float breadcrumbValue;                                   //@synthesize breadcrumbValue=_breadcrumbValue - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                          //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL fineScrubbing;                                      //@synthesize fineScrubbing=_fineScrubbing - In the implementation block
@property (assign,nonatomic) double fineScrubbingVerticalRange;                       //@synthesize fineScrubbingVerticalRange=_fineScrubbingVerticalRange - In the implementation block
@property (assign,nonatomic) int speed;                                               //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic,__weak) id<IMCustomSliderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * highlightedThumb;                              //@synthesize highlightedThumb=_highlightedThumb - In the implementation block
@property (nonatomic,retain) UIImage * thumb;                                         //@synthesize thumb=_thumb - In the implementation block
-(void)setSpeed:(int)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id<IMCustomSliderDelegate>)delegate;
-(int)speed;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIImage *)thumb;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(float)_scaleForIdealValueForVerticalPosition:(double)arg1 ;
-(void)setDelegate:(id<IMCustomSliderDelegate>)arg1 ;
-(CGPoint)offset;
-(void)layoutSubviews;
-(void)setThumb:(UIImage *)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setOffset:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(CALayer *)breadcrumbLayer;
-(float)breadcrumbValue;
-(id)_imageForKey:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setImage:(id)arg1 key:(id)arg2 forState:(unsigned long long)arg3 ;
-(id)trackBreadcrumbImageForState:(unsigned long long)arg1 ;
-(double)fineScrubbingVerticalRange;
-(void)setBreadcrumbValue:(float)arg1 ;
-(void)setBreadcrumbLayer:(CALayer *)arg1 ;
-(UIImage *)highlightedThumb;
-(BOOL)fineScrubbing;
-(void)updateFactor:(double)arg1 ;
-(float)_scaleForVerticalPosition:(double)arg1 ;
-(NSMutableDictionary *)perStateContent;
-(void)setPerStateContent:(NSMutableDictionary *)arg1 ;
-(void)setTrackBreadcrumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setFineScrubbing:(BOOL)arg1 ;
-(void)setHighlightedThumb:(UIImage *)arg1 ;
-(void)setFineScrubbingVerticalRange:(double)arg1 ;
@end

