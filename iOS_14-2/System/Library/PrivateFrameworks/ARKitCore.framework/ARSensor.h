/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
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
-(void)start;
-(void)stop;
-(void)setDelegate:(id)arg1;
-(unsigned long long)providedDataTypes;

@end

