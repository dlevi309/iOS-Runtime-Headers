/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSArray;

@interface AXShotflowNetwork : NSObject {

	void* _espressoPlan;
	void* _espressoContext;
	SCD_Struct_AX19* _espressoNetwork;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _logitsPosOutputs;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _logitsNegOutputs;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _offsetsOutputs;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _rollOutputs;
	vector<std::__1::shared_ptr<espresso_buffer_t>, std::__1::allocator<std::__1::shared_ptr<espresso_buffer_t> > >* _yawOutputs;
	unsigned long long _currentNetworkWidth;
	unsigned long long _currentNetworkHeight;
	int _version;
	int _maxout_layers;
	int _bins_neg_maxout;
	BOOL _has_pose;
	BOOL _pose_square;
	BOOL _extra_default_boxes;
	int _num_pos_classes;
	vector<int, std::__1::allocator<int> >* _important_classes;
	vector<NSString *, std::__1::allocator<NSString *> >* _model_labels;
	int _num_ratios;
	vector<float, std::__1::allocator<float> >* _ratios;
	vector<float, std::__1::allocator<float> >* _default_boxes_sides;
	vector<float, std::__1::allocator<float> >* _default_boxes_sides_normalized;
	NSArray* _filterThreshold;
	float _defaultBoxSizes[6][20][2];
	vector<float, std::__1::allocator<float> >* _cell_starts_x;
	vector<float, std::__1::allocator<float> >* _cell_starts_y;
	float _input_aspect_ratio;
	BOOL _keep_aspect_ratio;
	BOOL _can_rotate;
	float _input_height;
	float _threshold;

}

@property (nonatomic,readonly) unsigned long long preferredSmallSide; 
@property (assign,nonatomic) float threshold;                                      //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) int version;                                          //@synthesize version=_version - In the implementation block
+(id)cpuNetworkWithModelPath:(id)arg1 configuration:(id)arg2 version:(int)arg3 ;
+(id)gpuNetworkWithModelPath:(id)arg1 configuration:(id)arg2 preferredMetalDeviceID:(int)arg3 version:(int)arg4 ;
-(float)threshold;
-(id)processCIImage:(id)arg1 ;
-(int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(void)dealloc;
-(void)setThreshold:(float)arg1 ;
-(id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 configuration:(id)arg4 version:(int)arg5 ;
-(void)runNetwork:(vImage_Buffer*)arg1 inputIsBGR:(BOOL)arg2 ;
-(id)processVImage:(vImage_Buffer*)arg1 inputIsBGR:(BOOL)arg2 ;
-(id)resizeAndProcessVImage:(vImage_Buffer*)arg1 inputIsBGR:(BOOL)arg2 ;
-(unsigned long long)preferredSmallSide;
@end

