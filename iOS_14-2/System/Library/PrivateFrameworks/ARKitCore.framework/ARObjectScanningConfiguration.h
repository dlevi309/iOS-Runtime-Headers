/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARConfiguration.h>

@interface ARObjectScanningConfiguration : ARConfiguration {

	BOOL _mlModelEnabled;
	BOOL _lowQosSchedulingEnabled;
	BOOL _deliverRawSceneUnderstandingResults;
	unsigned long long _planeDetection;

}

@property (assign,getter=isMLModelEnabled,nonatomic) BOOL mlModelEnabled;                                //@synthesize mlModelEnabled=_mlModelEnabled - In the implementation block
@property (assign,getter=isLowQosSchedulingEnabled,nonatomic) BOOL lowQosSchedulingEnabled;              //@synthesize lowQosSchedulingEnabled=_lowQosSchedulingEnabled - In the implementation block
@property (assign,nonatomic) BOOL deliverRawSceneUnderstandingResults;                                   //@synthesize deliverRawSceneUnderstandingResults=_deliverRawSceneUnderstandingResults - In the implementation block
@property (assign,getter=isAutoFocusEnabled,nonatomic) BOOL autoFocusEnabled; 
@property (assign,nonatomic) unsigned long long planeDetection;                                          //@synthesize planeDetection=_planeDetection - In the implementation block
+(id)new;
+(BOOL)isSupported;
+(id)supportedVideoFormats;
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
-(id)init;
-(void)setPlaneDetection:(unsigned long long)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isMLModelEnabled;
-(unsigned long long)planeDetection;
-(void)createTechniques:(id)arg1 ;
-(id)imageSensorSettings;
-(void)setLowQosSchedulingEnabled:(BOOL)arg1 ;
-(void)setMlModelEnabled:(BOOL)arg1 ;
-(BOOL)isLowQosSchedulingEnabled;
-(BOOL)deliverRawSceneUnderstandingResults;
-(void)setDeliverRawSceneUnderstandingResults:(BOOL)arg1 ;
@end

