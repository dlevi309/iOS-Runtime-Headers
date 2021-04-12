/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <PhysicsKit/PKPhysicsBody.h>

@interface PKExtendedPhysicsBody : PKPhysicsBody {

	long long _associations;
	double _areaFactor;

}

@property (assign,nonatomic) double normalizedDensity; 
+(id)bodyWithBodies:(id)arg1 ;
+(id)bodyWithEllipseInRect:(CGRect)arg1 ;
+(id)bodyWithCircleOfRadius:(double)arg1 ;
+(id)bodyWithPolygonFromPath:(CGPathRef)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(id)bodyWithEdgeChainFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeLoopFromPath:(CGPathRef)arg1 ;
-(id)init;
-(BOOL)dissociate;
-(double)normalizedDensity;
-(void)setNormalizedDensity:(double)arg1 ;
-(id)initWithRectangleOfSize:(CGSize)arg1 ;
-(id)description;
-(void)associate;
@end

