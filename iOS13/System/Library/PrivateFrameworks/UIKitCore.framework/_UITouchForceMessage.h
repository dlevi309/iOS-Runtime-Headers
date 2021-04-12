/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UITouchForceObservationMessageReader;

@interface _UITouchForceMessage : NSObject {

	BOOL _isReset;
	_UITouchForceObservationMessageReader* _observeReader;
	BOOL _shouldFilterDueToSystemGestures;
	double _unclampedTouchForce;
	double _maximumPossibleForce;
	double _timestamp;
	CGPoint _centroid;

}

@property (assign,nonatomic) double unclampedTouchForce;                        //@synthesize unclampedTouchForce=_unclampedTouchForce - In the implementation block
@property (assign,nonatomic) double maximumPossibleForce;                       //@synthesize maximumPossibleForce=_maximumPossibleForce - In the implementation block
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CGPoint centroid;                                  //@synthesize centroid=_centroid - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterDueToSystemGestures;              //@synthesize shouldFilterDueToSystemGestures=_shouldFilterDueToSystemGestures - In the implementation block
+(id)reset;
+(id)observe:(/*^block*/id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(CGPoint)centroid;
-(void)ifObservation:(/*^block*/id)arg1 ifReset:(/*^block*/id)arg2 ;
-(BOOL)shouldFilterDueToSystemGestures;
-(void)ifObservationUnclamped:(/*^block*/id)arg1 ifReset:(/*^block*/id)arg2 ;
-(void)setCentroid:(CGPoint)arg1 ;
-(void)setShouldFilterDueToSystemGestures:(BOOL)arg1 ;
-(double)unclampedTouchForce;
-(void)setUnclampedTouchForce:(double)arg1 ;
-(double)maximumPossibleForce;
-(void)setMaximumPossibleForce:(double)arg1 ;
@end

