/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/

#import <JITAppKit/TKAdaptiveResourceObject.h>

@protocol TKNetworkTask;
@class TKAdaptiveImage_Trait, NSURL, NSString, UIColor, UIImage;

@interface TKAdaptiveImage : TKAdaptiveResourceObject {

	BOOL _supportsTraits;
	TKAdaptiveImage_Trait* _currentTrait;
	id<TKNetworkTask> _task;
	BOOL _loading;
	NSURL* _url;
	NSString* _priority;
	NSString* _service;
	UIColor* _backgroundColor;
	double _quality;
	UIImage* _image;
	NSURL* _currentURL;
	unsigned long long _state;

}

@property (nonatomic,retain) NSURL * currentURL;                     //@synthesize currentURL=_currentURL - In the implementation block
@property (assign,nonatomic) unsigned long long state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSURL * url;                            //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * priority;                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSString * service;                       //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) double quality;                         //@synthesize quality=_quality - In the implementation block
@property (nonatomic,readonly) UIImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) BOOL loading;                         //@synthesize loading=_loading - In the implementation block
+(id)zeroTrait;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(unsigned long long)state;
-(NSURL *)url;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(UIImage *)image;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)service;
-(id)traits;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(double)quality;
-(void)setService:(NSString *)arg1 ;
-(BOOL)loading;
-(void)setQuality:(double)arg1 ;
-(NSURL *)currentURL;
-(void)adaptiveMetricsDidChange;
-(id)imageTraitForMetrics;
-(void)tmlDispose;
-(void)didLoadImage:(id)arg1 state:(unsigned long long)arg2 ;
-(void)loadWithTrait:(id)arg1 ;
-(id)url:(id)arg1 withTrait:(id)arg2 ;
-(void)tmlObjectCompleted;
-(void)setCurrentURL:(NSURL *)arg1 ;
@end

