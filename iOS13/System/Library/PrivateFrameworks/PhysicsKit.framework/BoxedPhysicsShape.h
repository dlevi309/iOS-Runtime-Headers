/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
*/


#import <PhysicsKit/PhysicsKit-Structs.h>
@class NSArray;

@interface BoxedPhysicsShape : NSObject {

	int shapeType;
	NSArray* points;

}
+(id)boxPhysicsShape:(PKPhysicsShape*)arg1 ;
-(PKPhysicsShape*)unboxShape;
@end

