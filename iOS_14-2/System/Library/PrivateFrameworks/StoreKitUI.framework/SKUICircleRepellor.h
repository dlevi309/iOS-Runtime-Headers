/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRadius:(double)arg1 ;
-(CGPoint)center;
-(double)bufferSize;
-(double)radius;
-(id)description;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setBufferSize:(double)arg1 ;
-(void)setPhysicsBody:(PKPhysicsBody *)arg1 ;
-(PKPhysicsBody *)physicsBody;
@end

