/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol PKStrokeSpatialCacheDelegate, OS_dispatch_queue;
#import <PencilKit/PencilKit-Structs.h>
@class NSArray, NSObject, PKDrawing;

@interface PKStrokeSpatialCache : NSObject {

	BOOL _hasValidOnscreenVisibleStrokes;
	id<PKStrokeSpatialCacheDelegate> _delegate;
	NSArray* _onscreenVisibleStrokes;
	/*^block*/id _generateOnscreenVisibleStrokesBlock;
	NSObject*<OS_dispatch_queue> _onscreenVisibleStrokesQueue;
	long long _currentGenerationCount;
	PKDrawing* _cachedDrawing;
	CGRect _cachedBounds;

}

@property (nonatomic,copy) id generateOnscreenVisibleStrokesBlock;                                  //@synthesize generateOnscreenVisibleStrokesBlock=_generateOnscreenVisibleStrokesBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> onscreenVisibleStrokesQueue;              //@synthesize onscreenVisibleStrokesQueue=_onscreenVisibleStrokesQueue - In the implementation block
@property (assign,nonatomic) long long currentGenerationCount;                                      //@synthesize currentGenerationCount=_currentGenerationCount - In the implementation block
@property (assign,nonatomic) CGRect cachedBounds;                                                   //@synthesize cachedBounds=_cachedBounds - In the implementation block
@property (nonatomic,retain) PKDrawing * cachedDrawing;                                             //@synthesize cachedDrawing=_cachedDrawing - In the implementation block
@property (nonatomic,retain) NSArray * onscreenVisibleStrokes;                                      //@synthesize onscreenVisibleStrokes=_onscreenVisibleStrokes - In the implementation block
@property (assign,nonatomic,__weak) id<PKStrokeSpatialCacheDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hasValidOnscreenVisibleStrokes;                                   //@synthesize hasValidOnscreenVisibleStrokes=_hasValidOnscreenVisibleStrokes - In the implementation block
-(id)init;
-(id<PKStrokeSpatialCacheDelegate>)delegate;
-(void)_clearCache;
-(void)setDelegate:(id<PKStrokeSpatialCacheDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)hasValidOnscreenVisibleStrokes;
-(NSArray *)onscreenVisibleStrokes;
-(void)_invalidateCacheForBounds:(CGRect)arg1 inDrawing:(id)arg2 force:(BOOL)arg3 ;
-(void)_invalidateCacheForBounds:(CGRect)arg1 inDrawing:(id)arg2 ;
-(CGRect)cachedBounds;
-(void)setCachedBounds:(CGRect)arg1 ;
-(id)generateOnscreenVisibleStrokesBlock;
-(void)setGenerateOnscreenVisibleStrokesBlock:(id)arg1 ;
-(void)_cancelGenerateVisibleStrokesBlockIfNecessary;
-(void)setHasValidOnscreenVisibleStrokes:(BOOL)arg1 ;
-(void)setOnscreenVisibleStrokes:(NSArray *)arg1 ;
-(void)_generateStrokesOnCanvasForVisibleFrame:(CGRect)arg1 inDrawing:(id)arg2 ;
-(void)_clearOnscreenVisibleStrokeCacheAndCancelBlockIfNecessary;
-(long long)currentGenerationCount;
-(void)setCurrentGenerationCount:(long long)arg1 ;
-(void)_findOnscreenVisibleStrokesForFrame:(CGRect)arg1 inDrawing:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCachedDrawing:(PKDrawing *)arg1 ;
-(void)_cancelCacheGeneration;
-(NSObject*<OS_dispatch_queue>)onscreenVisibleStrokesQueue;
-(void)setOnscreenVisibleStrokesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PKDrawing *)cachedDrawing;
@end

