/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITouchForceObservationMessageReading.h>

@class NSString;

@interface _UITouchForceObservationMessageReader : NSObject <_UITouchForceObservationMessageReading> {

	BOOL _shouldFilterDueToSystemGestures;
	double _touchForce;
	double _timestamp;
	CGPoint _centroid;

}

@property (assign,nonatomic) double touchForce;                                 //@synthesize touchForce=_touchForce - In the implementation block
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CGPoint centroid;                                  //@synthesize centroid=_centroid - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterDueToSystemGestures;              //@synthesize shouldFilterDueToSystemGestures=_shouldFilterDueToSystemGestures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)centroid;
-(double)touchForce;
-(double)timestamp;
-(BOOL)shouldFilterDueToSystemGestures;
-(void)setCentroid:(CGPoint)arg1 ;
-(void)setShouldFilterDueToSystemGestures:(BOOL)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setTouchForce:(double)arg1 ;
@end

