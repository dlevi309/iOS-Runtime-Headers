/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)directions;
-(id)initWithDirections:(id)arg1 ;
-(BOOL)hasCollisions;
-(BOOL)hasDirectionWithMaxCollisions;
-(void)removeNextDirectionWithCollisions;
-(void)removeDirectionWithCollisionsLeastSimilarToDirection:(int)arg1 ;
-(void)_recalculateCollisions;
@end

