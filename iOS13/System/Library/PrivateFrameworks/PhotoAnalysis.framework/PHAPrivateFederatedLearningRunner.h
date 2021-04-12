/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSArray, NSNumber, NSString, PHPhotoLibrary;

@interface PHAPrivateFederatedLearningRunner : NSObject {

	BOOL _shouldAddNoise;
	BOOL _shouldEncrypt;
	NSArray* _attachmentURLs;
	NSArray* _layersToTrain;
	unsigned long long _numberOfEpochs;
	NSNumber* _learningRate;
	NSString* _modelInputName;
	NSString* _modelOutputName;
	NSString* _lossName;
	NSString* _optimizerName;
	NSString* _iCloudAggServiceKey;
	NSNumber* _clippingNorm;
	NSNumber* _normBinCount;
	NSString* _trainingTask;
	NSString* _fingerprintVersion;
	NSString* _datasetPolicy;
	NSString* _positivesDatasetName;
	NSString* _positivesSubsetName;
	NSString* _negativesDatasetName;
	NSString* _negativesSubsetName;
	NSNumber* _totalNumberOfSamples;
	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,retain) NSArray * attachmentURLs;                       //@synthesize attachmentURLs=_attachmentURLs - In the implementation block
@property (nonatomic,retain) NSArray * layersToTrain;                        //@synthesize layersToTrain=_layersToTrain - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfEpochs;              //@synthesize numberOfEpochs=_numberOfEpochs - In the implementation block
@property (nonatomic,retain) NSNumber * learningRate;                        //@synthesize learningRate=_learningRate - In the implementation block
@property (nonatomic,retain) NSString * modelInputName;                      //@synthesize modelInputName=_modelInputName - In the implementation block
@property (nonatomic,retain) NSString * modelOutputName;                     //@synthesize modelOutputName=_modelOutputName - In the implementation block
@property (nonatomic,retain) NSString * lossName;                            //@synthesize lossName=_lossName - In the implementation block
@property (nonatomic,retain) NSString * optimizerName;                       //@synthesize optimizerName=_optimizerName - In the implementation block
@property (nonatomic,retain) NSString * iCloudAggServiceKey;                 //@synthesize iCloudAggServiceKey=_iCloudAggServiceKey - In the implementation block
@property (nonatomic,retain) NSNumber * clippingNorm;                        //@synthesize clippingNorm=_clippingNorm - In the implementation block
@property (nonatomic,retain) NSNumber * normBinCount;                        //@synthesize normBinCount=_normBinCount - In the implementation block
@property (nonatomic,retain) NSString * trainingTask;                        //@synthesize trainingTask=_trainingTask - In the implementation block
@property (nonatomic,retain) NSString * fingerprintVersion;                  //@synthesize fingerprintVersion=_fingerprintVersion - In the implementation block
@property (nonatomic,retain) NSString * datasetPolicy;                       //@synthesize datasetPolicy=_datasetPolicy - In the implementation block
@property (nonatomic,retain) NSString * positivesDatasetName;                //@synthesize positivesDatasetName=_positivesDatasetName - In the implementation block
@property (nonatomic,retain) NSString * positivesSubsetName;                 //@synthesize positivesSubsetName=_positivesSubsetName - In the implementation block
@property (nonatomic,retain) NSString * negativesDatasetName;                //@synthesize negativesDatasetName=_negativesDatasetName - In the implementation block
@property (nonatomic,retain) NSString * negativesSubsetName;                 //@synthesize negativesSubsetName=_negativesSubsetName - In the implementation block
@property (nonatomic,retain) NSNumber * totalNumberOfSamples;                //@synthesize totalNumberOfSamples=_totalNumberOfSamples - In the implementation block
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                  //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) BOOL shouldAddNoise;                            //@synthesize shouldAddNoise=_shouldAddNoise - In the implementation block
@property (assign,nonatomic) BOOL shouldEncrypt;                             //@synthesize shouldEncrypt=_shouldEncrypt - In the implementation block
+(BOOL)_isInternalDevice;
+(BOOL)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3 ;
+(id)_generateEncryptionKeyFromICloudAggServiceKey:(id)arg1 error:(id*)arg2 ;
+(id)_prepareDatasetForTrainingTask:(id)arg1 fingerprintVersion:(id)arg2 datasetPolicy:(id)arg3 positivesDatasetName:(id)arg4 positivesSubsetName:(id)arg5 negativesDatasetName:(id)arg6 negativesSubsetName:(id)arg7 totalNumberOfSamples:(id)arg8 photoLibrary:(id)arg9 modelInputName:(id)arg10 labelName:(id)arg11 attachments:(id)arg12 error:(id*)arg13 ;
+(id)_firstAttachmentURLWithSuffixOfName:(id)arg1 attachments:(id)arg2 error:(id*)arg3 ;
-(NSNumber *)learningRate;
-(void)setLearningRate:(NSNumber *)arg1 ;
-(BOOL)shouldEncrypt;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(void)setShouldEncrypt:(BOOL)arg1 ;
-(NSArray *)attachmentURLs;
-(void)setAttachmentURLs:(NSArray *)arg1 ;
-(NSString *)fingerprintVersion;
-(NSString *)positivesDatasetName;
-(NSString *)positivesSubsetName;
-(NSString *)negativesDatasetName;
-(NSString *)negativesSubsetName;
-(NSNumber *)totalNumberOfSamples;
-(NSArray *)layersToTrain;
-(NSString *)modelOutputName;
-(void)setModelOutputName:(NSString *)arg1 ;
-(NSString *)lossName;
-(void)setLossName:(NSString *)arg1 ;
-(NSString *)optimizerName;
-(void)setOptimizerName:(NSString *)arg1 ;
-(NSNumber *)clippingNorm;
-(NSNumber *)normBinCount;
-(id)initWithAttachmentURLs:(id)arg1 layersToTrain:(id)arg2 numberOfEpochs:(unsigned long long)arg3 learningRate:(id)arg4 modelInputName:(id)arg5 modelOutputName:(id)arg6 lossName:(id)arg7 optimizerName:(id)arg8 iCloudAggServiceKey:(id)arg9 clippingNorm:(id)arg10 normBinCount:(id)arg11 trainingTask:(id)arg12 fingerprintVersion:(id)arg13 datasetPolicy:(id)arg14 positivesDatasetName:(id)arg15 positivesSubsetName:(id)arg16 negativesDatasetName:(id)arg17 negativesSubsetName:(id)arg18 totalNumberOfSamples:(id)arg19 photoLibrary:(id)arg20 shouldAddNoise:(BOOL)arg21 shouldEncrypt:(BOOL)arg22 ;
-(id)runWithError:(id*)arg1 ;
-(void)setLayersToTrain:(NSArray *)arg1 ;
-(unsigned long long)numberOfEpochs;
-(void)setNumberOfEpochs:(unsigned long long)arg1 ;
-(NSString *)modelInputName;
-(void)setModelInputName:(NSString *)arg1 ;
-(NSString *)iCloudAggServiceKey;
-(void)setICloudAggServiceKey:(NSString *)arg1 ;
-(void)setClippingNorm:(NSNumber *)arg1 ;
-(void)setNormBinCount:(NSNumber *)arg1 ;
-(NSString *)trainingTask;
-(void)setTrainingTask:(NSString *)arg1 ;
-(void)setFingerprintVersion:(NSString *)arg1 ;
-(NSString *)datasetPolicy;
-(void)setDatasetPolicy:(NSString *)arg1 ;
-(void)setPositivesDatasetName:(NSString *)arg1 ;
-(void)setPositivesSubsetName:(NSString *)arg1 ;
-(void)setNegativesDatasetName:(NSString *)arg1 ;
-(void)setNegativesSubsetName:(NSString *)arg1 ;
-(void)setTotalNumberOfSamples:(NSNumber *)arg1 ;
-(BOOL)shouldAddNoise;
-(void)setShouldAddNoise:(BOOL)arg1 ;
@end

