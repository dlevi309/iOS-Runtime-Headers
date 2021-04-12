/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARConfiguration.h>

@interface ARObjectScanningConfiguration : ARConfiguration {

	BOOL _mlModelEnabled;
	BOOL _deliverRawSceneUnderstandingResults;
	unsigned long long _planeDetection;

}

@property (assign,getter=isMLModelEnabled,nonatomic) BOOL mlModelEnabled;                  //@synthesize mlModelEnabled=_mlModelEnabled - In the implementation block
@property (assign,nonatomic) BOOL deliverRawSceneUnderstandingResults;                     //@synthesize deliverRawSceneUnderstandingResults=_deliverRawSceneUnderstandingResults - In the implementation block
@property (assign,getter=isAutoFocusEnabled,nonatomic) BOOL autoFocusEnabled; 
@property (assign,nonatomic) unsigned long long planeDetection;                            //@synthesize planeDetection=_planeDetection - In the implementation block
+(id)new;
+(BOOL)isSupported;
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
+(id)supportedVideoFormats;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaneDetection:(unsigned long long)arg1 ;
-(unsigned long long)planeDetection;
-(void)createTechniques:(id)arg1 ;
-(id)imageSensorSettings;
-(void)setMlModelEnabled:(BOOL)arg1 ;
-(BOOL)deliverRawSceneUnderstandingResults;
-(void)setDeliverRawSceneUnderstandingResults:(BOOL)arg1 ;
-(BOOL)shouldEnableCalibrationDataForImageSensorSettings:(id)arg1 ;
-(BOOL)isMLModelEnabled;
@end

