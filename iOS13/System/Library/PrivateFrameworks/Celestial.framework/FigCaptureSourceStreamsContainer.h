/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSArray, NSString, NSDictionary;

@interface FigCaptureSourceStreamsContainer : NSObject {

	int _deviceType;
	int _stillImageDepthDataType;
	OpaqueFigCaptureDeviceRef _device;
	NSArray* _streams;
	OpaqueFigCaptureStreamRef _primaryStream;
	NSString* _primaryStreamPortType;
	NSDictionary* _streamsByPortType;
	NSDictionary* _baseZoomFactorsByPortType;

}

@property (nonatomic,readonly) int deviceType;                                                                //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) int stillImageDepthDataType;                                                   //@synthesize stillImageDepthDataType=_stillImageDepthDataType - In the implementation block
@property (nonatomic,readonly) OpaqueFigCaptureStreamRef primaryStream;                                       //@synthesize primaryStream=_primaryStream - In the implementation block
@property (nonatomic,readonly) NSString * primaryStreamPortType;                                              //@synthesize primaryStreamPortType=_primaryStreamPortType - In the implementation block
@property (nonatomic,readonly) NSDictionary * streamsByPortType;                                              //@synthesize streamsByPortType=_streamsByPortType - In the implementation block
@property (nonatomic,readonly) NSArray * portTypesSupportingDepth; 
@property (nonatomic,readonly) float minZoomFactorForDepth; 
@property (nonatomic,readonly) OpaqueFigCaptureStreamRef streamProvidingSDOFRenderingParameters; 
@property (nonatomic,readonly) NSArray * switchOverZoomFactors; 
-(void)dealloc;
-(int)deviceType;
-(int)_populateStreamsFromDeviceVendorForPosition:(int)arg1 baseZoomFactorOverrides:(id)arg2 ;
-(NSArray *)portTypesSupportingDepth;
-(id)initWithDeviceType:(int)arg1 position:(int)arg2 stillImageDepthDataType:(int)arg3 device:(OpaqueFigCaptureDeviceRef)arg4 baseZoomFactorOverrides:(id)arg5 ;
-(float)minZoomFactorForDepth;
-(OpaqueFigCaptureStreamRef)streamProvidingSDOFRenderingParameters;
-(NSArray *)switchOverZoomFactors;
-(int)stillImageDepthDataType;
-(OpaqueFigCaptureStreamRef)primaryStream;
-(NSString *)primaryStreamPortType;
-(NSDictionary *)streamsByPortType;
@end

