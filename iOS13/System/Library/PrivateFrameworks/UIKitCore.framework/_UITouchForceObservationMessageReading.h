/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UITouchForceObservationMessageReading <NSObject>
@property (nonatomic,readonly) double touchForce; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) CGPoint centroid; 
@property (nonatomic,readonly) BOOL shouldFilterDueToSystemGestures; 
@required
-(double)timestamp;
-(double)touchForce;
-(CGPoint)centroid;
-(BOOL)shouldFilterDueToSystemGestures;

@end

