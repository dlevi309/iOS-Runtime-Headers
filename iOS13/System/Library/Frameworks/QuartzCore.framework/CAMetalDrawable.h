/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

#import <libobjc.A.dylib/MTLDrawableSPI.h>

@protocol MTLTexture;
@class CAMetalLayer, IOSurfaceSharedEvent, NSMutableArray, NSString;

@interface CAMetalDrawable : NSObject <CAMetalDrawable, MTLDrawableSPI> {

	CAMetalDrawablePrivate* _priv;
	id<MTLTexture> _cachedTexture;
	CAMetalLayer* _layer;
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
@property (assign,nonatomic) IOSurfaceSharedEvent * sharedEvent;                //@synthesize sharedEvent=_sharedEvent - In the implementation block
@property (assign,nonatomic) unsigned insertSeed;                               //@synthesize insertSeed=_insertSeed - In the implementation block
@property (assign,nonatomic) unsigned long long status;                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double presentedTime;                              //@synthesize presentedTime=_presentedTime - In the implementation block
@property (assign,nonatomic) unsigned presentScheduledInsertSeed;               //@synthesize presentScheduledInsertSeed=_presentScheduledInsertSeed - In the implementation block
@property (assign,nonatomic) BOOL presentScheduledInsertSeedValid;              //@synthesize presentScheduledInsertSeedValid=_presentScheduledInsertSeedValid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLTexture> texture; 
@property (readonly) CAMetalLayer * layer; 
-(void)dealloc;
-(unsigned long long)status;
-(id<MTLTexture>)texture;
-(void)setStatus:(unsigned long long)arg1 ;
-(CAMetalLayer *)layer;
-(void)present;
-(void)addPresentScheduledHandler:(/*^block*/id)arg1 ;
-(void)presentAtTime:(double)arg1 ;
-(void)presentAfterMinimumDuration:(double)arg1 ;
-(void)addPresentedHandler:(/*^block*/id)arg1 ;
-(double)presentedTime;
-(unsigned long long)drawableID;
-(void)didPresentAtTime:(double)arg1 ;
-(BOOL)hasPresentedHandlers;
-(void)didScheduledPresent;
-(id)initWithDrawablePrivate:(CAMetalDrawablePrivate*)arg1 layer:(id)arg2 ;
-(void)releasePrivateReferences:(CAMetalLayerPrivate*)arg1 ;
-(CAMetalDrawablePrivate*)priv;
-(id)cachedTexture;
-(void)setDrawableID:(unsigned long long)arg1 ;
-(IOSurfaceSharedEvent *)sharedEvent;
-(void)setSharedEvent:(IOSurfaceSharedEvent *)arg1 ;
-(unsigned)insertSeed;
-(void)setInsertSeed:(unsigned)arg1 ;
-(void)setPresentedTime:(double)arg1 ;
-(BOOL)presentScheduledInsertSeedValid;
-(void)setPresentScheduledInsertSeedValid:(BOOL)arg1 ;
-(unsigned)presentScheduledInsertSeed;
-(void)setPresentScheduledInsertSeed:(unsigned)arg1 ;
@end

