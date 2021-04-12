/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/


@class NSDictionary, NSArray, MLPDeviceHandler, MPSImageCopyToMatrix, MPSMatrixCopyToImage, MontrealNNModelOptimizerParam;

@interface MLPNetwork : NSObject {

	BOOL _computeLossOnInference;
	NSDictionary* _options;
	NSArray* _layers;
	unsigned long long _networkType;
	MLPDeviceHandler* _deviceHandler;
	MPSImageCopyToMatrix* _i2mKernel;
	MPSMatrixCopyToImage* _m2iKernel;
	MontrealNNModelOptimizerParam* _optimizerParams;
	unsigned long long _inputLength;
	unsigned long long _inputHeight;
	unsigned long long _inputChannels;
	unsigned long long _batchSize;
	unsigned long long _lossBatchSize;

}

@property (retain) NSDictionary * options;                                       //@synthesize options=_options - In the implementation block
@property (retain) NSArray * layers;                                             //@synthesize layers=_layers - In the implementation block
@property (assign) unsigned long long networkType;                               //@synthesize networkType=_networkType - In the implementation block
@property (retain) MLPDeviceHandler * deviceHandler;                             //@synthesize deviceHandler=_deviceHandler - In the implementation block
@property (retain) MPSImageCopyToMatrix * i2mKernel;                             //@synthesize i2mKernel=_i2mKernel - In the implementation block
@property (retain) MPSMatrixCopyToImage * m2iKernel;                             //@synthesize m2iKernel=_m2iKernel - In the implementation block
@property (retain) MontrealNNModelOptimizerParam * optimizerParams;              //@synthesize optimizerParams=_optimizerParams - In the implementation block
@property (assign) unsigned long long inputLength;                               //@synthesize inputLength=_inputLength - In the implementation block
@property (assign) unsigned long long inputHeight;                               //@synthesize inputHeight=_inputHeight - In the implementation block
@property (assign) unsigned long long inputChannels;                             //@synthesize inputChannels=_inputChannels - In the implementation block
@property (assign) unsigned long long batchSize;                                 //@synthesize batchSize=_batchSize - In the implementation block
@property (assign) unsigned long long lossBatchSize;                             //@synthesize lossBatchSize=_lossBatchSize - In the implementation block
@property (assign) BOOL computeLossOnInference;                                  //@synthesize computeLossOnInference=_computeLossOnInference - In the implementation block
+(id)networkWithLayers:(id)arg1 inputLength:(unsigned long long)arg2 inputHeight:(unsigned long long)arg3 inputChannels:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 lossBatchSize:(unsigned long long)arg6 options:(id)arg7 deviceHandler:(id)arg8 optimizerParams:(id)arg9 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(unsigned long long)inputHeight;
-(void)setInputHeight:(unsigned long long)arg1 ;
-(NSArray *)layers;
-(void)setLayers:(NSArray *)arg1 ;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(id)initWithLayers:(id)arg1 ;
-(void)setComputeLossOnInference:(BOOL)arg1 ;
-(void)setDeviceHandler:(MLPDeviceHandler *)arg1 ;
-(void)setI2mKernel:(MPSImageCopyToMatrix *)arg1 ;
-(void)setM2iKernel:(MPSMatrixCopyToImage *)arg1 ;
-(void)setOptimizerParams:(MontrealNNModelOptimizerParam *)arg1 ;
-(void)setInputLength:(unsigned long long)arg1 ;
-(void)setInputChannels:(unsigned long long)arg1 ;
-(void)setLossBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)inputLength;
-(unsigned long long)inputChannels;
-(void)createLayerKernels;
-(void*)generateModelContainer;
-(id)initWithNetworkType:(unsigned long long)arg1 layers:(id)arg2 ;
-(void)runTraining:(id)arg1 databatch:(id)arg2 iteration:(unsigned long long)arg3 lossCallback:(/*^block*/id)arg4 semaphore:(id)arg5 ;
-(unsigned long long)runInference:(id)arg1 databatch:(id)arg2 inferredResult:(id)arg3 semaphore:(id)arg4 ;
-(id)computeInference:(id)arg1 ;
-(unsigned long long)networkType;
-(void)setNetworkType:(unsigned long long)arg1 ;
-(MLPDeviceHandler *)deviceHandler;
-(MPSImageCopyToMatrix *)i2mKernel;
-(MPSMatrixCopyToImage *)m2iKernel;
-(MontrealNNModelOptimizerParam *)optimizerParams;
-(unsigned long long)lossBatchSize;
-(BOOL)computeLossOnInference;
@end

