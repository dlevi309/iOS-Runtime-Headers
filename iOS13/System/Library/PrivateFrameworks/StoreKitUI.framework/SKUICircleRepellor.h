/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class PKPhysicsBody;

@interface SKUICircleRepellor : NSObject {

	double _bufferSize;
	CGPoint _center;
	PKPhysicsBody* _physicsBody;
	double _radius;

}

@property (assign,nonatomic) double bufferSize;                        //@synthesize bufferSize=_bufferSize - In the implementation block
@property (assign,nonatomic) CGPoint center;                           //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) PKPhysicsBody * physicsBody;              //@synthesize physicsBody=_physicsBody - In the implementation block
@property (assign,nonatomic) double radius;                            //@synthesize radius=_radius - In the implementation block
-(id)description;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(double)bufferSize;
-(void)setBufferSize:(double)arg1 ;
-(void)setPhysicsBody:(PKPhysicsBody *)arg1 ;
-(PKPhysicsBody *)physicsBody;
@end

