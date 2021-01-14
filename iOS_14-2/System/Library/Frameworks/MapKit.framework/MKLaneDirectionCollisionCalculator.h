/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSMutableDictionary, NSMutableArray, NSNumber, NSArray;

@interface MKLaneDirectionCollisionCalculator : NSObject {

	NSMutableDictionary* _collisionsForDirection;
	NSMutableArray* _directions;
	NSNumber* _directionWithMostCollisions;
	BOOL _hasCollisions;

}

@property (nonatomic,readonly) BOOL hasCollisions;                              //@synthesize hasCollisions=_hasCollisions - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionWithMaxCollisions; 
@property (nonatomic,readonly) NSArray * directions; 
-(id)initWithDirections:(id)arg1 ;
-(BOOL)hasCollisions;
-(BOOL)hasDirectionWithMaxCollisions;
-(void)removeNextDirectionWithCollisions;
-(void)removeDirectionWithCollisionsLeastSimilarToDirection:(int)arg1 ;
-(NSArray *)directions;
-(void)_recalculateCollisions;
@end

