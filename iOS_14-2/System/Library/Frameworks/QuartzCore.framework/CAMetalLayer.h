/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CAMetalLayer : CALayer {

	CAMetalLayerPrivate* _priv;

}

@property (assign,nonatomic) BOOL fenceEnabled; 
@property (assign,nonatomic) BOOL serverSyncEnabled; 
@property (assign,nonatomic) BOOL lowLatency; 
@property (assign,nonatomic) BOOL exclusiveMode; 
@property (assign,nonatomic) double inputTime; 
@property (assign,nonatomic) BOOL nonDefaultColorspace; 
@property (assign,nonatomic) double drawableTimeoutSeconds; 
@property (nonatomic,readonly) unsigned long long displayCompositingInternalStatus; 
@property (retain) id<MTLDevice> device; 
@property (readonly) id<MTLDevice> preferredDevice; 
@property (assign) unsigned long long pixelFormat; 
@property (assign) BOOL framebufferOnly; 
@property (assign) CGSize drawableSize; 
@property (assign) unsigned long long maximumDrawableCount; 
@property (assign) BOOL presentsWithTransaction; 
@property (assign) CGColorSpaceRef colorspace; 
@property (assign) BOOL allowsNextDrawableTimeout; 
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
-(BOOL)lowLatency;
-(void)setLowLatency:(BOOL)arg1 ;
-(unsigned long long)maximumDrawableCount;
-(double)inputTime;
-(void)removeBackBuffers;
-(void)setServerSyncEnabled:(BOOL)arg1 ;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(void)setAllowsNextDrawableTimeout:(BOOL)arg1 ;
-(BOOL)isDrawableAvailable;
-(id)init;
-(void)setDrawableSize:(CGSize)arg1 ;
-(id)nextDrawable;
-(unsigned long long)pixelFormat;
-(id)newDrawable;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(void)_display;
-(BOOL)exclusiveMode;
-(BOOL)presentsWithTransaction;
-(void)setDrawableTimeoutSeconds:(double)arg1 ;
-(void)setMaximumDrawableCount:(unsigned long long)arg1 ;
-(double)drawableTimeoutSeconds;
-(void)setExclusiveMode:(BOOL)arg1 ;
-(unsigned long long)displayCompositingInternalStatus;
-(void)setFenceEnabled:(BOOL)arg1 ;
-(BOOL)nonDefaultColorspace;
-(void)setColorspace:(CGColorSpaceRef)arg1 nonDefault:(BOOL)arg2 ;
-(BOOL)displaySyncEnabled;
-(id<MTLDevice>)device;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(BOOL)fenceEnabled;
-(void)setDisplaySyncEnabled:(BOOL)arg1 ;
-(void)setNonDefaultColorspace:(BOOL)arg1 ;
-(BOOL)serverSyncEnabled;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(BOOL)allowsNextDrawableTimeout;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(void)setInputTime:(double)arg1 ;
-(void)discardContents;
-(BOOL)framebufferOnly;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(CGColorSpaceRef)colorspace;
-(void)setContents:(id)arg1 ;
-(void)setColorspace:(CGColorSpaceRef)arg1 ;
-(id<MTLDevice>)preferredDevice;
-(CGSize)drawableSize;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(void)dealloc;
@end

