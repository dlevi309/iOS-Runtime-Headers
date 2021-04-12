/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol ARSensor <NSObject>
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate; 
@property (assign,nonatomic) unsigned long long powerUsage; 
@optional
-(void)setPowerUsage:(unsigned long long)arg1;
-(void)forceUpdatePowerUsage:(unsigned long long)arg1;
-(unsigned long long)powerUsage;

@required
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)stop;
-(void)start;
-(unsigned long long)providedDataTypes;

@end

