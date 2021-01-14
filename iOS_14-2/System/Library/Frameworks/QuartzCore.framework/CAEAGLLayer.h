/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/EAGLDrawable.h>

@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable> {

	CAEAGLNativeWindow* _win;

}

@property (readonly) EAGLNativeWindowObject* nativeWindow; 
@property (getter=isAsynchronous) BOOL asynchronous; 
@property (assign) unsigned long long maximumDrawableCount; 
@property (assign) BOOL lowLatency; 
@property (assign) double inputTime; 
@property (assign) double drawableTimeoutSeconds; 
@property (assign) BOOL presentsWithTransaction; 
@property (copy) NSDictionary * drawableProperties; 
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
-(BOOL)lowLatency;
-(void)setLowLatency:(BOOL)arg1 ;
-(unsigned long long)maximumDrawableCount;
-(double)inputTime;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(BOOL)isDrawableAvailable;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(void)_display;
-(BOOL)presentsWithTransaction;
-(BOOL)isAsynchronous;
-(void)setDrawableTimeoutSeconds:(double)arg1 ;
-(void)setMaximumDrawableCount:(unsigned long long)arg1 ;
-(double)drawableTimeoutSeconds;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(void)setInputTime:(double)arg1 ;
-(void)discardContents;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(NSDictionary *)drawableProperties;
-(void)setDrawableProperties:(NSDictionary *)arg1 ;
-(EAGLNativeWindowObject*)nativeWindow;
-(void)setAsynchronous:(BOOL)arg1 ;
-(BOOL)_defersDidBecomeVisiblePostCommit;
-(BOOL)isDrawableAvailableInternal;
-(void)dealloc;
@end

