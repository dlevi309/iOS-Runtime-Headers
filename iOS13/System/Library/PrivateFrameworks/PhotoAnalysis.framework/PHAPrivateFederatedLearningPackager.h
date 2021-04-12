/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class NSNumber, DESPFLEncryptor;

@interface PHAPrivateFederatedLearningPackager : NSObject {

	NSNumber* _clippingNorm;
	NSNumber* _normBinCount;
	DESPFLEncryptor* _encryptor;

}

@property (nonatomic,readonly) NSNumber * clippingNorm;                //@synthesize clippingNorm=_clippingNorm - In the implementation block
@property (nonatomic,readonly) NSNumber * normBinCount;                //@synthesize normBinCount=_normBinCount - In the implementation block
@property (nonatomic,retain) DESPFLEncryptor * encryptor;              //@synthesize encryptor=_encryptor - In the implementation block
-(id)initWithClippingNorm:(id)arg1 normBinCount:(id)arg2 ;
-(id)dataPackageFromTrainingResults:(id)arg1 withEncryptionKey:(id)arg2 shouldAddNoise:(BOOL)arg3 shouldEncrypt:(BOOL)arg4 error:(id*)arg5 ;
-(id)_flattenTrainingResults:(id)arg1 ;
-(BOOL)_addNoiseToPrePackagedResults:(id)arg1 shouldAddNoise:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_callPFLPrivatizeCustomNorm:(float*)arg1 elementsCount:(id)arg2 clippingNorm:(id)arg3 normBinCount:(id)arg4 privacyIdentifier:(id)arg5 ;
-(id)_encryptFlattenedTrainingResults:(id)arg1 withEncryptionKey:(id)arg2 shouldEncrypt:(BOOL)arg3 error:(id*)arg4 ;
-(id)_errorWithCode:(long long)arg1 withUnderlyingError:(id)arg2 ;
-(NSNumber *)clippingNorm;
-(NSNumber *)normBinCount;
-(DESPFLEncryptor *)encryptor;
-(void)setEncryptor:(DESPFLEncryptor *)arg1 ;
@end

