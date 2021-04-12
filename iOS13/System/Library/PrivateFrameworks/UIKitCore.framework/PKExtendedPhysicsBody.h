/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <PhysicsKit/PKPhysicsBody.h>

@interface PKExtendedPhysicsBody : PKPhysicsBody {

	long long _associations;
	double _areaFactor;

}

@property (assign,nonatomic) double normalizedDensity; 
+(id)bodyWithEllipseInRect:(CGRect)arg1 ;
+(id)bodyWithCircleOfRadius:(double)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(id)bodyWithPolygonFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeChainFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeLoopFromPath:(CGPathRef)arg1 ;
+(id)bodyWithBodies:(id)arg1 ;
-(id)init;
-(id)description;
-(id)initWithRectangleOfSize:(CGSize)arg1 ;
-(void)setNormalizedDensity:(double)arg1 ;
-(double)normalizedDensity;
-(void)associate;
-(BOOL)dissociate;
@end

