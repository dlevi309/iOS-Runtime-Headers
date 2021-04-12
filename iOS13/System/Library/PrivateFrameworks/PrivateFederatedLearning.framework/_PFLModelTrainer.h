/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/


@class ETTaskClassifier, ETModelDefMLP;

@interface _PFLModelTrainer : NSObject {

	ETTaskClassifier* _task;
	ETModelDefMLP* _mlp;
	unsigned long long _imageCount;

}

@property (retain) ETTaskClassifier * task;                    //@synthesize task=_task - In the implementation block
@property (retain) ETModelDefMLP * mlp;                        //@synthesize mlp=_mlp - In the implementation block
@property (assign) unsigned long long imageCount;              //@synthesize imageCount=_imageCount - In the implementation block
+(unsigned long long)countSubDirectoryInDirectory:(id)arg1 ;
+(unsigned long long)countFilesInDirectory:(id)arg1 ;
-(id)init;
-(unsigned long long)imageCount;
-(ETTaskClassifier *)task;
-(void)setTask:(ETTaskClassifier *)arg1 ;
-(void)setImageCount:(unsigned long long)arg1 ;
-(void)setMlp:(ETModelDefMLP *)arg1 ;
-(ETModelDefMLP *)mlp;
-(void)trainImageModel:(id)arg1 epoch:(unsigned long long)arg2 imageDirectory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)trainNumberModel:(id)arg1 epoch:(unsigned long long)arg2 dataSource:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)sdpWithInitWeights:(id)arg1 currentWeights:(id)arg2 initBiases:(id)arg3 currentBiases:(id)arg4 diffOnly:(BOOL)arg5 gamma:(double)arg6 nu:(double)arg7 ;
-(id)sdpWithInitVector:(id)arg1 currentVector:(id)arg2 gamma:(double)arg3 nu:(double)arg4 ;
-(BOOL)copyWeightsAndBiasesForLayerNamed:(id)arg1 combinedWeightBiasesOut:(float*)arg2 weightCountOut:(unsigned long long*)arg3 biasCountOut:(unsigned long long*)arg4 ;
-(void)updateLayerNamed:(id)arg1 withWeights:(float*)arg2 weightCount:(unsigned long long)arg3 andBiases:(float*)arg4 biasCount:(unsigned long long)arg5 ;
@end

