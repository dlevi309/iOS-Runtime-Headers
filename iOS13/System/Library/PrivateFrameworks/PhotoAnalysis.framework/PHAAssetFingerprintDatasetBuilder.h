/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSString, NSNumber, PHPhotoLibrary, NSArray, PHACoreDuetDatasetStorage;

@interface PHAAssetFingerprintDatasetBuilder : NSObject {

	long long _policy;
	long long _fingerprintVersion;
	NSString* _inputName;
	NSString* _labelName;
	NSString* _positivesDatasetName;
	NSString* _positivesSubsetName;
	NSString* _negativesDatasetName;
	NSString* _negativesSubsetName;
	NSNumber* _totalNumberOfSamples;
	PHPhotoLibrary* _photoLibrary;
	NSArray* _positiveAssetIdentifiers;
	NSArray* _negativeAssetIdentifiers;
	PHACoreDuetDatasetStorage* _datasetStore;

}

@property (nonatomic,retain) NSArray * positiveAssetIdentifiers;                    //@synthesize positiveAssetIdentifiers=_positiveAssetIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * negativeAssetIdentifiers;                    //@synthesize negativeAssetIdentifiers=_negativeAssetIdentifiers - In the implementation block
@property (nonatomic,retain) PHACoreDuetDatasetStorage * datasetStore;              //@synthesize datasetStore=_datasetStore - In the implementation block
@property (nonatomic,readonly) long long policy;                                    //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) long long fingerprintVersion;                        //@synthesize fingerprintVersion=_fingerprintVersion - In the implementation block
@property (nonatomic,readonly) NSString * inputName;                                //@synthesize inputName=_inputName - In the implementation block
@property (nonatomic,readonly) NSString * labelName;                                //@synthesize labelName=_labelName - In the implementation block
@property (nonatomic,readonly) NSString * positivesDatasetName;                     //@synthesize positivesDatasetName=_positivesDatasetName - In the implementation block
@property (nonatomic,readonly) NSString * positivesSubsetName;                      //@synthesize positivesSubsetName=_positivesSubsetName - In the implementation block
@property (nonatomic,readonly) NSString * negativesDatasetName;                     //@synthesize negativesDatasetName=_negativesDatasetName - In the implementation block
@property (nonatomic,readonly) NSString * negativesSubsetName;                      //@synthesize negativesSubsetName=_negativesSubsetName - In the implementation block
@property (nonatomic,readonly) NSNumber * totalNumberOfSamples;                     //@synthesize totalNumberOfSamples=_totalNumberOfSamples - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                       //@synthesize photoLibrary=_photoLibrary - In the implementation block
+(id)_randomIndicesWithUpperBound:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
+(long long)datasetBuilderPolicyForPolicyName:(id)arg1 ;
-(long long)policy;
-(PHPhotoLibrary *)photoLibrary;
-(NSString *)inputName;
-(NSString *)labelName;
-(id)initWithPolicy:(long long)arg1 fingerprintVersion:(long long)arg2 inputName:(id)arg3 labelName:(id)arg4 positivesDatasetName:(id)arg5 positivesSubsetName:(id)arg6 negativesDatasetName:(id)arg7 negativesSubsetName:(id)arg8 totalNumberOfSamples:(id)arg9 photoLibrary:(id)arg10 ;
-(NSArray *)positiveAssetIdentifiers;
-(NSArray *)negativeAssetIdentifiers;
-(id)datasetWithError:(id*)arg1 ;
-(id)balancedDatasetWithError:(id*)arg1 ;
-(id)balancedStrictDatasetWithError:(id*)arg1 ;
-(id)unbalancedDatasetWithError:(id*)arg1 ;
-(id)_datasetWithNumberOfPositiveSamples:(id)arg1 numberOfNegativeSamples:(id)arg2 error:(id*)arg3 ;
-(id)_sampleAssetsOfCount:(unsigned long long)arg1 fromAssetIdentifiers:(id)arg2 error:(id*)arg3 ;
-(id)_randomAssetsOfCount:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_fetchOptionsForCurrentSceneprintVersion;
-(id)_assetIdentifiersForCoreDuetDatasetName:(id)arg1 subsetName:(id)arg2 ;
-(long long)fingerprintVersion;
-(NSString *)positivesDatasetName;
-(NSString *)positivesSubsetName;
-(NSString *)negativesDatasetName;
-(NSString *)negativesSubsetName;
-(NSNumber *)totalNumberOfSamples;
-(void)setPositiveAssetIdentifiers:(NSArray *)arg1 ;
-(void)setNegativeAssetIdentifiers:(NSArray *)arg1 ;
-(PHACoreDuetDatasetStorage *)datasetStore;
-(void)setDatasetStore:(PHACoreDuetDatasetStorage *)arg1 ;
@end

