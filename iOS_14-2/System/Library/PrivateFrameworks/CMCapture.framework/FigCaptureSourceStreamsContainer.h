/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class BWFigCaptureDevice, NSArray, BWFigCaptureStream, NSDictionary, NSString;

@interface FigCaptureSourceStreamsContainer : NSObject {

	int _deviceType;
	int _stillImageDepthDataType;
	BWFigCaptureDevice* _device;
	NSArray* _streams;
	BWFigCaptureStream* _primaryStream;
	NSDictionary* _streamsByPortType;
	NSDictionary* _baseZoomFactorsByPortType;

}

@property (nonatomic,readonly) int deviceType;                                                           //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) int stillImageDepthDataType;                                              //@synthesize stillImageDepthDataType=_stillImageDepthDataType - In the implementation block
@property (nonatomic,readonly) BWFigCaptureStream * primaryStream;                                       //@synthesize primaryStream=_primaryStream - In the implementation block
@property (nonatomic,readonly) NSDictionary * streamsByPortType;                                         //@synthesize streamsByPortType=_streamsByPortType - In the implementation block
@property (nonatomic,readonly) NSString * portTypeSupportingDepth; 
@property (nonatomic,readonly) float minZoomFactorForDepth; 
@property (nonatomic,readonly) BWFigCaptureStream * streamProvidingSDOFRenderingParameters; 
@property (nonatomic,readonly) NSArray * switchOverZoomFactors; 
-(int)deviceType;
-(BWFigCaptureStream *)primaryStream;
-(NSString *)portTypeSupportingDepth;
-(int)_populateStreamsFromDeviceVendorForPosition:(int)arg1 baseZoomFactorOverrides:(id)arg2 ;
-(id)initWithDeviceType:(int)arg1 position:(int)arg2 stillImageDepthDataType:(int)arg3 device:(id)arg4 baseZoomFactorOverrides:(id)arg5 ;
-(float)minZoomFactorForDepth;
-(BWFigCaptureStream *)streamProvidingSDOFRenderingParameters;
-(NSArray *)switchOverZoomFactors;
-(int)stillImageDepthDataType;
-(NSDictionary *)streamsByPortType;
-(void)dealloc;
@end

