/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/


@protocol CCVegaRendererDelegate;
#import <CoreChart/CoreChart-Structs.h>
@class NSString, NSLocale, NSCalendar, CALayer, NSObject, UITraitCollection;

@interface CCVegaRendererOptions : NSObject {

	BOOL caUpdateFromBackground;
	unsigned renderer;
	NSString* baseConfig;
	double scaleFactor;
	double zoomFactor;
	NSLocale* locale;
	NSCalendar* calendar;
	CALayer* caLayer;
	NSObject*<CCVegaRendererDelegate> delegate;
	UITraitCollection* traitCollection;
	CGSize size;

}

@property (retain) NSString * baseConfig; 
@property (assign) double scaleFactor; 
@property (assign) double zoomFactor; 
@property (assign) CGSize size; 
@property (retain) NSLocale * locale; 
@property (retain) NSCalendar * calendar; 
@property (retain) UITraitCollection * traitCollection; 
@property (assign) unsigned renderer; 
@property (retain) CALayer * caLayer; 
@property (assign) BOOL caUpdateFromBackground; 
@property (__weak) NSObject*<CCVegaRendererDelegate> delegate; 
-(void)setScaleFactor:(double)arg1 ;
-(UITraitCollection *)traitCollection;
-(double)scaleFactor;
-(NSLocale *)locale;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(NSObject*<CCVegaRendererDelegate>)delegate;
-(CGSize)size;
-(NSCalendar *)calendar;
-(void)setSize:(CGSize)arg1 ;
-(double)zoomFactor;
-(unsigned)renderer;
-(void)setRenderer:(unsigned)arg1 ;
-(void)setDelegate:(NSObject*<CCVegaRendererDelegate>)arg1 ;
-(void)setZoomFactor:(double)arg1 ;
-(CALayer *)caLayer;
-(void)setCaLayer:(CALayer *)arg1 ;
-(void)setBaseConfig:(NSString *)arg1 ;
-(NSString *)baseConfig;
-(void)setCaUpdateFromBackground:(BOOL)arg1 ;
-(BOOL)caUpdateFromBackground;
@end

