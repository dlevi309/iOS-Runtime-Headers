/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
*/


@class NSArray, CALayer;

@interface WUIDynamicWeatherBackgroundInteractiveTransaction : NSObject {

	double _progress;
	NSArray* _layers;
	CALayer* _toLayer;
	long long _swipeDirection;

}

@property (assign,nonatomic) double progress;                       //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSArray * layers;                      //@synthesize layers=_layers - In the implementation block
@property (assign,nonatomic) CALayer * toLayer;                     //@synthesize toLayer=_toLayer - In the implementation block
@property (assign,nonatomic) long long swipeDirection;              //@synthesize swipeDirection=_swipeDirection - In the implementation block
-(double)progress;
-(CALayer *)toLayer;
-(NSArray *)layers;
-(long long)swipeDirection;
-(void)setLayers:(NSArray *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setToLayer:(CALayer *)arg1 ;
-(void)setSwipeDirection:(long long)arg1 ;
@end

