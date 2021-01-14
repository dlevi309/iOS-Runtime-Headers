/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITouchForceObservationMessageReading <NSObject>
@property (nonatomic,readonly) double touchForce; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) CGPoint centroid; 
@property (nonatomic,readonly) BOOL shouldFilterDueToSystemGestures; 
@required
-(CGPoint)centroid;
-(double)touchForce;
-(double)timestamp;
-(BOOL)shouldFilterDueToSystemGestures;

@end

