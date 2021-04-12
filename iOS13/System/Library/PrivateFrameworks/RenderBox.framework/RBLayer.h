/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/

#import <RenderBox/RenderBox-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSTimer, RBDevice;

@interface RBLayer : CALayer {

	objc_ptr<RBDevice *> _device;
	BOOL _disableAsync;
	BOOL _pendingFlush;
	BOOL _pendingCollection;
	NSTimer* _collectionTimer;
	unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable> >* _drawable;
	objc_ptr<NSObject<OS_dispatch_semaphore> *> _semaphore;
	cf_ptr<_CAImageQueue *>* _imageQueue;
	vector<RB::refcounted_ptr<(anonymous namespace)::Surface>, std::__1::allocator<RB::refcounted_ptr<(anonymous namespace)::Surface> > >* _surfaces;
	BOOL _rendersAsynchronously;
	BOOL _clearsBackground;
	int _colorMode;
	SCD_Struct_RB26 _clearColor;

}

@property (nonatomic,retain) RBDevice * device; 
@property (assign,nonatomic) BOOL rendersAsynchronously;                                       //@synthesize rendersAsynchronously=_rendersAsynchronously - In the implementation block
@property (assign,nonatomic) int colorMode;                                                    //@synthesize colorMode=_colorMode - In the implementation block
@property (assign,nonatomic) BOOL clearsBackground;                                            //@synthesize clearsBackground=_clearsBackground - In the implementation block
@property (assign,nonatomic) SCD_Struct_RB26 clearColor;                                       //@synthesize clearColor=_clearColor - In the implementation block
@property (getter=isDrawableAvailable,nonatomic,readonly) BOOL drawableAvailable; 
+(id)defaultValueForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(RBDevice *)device;
-(SCD_Struct_RB26)clearColor;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)setRendersAsynchronously:(BOOL)arg1 ;
-(BOOL)rendersAsynchronously;
-(void)display;
-(void)setDevice:(RBDevice *)arg1 ;
-(int)colorMode;
-(void)setColorMode:(int)arg1 ;
-(BOOL)isDrawableAvailable;
-(void)setClearColor:(SCD_Struct_RB26)arg1 ;
-(void)rb_init;
-(void)waitUntilAsyncRenderingCompleted;
-(void)drawInDisplayList:(id)arg1 ;
-(void)_scheduleCollection;
-(BOOL)clearsBackground;
-(void)setClearsBackground:(BOOL)arg1 ;
@end

