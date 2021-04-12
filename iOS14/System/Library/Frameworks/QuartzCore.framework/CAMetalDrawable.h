/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/CAMetalDrawable.h>
@class CAMetalLayer;


@protocol CAMetalDrawable <MTLDrawable>
@property (readonly) id<MTLTexture> texture; 
@property (readonly) CAMetalLayer * layer; 
@required
-(id<MTLTexture>)texture;
-(CAMetalLayer *)layer;

@end

#import <libobjc.A.dylib/CAMetalDrawableSPI.h>
#import <libobjc.A.dylib/MTLDrawableSPI.h>

@protocol MTLTexture;
@class CAMetalLayer, IOSurfaceSharedEvent, NSMutableArray, NSString;

@interface CAMetalDrawable : NSObject <CAMetalDrawable, CAMetalDrawableSPI, MTLDrawableSPI> {

	CAMetalDrawablePrivate* _priv;
	id<MTLTexture> _cachedTexture;
	CAMetalLayer* _layer;
	CGRect _dirtyRect;
	unsigned long long _drawableID;
	IOSurfaceSharedEvent* _sharedEvent;
	unsigned _insertSeed;
	NSMutableArray* _presentedHandlers;
	unsigned long long _status;
	double _presentedTime;
	BOOL _presentScheduledInsertSeedValid;
	unsigned _presentScheduledInsertSeed;
	NSMutableArray* _presentScheduledHandlers;

}

@property (assign,nonatomic) unsigned long long drawableID;                     //@synthesize drawableID=_drawableID - In the implementation block
@property (nonatomic,retain) IOSurfaceSharedEvent * sharedEvent;                //@synthesize sharedEvent=_sharedEvent - In the implementation block
@property (assign,nonatomic) unsigned insertSeed;                               //@synthesize insertSeed=_insertSeed - In the implementation block
@property (assign,nonatomic) unsigned long long status;                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double presentedTime;                              //@synthesize presentedTime=_presentedTime - In the implementation block
@property (assign,nonatomic) unsigned presentScheduledInsertSeed;               //@synthesize presentScheduledInsertSeed=_presentScheduledInsertSeed - In the implementation block
@property (assign,nonatomic) BOOL presentScheduledInsertSeedValid;              //@synthesize presentScheduledInsertSeedValid=_presentScheduledInsertSeedValid - In the implementation block
@property (readonly) id<MTLTexture> texture; 
@property (readonly) CAMetalLayer * layer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect dirtyRect;                                  //@synthesize dirtyRect=_dirtyRect - In the implementation block
-(id<MTLTexture>)texture;
-(CAMetalLayer *)layer;
-(void)setDrawableID:(unsigned long long)arg1 ;
-(void)releasePrivateReferences:(CAMetalLayerPrivate*)arg1 ;
-(void)present;
-(IOSurfaceSharedEvent *)sharedEvent;
-(double)presentedTime;
-(void)setDirtyRect:(CGRect)arg1 ;
-(void)setInsertSeed:(unsigned)arg1 ;
-(void)didScheduledPresent;
-(void)presentAfterMinimumDuration:(double)arg1 ;
-(void)setSharedEvent:(IOSurfaceSharedEvent *)arg1 ;
-(void)didPresentAtTime:(double)arg1 ;
-(void)addPresentScheduledHandler:(/*^block*/id)arg1 ;
-(void)setPresentedTime:(double)arg1 ;
-(CAMetalDrawablePrivate*)priv;
-(void)setPresentScheduledInsertSeed:(unsigned)arg1 ;
-(BOOL)hasPresentedHandlers;
-(unsigned)presentScheduledInsertSeed;
-(unsigned)insertSeed;
-(BOOL)presentScheduledInsertSeedValid;
-(id)cachedTexture;
-(void)setStatus:(unsigned long long)arg1 ;
-(CGRect)dirtyRect;
-(void)setPresentScheduledInsertSeedValid:(BOOL)arg1 ;
-(unsigned long long)drawableID;
-(void)presentAtTime:(double)arg1 ;
-(void)addPresentedHandler:(/*^block*/id)arg1 ;
-(unsigned long long)status;
-(void)dealloc;
-(id)initWithDrawablePrivate:(CAMetalDrawablePrivate*)arg1 layer:(id)arg2 ;
@end

