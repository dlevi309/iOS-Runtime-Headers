/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray;

@interface CFXEffectComposition : NSObject {

	NSMutableArray* _filters;
	NSMutableArray* _overlays;
	NSMutableArray* _animojis;
	NSObject*<OS_dispatch_queue> _concurrentQueue;

}

@property (nonatomic,retain) NSMutableArray * filters;                                  //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSMutableArray * overlays;                                 //@synthesize overlays=_overlays - In the implementation block
@property (nonatomic,retain) NSMutableArray * animojis;                                 //@synthesize animojis=_animojis - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * effects; 
@property (nonatomic,readonly) NSArray * jtEffects; 
@property (nonatomic,readonly) BOOL hasFaceTrackedOverlays; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL requiresFaceTracking; 
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(id)init;
-(NSMutableArray *)overlays;
-(NSMutableArray *)filters;
-(unsigned long long)count;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOverlays:(NSMutableArray *)arg1 ;
-(BOOL)isEmpty;
-(NSArray *)effects;
-(void)addEffect:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)requiresFaceTracking;
-(NSArray *)jtEffects;
-(id)jtEffectsForType:(int)arg1 ;
-(BOOL)hasEffectOfType:(id)arg1 ;
-(void)removeAllEffectsOfType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllEffects:(/*^block*/id)arg1 ;
-(NSMutableArray *)animojis;
-(id)CFX_effectsForJettyType:(int)arg1 ;
-(BOOL)hasFaceTrackedOverlays;
-(void)removeEffect:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllOverlayEffects:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfEffect:(id)arg1 ;
-(void)insertEffectAtIndex:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setAnimojis:(NSMutableArray *)arg1 ;
@end

