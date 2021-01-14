/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <libobjc.A.dylib/ARSensor.h>

@protocol ARSensorDelegate;
@class NSString;

@interface JFXCustomImageSensor : NSObject <ARSensor> {

	id<ARSensorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long powerUsage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ARSensorDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(unsigned long long)providedDataTypes;
-(void)createImageDataFromFrameSet:(id)arg1 captureDevice:(id)arg2 captureSession:(id)arg3 trackedFacesMetadata:(id)arg4 faceObjectsMetadata:(id)arg5 ;
-(void)outputSensorData:(id)arg1 ;
@end

