/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <Espresso/Espresso-Structs.h>
@class NSMutableDictionary, NSObject, NSString;

@interface EspressoFDOverfeatNetwork : NSObject {

	vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > >* gpu_nets;
	vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > >* ecpu_nets;
	vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > >* net_scales;
	vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > >* full_scales;
	vector<double, std::__1::allocator<double> >* scalesc;
	vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > >* resizers_for_batching;
	int n_resizers_for_batching;
	vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > >* probBlobs;
	vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > >* boxBlobs;
	NSMutableDictionary* _errorForLayers;
	pair<unsigned long long, unsigned long long> cropDims;
	CGColorSpaceRef colorSpace;
	net_strides_configuration* strideConf;
	int retile_stride;
	int retile_tile_sz;
	vector<int, std::__1::allocator<int> >* retile_n_outputs_v;
	int tile_w_1;
	int tile_h_1;
	NSObject*<OS_dispatch_queue> cpu_queue_0;
	NSObject*<OS_dispatch_semaphore> cpu_semaphore;
	BOOL _useGPUScaler;
	int _scalingMode;
	float _maxScale;
	int _forceMaxNScales;
	int _scaleConfig;
	int _mode;
	int _cpin;
	NSString* _basename;
	NSString* _weights;
	shared_ptr<Espresso::abstract_context>* _context_metal;
	shared_ptr<Espresso::abstract_context>* _context_cpu;

}

@property (nonatomic,retain) NSString * basename;                                                //@synthesize basename=_basename - In the implementation block
@property (nonatomic,retain) NSString * weights;                                                 //@synthesize weights=_weights - In the implementation block
@property (assign,nonatomic) int scaleConfig;                                                    //@synthesize scaleConfig=_scaleConfig - In the implementation block
@property (assign,nonatomic) int mode;                                                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) int cpin;                                                           //@synthesize cpin=_cpin - In the implementation block
@property (assign,nonatomic) shared_ptr<Espresso::abstract_context>* context_metal;              //@synthesize context_metal=_context_metal - In the implementation block
@property (assign,nonatomic) shared_ptr<Espresso::abstract_context>* context_cpu;                //@synthesize context_cpu=_context_cpu - In the implementation block
@property (assign,nonatomic) BOOL useGPUScaler;                                                  //@synthesize useGPUScaler=_useGPUScaler - In the implementation block
@property (assign,nonatomic) int scalingMode;                                                    //@synthesize scalingMode=_scalingMode - In the implementation block
@property (assign,nonatomic) float maxScale;                                                     //@synthesize maxScale=_maxScale - In the implementation block
@property (assign,nonatomic) int forceMaxNScales;                                                //@synthesize forceMaxNScales=_forceMaxNScales - In the implementation block
-(int)mode;
-(int)cpin;
-(id)init;
-(void)setMaxScale:(float)arg1 ;
-(void)setWeights:(NSString *)arg1 ;
-(float)maxScale;
-(void)setMode:(int)arg1 ;
-(void)setScalingMode:(int)arg1 ;
-(int)scalingMode;
-(NSString *)weights;
-(net_strides_configuration*)strideConfiguration;
-(int)getNumScales;
-(shared_ptr<Espresso::fast_pyramid_resizer>*)resizerAtIndex:(int)arg1 ;
-(shared_ptr<Espresso::blob<float, 3> >*)probBlobForScale:(int)arg1 ;
-(shared_ptr<Espresso::blob<float, 3> >*)boxBlobForScale:(int)arg1 ;
-(double)getScale:(int)arg1 ;
-(void)reset;
-(NSString *)basename;
-(void)setCpin:(int)arg1 ;
-(shared_ptr<Espresso::net>*)gpu_net:(int)arg1 ;
-(shared_ptr<Espresso::net>*)cpu_net:(int)arg1 ;
-(int)scaleConfig;
-(void)autoSetupNetBaseName:(id)arg1 weights:(id)arg2 scaleConfig:(int)arg3 setupMode:(int)arg4 computePath:(int)arg5 autoAspectRatio:(float)arg6 forceReset:(BOOL)arg7 useLowPriorityMode:(BOOL)arg8 gpuPriority:(unsigned)arg9 ;
-(void)setBasename:(NSString *)arg1 ;
-(void)setScaleConfig:(int)arg1 ;
-(void)retryLoadingCaffeNet:(shared_ptr<Espresso::net>*)arg1 name:(id)arg2 weights:(id)arg3 context:(shared_ptr<Espresso::abstract_context>*)arg4 cp:(int)arg5 ;
-(void)setup_retile;
-(void)generatePyramid:(const shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >*)arg1 tex:(id)arg2 ;
-(void)processPyramid:(shared_ptr<Espresso::fast_pyramid_resizer>*)arg1 ;
-(void)processBlobNoRotation:(const shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >*)arg1 tex:(id)arg2 doBGRA2RGBA:(BOOL)arg3 ;
-(void)processPyramid:(shared_ptr<Espresso::fast_pyramid_resizer>*)arg1 gpu_resizer:(id)arg2 ;
-(void)forward_cpu_network_at_index:(int)arg1 pyr:(const shared_ptr<Espresso::fast_pyramid_resizer>*)arg2 ;
-(BOOL)needRetiling:(int)arg1 ;
-(int)default_retile_outputs;
-(int)resizerCount;
-(void)retile_and_forward_espresso_gpu_network_at_index:(int)arg1 net:(const shared_ptr<Espresso::net>*)arg2 pyr:(const shared_ptr<Espresso::fast_pyramid_resizer>*)arg3 ;
-(void)retile_and_forward_espresso_network_at_index:(int)arg1 net:(const shared_ptr<Espresso::net>*)arg2 pyr:(const shared_ptr<Espresso::fast_pyramid_resizer>*)arg3 ;
-(void)autoResizeForAspectRatio:(float)arg1 useLowPriorityMode:(BOOL)arg2 gpuPriority:(unsigned)arg3 ;
-(void)wipeLayersMemory;
-(id)errorForLayers;
-(void)processBlob:(const shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >*)arg1 tex:(id)arg2 ;
-(void)processVimageNoRotation:(const vImage_Buffer*)arg1 tex:(id)arg2 doBGRA2RGBA:(BOOL)arg3 ;
-(void)storeDataForPruning:(shared_ptr<Espresso::blob<float, 4> >*)arg1 prob:(float)arg2 ;
-(void)setContextMetal:(id)arg1 ;
-(void)setContextCpu:(id)arg1 ;
-(BOOL)useGPUScaler;
-(void)setUseGPUScaler:(BOOL)arg1 ;
-(int)forceMaxNScales;
-(void)setForceMaxNScales:(int)arg1 ;
-(shared_ptr<Espresso::abstract_context>*)context_metal;
-(void)setContext_metal:(shared_ptr<Espresso::abstract_context>*)arg1 ;
-(shared_ptr<Espresso::abstract_context>*)context_cpu;
-(void)setContext_cpu:(shared_ptr<Espresso::abstract_context>*)arg1 ;
-(void)dealloc;
@end

