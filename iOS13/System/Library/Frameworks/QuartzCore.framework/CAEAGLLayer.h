/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg1 ;
-(BOOL)isAsynchronous;
-(double)inputTime;
-(void)setInputTime:(double)arg1 ;
-(void)setAsynchronous:(BOOL)arg1 ;
-(void)_display;
-(void)setLowLatency:(BOOL)arg1 ;
-(BOOL)lowLatency;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(NSDictionary *)drawableProperties;
-(void)setDrawableProperties:(NSDictionary *)arg1 ;
-(EAGLNativeWindowObject*)nativeWindow;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(BOOL)_defersDidBecomeVisiblePostCommit;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(BOOL)presentsWithTransaction;
-(void)setPresentsWithTransaction:(BOOL)arg1 ;
-(unsigned long long)maximumDrawableCount;
-(void)setDrawableTimeoutSeconds:(double)arg1 ;
-(double)drawableTimeoutSeconds;
-(BOOL)isDrawableAvailableInternal;
-(BOOL)isDrawableAvailable;
-(void)discardContents;
-(void)setMaximumDrawableCount:(unsigned long long)arg1 ;
@end

