/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSArray;

@interface TSDMagicMoveTextureZOrderer : NSObject {

	NSArray* _zOrderMatches;
	NSArray* _outgoingTexturesInZOrder;
	NSArray* _incomingTexturesInZOrder;
	double* _percentTexturesTimes;
	NSArray* _percentTextures;
	unsigned long long _zOrderIntersectionsCount;

}

@property (nonatomic,readonly) unsigned long long zOrderIntersectionsCount;              //@synthesize zOrderIntersectionsCount=_zOrderIntersectionsCount - In the implementation block
-(void)dealloc;
-(void)p_setupZOrderMatchesWithAnimationMatches:(id)arg1 ;
-(void)p_calculateTextureArraysFromIntersections;
-(void)p_addVisibleTexturesFromMatches:(id)arg1 toArray:(id)arg2 interpolatedPercent:(double)arg3 ;
-(unsigned long long)p_bestZIndexForUnassignedMatch:(id)arg1 inMatchArray:(id)arg2 ;
-(id)p_arrayBySortingMatches:(id)arg1 withInterpolatedPercent:(double)arg2 ;
-(id)initWithAnimationMatches:(id)arg1 ;
-(id)texturedRectanglesAtPercent:(double)arg1 ;
-(unsigned long long)p_zIntersectionsBetweenZOrdererMatches:(id)arg1 ;
-(unsigned long long)zOrderIntersectionsCount;
@end

