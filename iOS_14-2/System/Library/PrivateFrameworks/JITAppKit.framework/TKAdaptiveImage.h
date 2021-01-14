/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)traits;
-(id)init;
-(void)start;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)stop;
-(NSURL *)url;
-(UIImage *)image;
-(UIColor *)backgroundColor;
-(double)quality;
-(BOOL)loading;
-(void)setService:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)setQuality:(double)arg1 ;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(NSString *)service;
-(void)dealloc;
-(void)setCurrentURL:(NSURL *)arg1 ;
-(NSURL *)currentURL;
-(void)adaptiveMetricsDidChange;
-(id)imageTraitForMetrics;
-(void)tmlDispose;
-(void)didLoadImage:(id)arg1 state:(unsigned long long)arg2 ;
-(void)loadWithTrait:(id)arg1 ;
-(id)url:(id)arg1 withTrait:(id)arg2 ;
-(void)tmlObjectCompleted;
@end

