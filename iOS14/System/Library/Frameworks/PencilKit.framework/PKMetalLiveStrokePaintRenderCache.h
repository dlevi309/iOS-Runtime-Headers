/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKStrokeRenderCache.h>

@class NSMutableArray, NSArray, NSString;

@interface PKMetalLiveStrokePaintRenderCache : NSObject <PKStrokeRenderCache> {

	NSMutableArray* _buffers;
	unsigned long long _totalCost;
	double _startTime;
	double _duration;
	CGRect _animatedStrokeBounds;

}

@property (nonatomic,readonly) NSArray * buffers; 
@property (assign,nonatomic) double startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double duration;                          //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) CGRect animatedStrokeBounds;              //@synthesize animatedStrokeBounds=_animatedStrokeBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(NSArray *)buffers;
-(double)duration;
-(double)startTime;
-(BOOL)lockPurgeableResourcesAddToSet:(id)arg1 ;
-(BOOL)isCompatibleWithInk:(id)arg1 ;
-(unsigned long long)cacheCost;
-(BOOL)needsCompute;
-(void)addBuffer:(id)arg1 ;
-(CGRect)animatedStrokeBounds;
-(void)setAnimatedStrokeBounds:(CGRect)arg1 ;
@end

