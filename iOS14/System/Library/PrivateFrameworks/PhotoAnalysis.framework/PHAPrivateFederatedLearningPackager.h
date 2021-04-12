/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
@class NSNumber, DESPFLEncryptor;

@interface PHAPrivateFederatedLearningPackager : NSObject {

	NSNumber* _clippingNorm;
	NSNumber* _normBinCount;
	DESPFLEncryptor* _encryptor;
	NSRange _privacyIdentifierRange;
	NSRange _privacyIdentifierSmallRange;
	NSRange _privacyIdentifierLargeRange;

}

@property (nonatomic,readonly) NSNumber * clippingNorm;                          //@synthesize clippingNorm=_clippingNorm - In the implementation block
@property (nonatomic,readonly) NSNumber * normBinCount;                          //@synthesize normBinCount=_normBinCount - In the implementation block
@property (nonatomic,retain) DESPFLEncryptor * encryptor;                        //@synthesize encryptor=_encryptor - In the implementation block
@property (nonatomic,readonly) NSRange privacyIdentifierRange;                   //@synthesize privacyIdentifierRange=_privacyIdentifierRange - In the implementation block
@property (nonatomic,readonly) NSRange privacyIdentifierSmallRange;              //@synthesize privacyIdentifierSmallRange=_privacyIdentifierSmallRange - In the implementation block
@property (nonatomic,readonly) NSRange privacyIdentifierLargeRange;              //@synthesize privacyIdentifierLargeRange=_privacyIdentifierLargeRange - In the implementation block
-(BOOL)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4 ;
-(id)initWithClippingNorm:(id)arg1 normBinCount:(id)arg2 ;
-(id)dataPackageFromTrainingResults:(id)arg1 withEncryptionKey:(id)arg2 shouldAddNoise:(BOOL)arg3 shouldEncrypt:(BOOL)arg4 error:(id*)arg5 ;
-(id)_flattenTrainingResults:(id)arg1 ;
-(BOOL)_addNoiseToPrePackagedResults:(float*)arg1 elementsCount:(id)arg2 shouldAddNoise:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_callPFLPrivatizeCustomNorm:(float*)arg1 elementsCount:(id)arg2 clippingNorm:(id)arg3 normBinCount:(id)arg4 privacyIdentifier:(id)arg5 ;
-(id)_encryptFlattenedTrainingResults:(float*)arg1 elementsCount:(long long)arg2 withEncryptionKey:(id)arg3 shouldEncrypt:(BOOL)arg4 error:(id*)arg5 ;
-(NSNumber *)clippingNorm;
-(NSNumber *)normBinCount;
-(DESPFLEncryptor *)encryptor;
-(void)setEncryptor:(DESPFLEncryptor *)arg1 ;
-(NSRange)privacyIdentifierRange;
-(NSRange)privacyIdentifierSmallRange;
-(NSRange)privacyIdentifierLargeRange;
@end

