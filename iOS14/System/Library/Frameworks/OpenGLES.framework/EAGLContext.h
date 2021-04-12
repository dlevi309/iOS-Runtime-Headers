/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
*/


#import <OpenGLES/OpenGLES-Structs.h>
@class NSString, EAGLSharegroup;

@interface EAGLContext : NSObject {

	EAGLContextPrivate* _private;
	NSString* debugLabel;

}

@property (readonly) unsigned long long API; 
@property (readonly) EAGLSharegroup * sharegroup; 
@property (nonatomic,copy) NSString * debugLabel; 
@property (assign,getter=isMultiThreaded,nonatomic) BOOL multiThreaded; 
+(id)currentContext;
+(BOOL)setCurrentContext:(id)arg1 ;
-(BOOL)setBlockFence:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(EAGLSharegroup *)sharegroup;
-(id)init;
-(EAGLMacroContextRef)GetMacroContextPrivate;
-(BOOL)presentRenderbuffer:(unsigned long long)arg1 ;
-(id)initWithAPI:(unsigned long long)arg1 sharegroup:(id)arg2 ;
-(BOOL)presentRenderbuffer:(unsigned long long)arg1 afterMinimumDuration:(double)arg2 ;
-(id)initWithAPI:(unsigned long long)arg1 properties:(id)arg2 ;
-(BOOL)texImageIOSurface:(IOSurfaceRef)arg1 target:(unsigned long long)arg2 internalFormat:(unsigned long long)arg3 width:(unsigned)arg4 height:(unsigned)arg5 format:(unsigned long long)arg6 type:(unsigned long long)arg7 plane:(unsigned)arg8 ;
-(id)initWithAPI:(unsigned long long)arg1 ;
-(void)setDebugLabel:(NSString *)arg1 ;
-(NSString *)debugLabel;
-(id)commonInitWithAPI:(unsigned long long)arg1 properties:(id)arg2 ;
-(id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(BOOL)arg2 ;
-(BOOL)isMultiThreaded;
-(BOOL)renderbufferStorage:(unsigned long long)arg1 fromDrawable:(id)arg2 ;
-(unsigned long long)API;
-(BOOL)presentRenderbuffer:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)texImageIOSurface:(IOSurfaceRef)arg1 target:(unsigned long long)arg2 internalFormat:(unsigned long long)arg3 width:(unsigned)arg4 height:(unsigned)arg5 format:(unsigned long long)arg6 type:(unsigned long long)arg7 plane:(unsigned)arg8 invert:(BOOL)arg9 ;
-(unsigned long long)setParameter:(unsigned)arg1 to:(int*)arg2 ;
-(unsigned long long)getParameter:(unsigned)arg1 to:(int*)arg2 ;
-(BOOL)attachImage:(unsigned long long)arg1 toCoreSurface:(IOSurfaceRef)arg2 invertedRender:(BOOL)arg3 ;
-(EAGLMacroContextRef)getMacroContextPrivate;
-(void)dealloc;
-(void)setMultiThreaded:(BOOL)arg1 ;
@end

