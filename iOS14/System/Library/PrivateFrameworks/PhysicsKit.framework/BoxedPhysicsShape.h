/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

