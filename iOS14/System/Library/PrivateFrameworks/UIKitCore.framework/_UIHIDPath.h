/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSNumber;

@interface _UIHIDPath : NSObject {

	BOOL _touching;
	unsigned _identity;
	NSNumber* _pathId;
	double _force;
	double _minorRadius;
	double _majorRadius;
	double _quality;
	double _density;
	double _irregularity;
	double _twist;
	long long _generationCount;
	NSNumber* _overridePathId;
	long long _deliveryPhase;
	CGPoint _position;

}

@property (nonatomic,readonly) NSNumber * pathId;                            //@synthesize pathId=_pathId - In the implementation block
@property (nonatomic,readonly) CGPoint position;                             //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) unsigned identity;                            //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) double force;                                 //@synthesize force=_force - In the implementation block
@property (nonatomic,readonly) double minorRadius;                           //@synthesize minorRadius=_minorRadius - In the implementation block
@property (nonatomic,readonly) double majorRadius;                           //@synthesize majorRadius=_majorRadius - In the implementation block
@property (nonatomic,readonly) double quality;                               //@synthesize quality=_quality - In the implementation block
@property (nonatomic,readonly) double density;                               //@synthesize density=_density - In the implementation block
@property (nonatomic,readonly) double irregularity;                          //@synthesize irregularity=_irregularity - In the implementation block
@property (nonatomic,readonly) double twist;                                 //@synthesize twist=_twist - In the implementation block
@property (nonatomic,readonly) long long generationCount;                    //@synthesize generationCount=_generationCount - In the implementation block
@property (getter=isTouching,nonatomic,readonly) BOOL touching;              //@synthesize touching=_touching - In the implementation block
@property (nonatomic,retain) NSNumber * overridePathId;                      //@synthesize overridePathId=_overridePathId - In the implementation block
@property (assign,nonatomic) long long deliveryPhase;                        //@synthesize deliveryPhase=_deliveryPhase - In the implementation block
-(double)force;
-(double)twist;
-(CGPoint)position;
-(NSNumber *)pathId;
-(double)density;
-(id)init;
-(long long)generationCount;
-(unsigned)identity;
-(double)quality;
-(double)minorRadius;
-(double)irregularity;
-(NSNumber *)overridePathId;
-(void)updateWithHIDEvent:(IOHIDEventRef)arg1 ;
-(void)setOverridePathId:(NSNumber *)arg1 ;
-(long long)deliveryPhase;
-(void)setDeliveryPhase:(long long)arg1 ;
-(void)applyTransform:(CGAffineTransform)arg1 ;
-(BOOL)isTouching;
-(double)majorRadius;
@end

