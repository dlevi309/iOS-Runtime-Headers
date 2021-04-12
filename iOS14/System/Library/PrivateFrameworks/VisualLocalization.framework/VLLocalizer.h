/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VisualLocalization.framework/VisualLocalization
*/

#import <VisualLocalization/VisualLocalization-Structs.h>
#import <libobjc.A.dylib/VLLocalizationDataProviderDelegate.h>

@protocol VLLocalizationDataProvider, OS_dispatch_queue;
@class NSObject, NSString;

@interface VLLocalizer : NSObject <VLLocalizationDataProviderDelegate> {

	GEOOnce_s _vlOnce;
	vl_tRef _vl;
	id<VLLocalizationDataProvider> _dataProvider;
	id<VLLocalizationDataProvider> _backupDataProvider;
	unsigned long long _signpostID;
	int _algorithmVersion;
	NSObject*<OS_dispatch_queue> _recorderQueue;
	BOOL _debugInfoShouldPreserveImageData;
	int _debug_algorithmVersion;

}

@property (assign,setter=_setAlgorithmVersion:,getter=_algorithmVersion,nonatomic) int algorithmVersion;                                                               //@synthesize debug_algorithmVersion=_debug_algorithmVersion - In the implementation block
@property (assign,setter=_setDebugInfoShouldPreserveImageData:,getter=_debugInfoShouldPreserveImageData,nonatomic) BOOL debugInfoShouldPreserveImageData;              //@synthesize debugInfoShouldPreserveImageData=_debugInfoShouldPreserveImageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isVisualLocalizationSupported;
+(/*^block*/id)_debugInfoRecorder;
+(void)_setDebugInfoRecorder:(/*^block*/id)arg1 ;
+(double)maximumHorizontalAccuracyThreshold;
+(double)minimumTiltAngle;
-(id)init;
-(id)initWithDataProvider:(id)arg1 ;
-(id)initWithAuditToken:(id)arg1 ;
-(int)_algorithmVersion;
-(void)_commonInit;
-(void)dealloc;
-(void)dataProvider:(id)arg1 didChangeFormatVersion:(unsigned)arg2 ;
-(vl_tRef)_vlHandle;
-(id)locateWithPixelBuffer:(CVBufferRef)arg1 location:(SCD_Struct_VL1)arg2 heading:(SCD_Struct_VL6)arg3 gravity:(SCD_Struct_VL2)arg4 transform:(SCD_Struct_VL7)arg5 cameraIntrinsics:(double)arg6 radialDistortion:(id*)arg7 ;
-(id)locateWithPixelBuffer:(CVBufferRef)arg1 deviceLocation:(id)arg2 heading:(SCD_Struct_VL6)arg3 gravity:(SCD_Struct_VL2)arg4 transform:(SCD_Struct_VL7)arg5 cameraIntrinsics:(double)arg6 radialDistortion:(double)arg7 exposureTargetOffset:(id*)arg8 ;
-(void)_setAlgorithmVersion:(int)arg1 ;
-(void)determineAvailabilityAtLocation:(SCD_Struct_VL1)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)_fileURLForTile:(const SCD_Struct_VL8*)arg1 error:(id*)arg2 ;
-(void)prepareWithLocation:(SCD_Struct_VL1)arg1 ;
-(void)prepareWithDeviceLocation:(id)arg1 ;
-(id)locateWithPixelBuffer:(CVBufferRef)arg1 timestamp:(unsigned long long)arg2 location:(SCD_Struct_VL1)arg3 gravity:(SCD_Struct_VL2)arg4 transform:(SCD_Struct_VL7)arg5 cameraIntrinsics:(id*)arg6 ;
-(id)locateWithPixelBuffer:(CVBufferRef)arg1 timestamp:(unsigned long long)arg2 location:(SCD_Struct_VL1)arg3 heading:(SCD_Struct_VL6)arg4 gravity:(SCD_Struct_VL2)arg5 transform:(SCD_Struct_VL7)arg6 cameraIntrinsics:(id*)arg7 ;
-(id)locateWithPixelBuffer:(CVBufferRef)arg1 deviceLocation:(id)arg2 heading:(SCD_Struct_VL6)arg3 gravity:(SCD_Struct_VL2)arg4 transform:(SCD_Struct_VL7)arg5 cameraIntrinsics:(double)arg6 radialDistortion:(double)arg7 ambientLightIntensity:(id*)arg8 ;
-(BOOL)_debugInfoShouldPreserveImageData;
-(void)_setDebugInfoShouldPreserveImageData:(BOOL)arg1 ;
@end

