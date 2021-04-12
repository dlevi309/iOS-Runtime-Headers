/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/


@protocol MXMDisplayProbePlatform <NSObject>
@property (assign,nonatomic,__weak) id<MXMDisplayProbePlatformDelegate> delegate; 
@required
+(id)_allDescriptors;
-(id<MXMDisplayProbePlatformDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)_start;
-(void)_stop;
-(id)initPrivateWithDescriptor:(id)arg1 queue:(id)arg2;

@end

