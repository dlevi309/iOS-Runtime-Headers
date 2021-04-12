/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSSpIdVTTextDependentSpeakerRecognizerDelegate.h>

@protocol OS_dispatch_group;
@class NSObject, NSData, CSUserVoiceProfile, NSString, CSAsset, CSAggregator;

@interface CSVoiceProfilePruner : NSObject <CSSpIdVTTextDependentSpeakerRecognizerDelegate> {

	float _retrainTDSRScore;
	unsigned long long _currUttLengthInMs;
	NSObject*<OS_dispatch_group> _spIdDispatchGroup;
	unsigned long long _spIdType;
	NSData* _speakerVector;
	unsigned long long _speakerVectorSize;
	CSUserVoiceProfile* _profile;
	NSString* _locale;
	CSAsset* _asset;
	CSAggregator* _aggregator;

}

@property (assign,nonatomic) unsigned long long currUttLengthInMs;                        //@synthesize currUttLengthInMs=_currUttLengthInMs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> spIdDispatchGroup;              //@synthesize spIdDispatchGroup=_spIdDispatchGroup - In the implementation block
@property (assign,nonatomic) unsigned long long spIdType;                                 //@synthesize spIdType=_spIdType - In the implementation block
@property (assign,nonatomic) float retrainTDSRScore;                                      //@synthesize retrainTDSRScore=_retrainTDSRScore - In the implementation block
@property (nonatomic,retain) NSData * speakerVector;                                      //@synthesize speakerVector=_speakerVector - In the implementation block
@property (assign,nonatomic) unsigned long long speakerVectorSize;                        //@synthesize speakerVectorSize=_speakerVectorSize - In the implementation block
@property (nonatomic,retain) CSUserVoiceProfile * profile;                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSString * locale;                                           //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) CSAsset * asset;                                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) CSAggregator * aggregator;                                   //@synthesize aggregator=_aggregator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(CSUserVoiceProfile *)profile;
-(void)setProfile:(CSUserVoiceProfile *)arg1 ;
-(CSAsset *)asset;
-(void)setAsset:(CSAsset *)arg1 ;
-(void)textDependentSpeakerRecognizer:(id)arg1 failedWithError:(id)arg2 ;
-(void)textDependentSpeakerRecognizer:(id)arg1 hasSatScore:(float)arg2 ;
-(NSData *)speakerVector;
-(void)setSpeakerVector:(NSData *)arg1 ;
-(unsigned long long)_deleteUtterances:(id)arg1 ;
-(BOOL)pruneVoiceProfileIfNecessary;
-(CSAggregator *)aggregator;
-(void)setAggregator:(CSAggregator *)arg1 ;
-(unsigned long long)spIdType;
-(void)setSpIdType:(unsigned long long)arg1 ;
-(unsigned long long)currUttLengthInMs;
-(void)setCurrUttLengthInMs:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_group>)spIdDispatchGroup;
-(void)setSpIdDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(unsigned long long)speakerVectorSize;
-(void)setSpeakerVectorSize:(unsigned long long)arg1 ;
-(id)initWithVoiceProfile:(id)arg1 spIdType:(unsigned long long)arg2 languageCode:(id)arg3 asset:(id)arg4 ;
-(id)_getLastPruningCookieForLanguageCode:(id)arg1 ;
-(BOOL)_updatePruningCookieWith:(id)arg1 forLanguageCode:(id)arg2 ;
-(id)analyzeEnrollmentUtts:(id)arg1 tdsrAnalyzer:(id)arg2 satAnalyzer:(id)arg3 thresholdTrigger:(double)arg4 thresholdSAT:(double)arg5 thresholdTDSR:(double)arg6 isUpdatingModel:(BOOL)arg7 extraUtts:(id*)arg8 discardUtts:(id*)arg9 psrTimeout:(BOOL*)arg10 ;
-(double)_computeSamplingMSEForUtts:(id)arg1 satAnalyzer:(id)arg2 utterences:(id)arg3 withBeforeScores:(id)arg4 ;
-(float)retrainTDSRScore;
-(void)setRetrainTDSRScore:(float)arg1 ;
@end

