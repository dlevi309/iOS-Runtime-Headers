/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)centroid;
-(double)timestamp;
-(BOOL)shouldFilterDueToSystemGestures;
-(void)setCentroid:(CGPoint)arg1 ;
-(void)ifObservation:(/*^block*/id)arg1 ifReset:(/*^block*/id)arg2 ;
-(void)setShouldFilterDueToSystemGestures:(BOOL)arg1 ;
-(void)ifObservationUnclamped:(/*^block*/id)arg1 ifReset:(/*^block*/id)arg2 ;
-(void)setUnclampedTouchForce:(double)arg1 ;
-(void)setMaximumPossibleForce:(double)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(double)unclampedTouchForce;
-(double)maximumPossibleForce;
@end

