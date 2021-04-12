/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@class NSArray;

@interface ShotflowNetwork : NSObject {

	SCD_Struct_VN56* _espressoNetwork;
	void* _espressoPlan;
	void* _espressoContext;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _logitsPosOutputs;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _logitsNegOutputs;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _offsetsOutputs;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _rollOutputs;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _yawOutputs;
	unsigned long long _currentNetworkWidth;
	unsigned long long _currentNetworkHeight;
	BOOL _releaseEspressoContext;
	BOOL _releaseEspressoPlan;
	BOOL isAnchorSquare[10];
	NSArray* _filterThreshold;
	float _defaultBoxSizes[6][10][2];
	float _threshold;
	unsigned long long _preferredSmallSide;

}

@property (nonatomic,readonly) unsigned long long preferredSmallSide;              //@synthesize preferredSmallSide=_preferredSmallSide - In the implementation block
@property (assign,nonatomic) float threshold;                                      //@synthesize threshold=_threshold - In the implementation block
+(id)inputLayerName;
+(float)inputImageMinDimension;
+(float)inputImageMaxDimension;
+(float)inputImageAspectRatio;
+(const vector<float, std::__1::allocator<float> >*)strides;
+(float)inputScale;
+(BOOL)hasPose;
+(BOOL)inputBGR;
+(float)nonSquareYawDefault;
+(float)nonSquareRollDefault;
+(unsigned long long)numberBinsYaw;
+(unsigned long long)numberBinsRoll;
+(tuple<float, float, float>)inputBiasRGB;
+(const vector<float, std::__1::allocator<float> >*)defaultBoxesSides;
+(id)processingDeviceNetworkWithModelPath:(id)arg1 threshold:(float)arg2 preferredDeviceID:(int)arg3 engineID:(int)arg4 storageType:(int)arg5 ;
+(id)processingDeviceDetectorWithEspressoNetwork:(SCD_Struct_VN56*)arg1 espressoPlan:(void*)arg2 threshold:(float)arg3 ;
-(float)threshold;
-(int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5 ;
-(void)initializeBuffers;
-(id)initWithEspressoNetwork:(SCD_Struct_VN56*)arg1 espressoPlan:(void*)arg2 threshold:(float)arg3 ;
-(void)initializeEspressoResourcesWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 ;
-(void)dealloc;
-(void)setThreshold:(float)arg1 ;
-(void)runNetwork:(vImage_Buffer*)arg1 inputIsBGR:(BOOL)arg2 ;
-(id)processVImage:(vImage_Buffer*)arg1 inputIsBGR:(BOOL)arg2 ;
-(id)resizeAndProcessVImage:(vImage_Buffer*)arg1 inputIsBGR:(BOOL)arg2 ;
-(unsigned long long)preferredSmallSide;
@end

