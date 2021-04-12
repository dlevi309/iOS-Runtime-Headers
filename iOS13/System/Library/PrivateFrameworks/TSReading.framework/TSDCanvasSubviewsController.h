/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDLayerAndSubviewHosting;
#import <TSReading/TSReading-Structs.h>
@class NSSet, NSDictionary, NSArray, NSMutableArray, TSURetainedPointerKeyDictionary;

@interface TSDCanvasSubviewsController : NSObject {

	NSSet* _repChildViews;
	NSDictionary* _repsByChildView;
	id<TSDLayerAndSubviewHosting> _host;
	NSArray* _alternateLayersForViews;
	BOOL _needsLayout;
	BOOL _hasBeenTornDown;
	NSMutableArray* _subviewLayers;
	TSURetainedPointerKeyDictionary* _repViewControllersByChildView;
	opaque_pthread_mutex_t _mutex;

}

@property (nonatomic,readonly) NSSet * repChildViews;              //@synthesize repChildViews=_repChildViews - In the implementation block
-(void)dealloc;
-(void)teardown;
-(void)setNeedsLayout;
-(void)updateTopLevelLayersForTiling:(id)arg1 ;
-(void)updateViewsFromReps;
-(id)updateAlternateLayersForViews;
-(void)p_recursivelyFindAlternateLayersForRep:(id)arg1 accumulatingLayers:(id)arg2 repsByChildLayer:(id)arg3 ;
-(id)p_topLevelReps;
-(void)p_sortLayers:(id)arg1 ;
-(void)p_recursivelyFindChildViewsForRep:(id)arg1 accumulatingViews:(id)arg2 accumulatingRepsByChildView:(id)arg3 ;
-(void)p_recursivelyFindHostingRepsForRep:(id)arg1 accumulatingHostingReps:(id)arg2 ;
-(void)p_sortSubviews:(id)arg1 ;
-(void)syncPerformBlock:(/*^block*/id)arg1 ;
-(id)initWithLayerAndSubviewHost:(id)arg1 ;
-(void)addSubviews:(id)arg1 ;
-(void)removeSubviews:(id)arg1 ;
-(NSSet *)repChildViews;
@end

