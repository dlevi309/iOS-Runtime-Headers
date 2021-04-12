/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@class _DPBitValueRecorder, NSDictionary;

@interface ENDifferentialPrivacyManager : NSObject {

	_DPBitValueRecorder* _userRiskRecorder;
	_DPBitValueRecorder* _userRiskParametersRecorder;
	_DPBitValueRecorder* _userBeaconCountRecorder;
	_DPBitValueRecorder* _userNotificationRecorder;
	_DPBitValueRecorder* _userNotificationInteractionRecorder;
	NSDictionary* _metadata;

}

@property (nonatomic,copy,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(id)hashForServerExposureConfiguration:(id)arg1 ;
+(unsigned short)userRiskScoreForExposureDetectionSummary:(id)arg1 ;
-(NSDictionary *)metadata;
-(void)reportUserExposureNotificationTapped:(BOOL)arg1 classificationIndex:(unsigned char)arg2 ;
-(void)updatedServerConfiguration:(id)arg1 serverExposureConfiguration:(id)arg2 ;
-(id)initWithServerConfiguration:(id)arg1 serverExposureConfiguration:(id)arg2 ;
-(void)reportUserRiskScoreWithSummary:(id)arg1 ;
-(void)reportUserRiskParameters:(id)arg1 ;
-(void)reportUserBeaconCount:(id)arg1 ;
-(void)reportUserExposureNotificationWithClassificationIndex:(unsigned char)arg1 ;
-(void)_submitValue:(id)arg1 toRecorder:(id)arg2 description:(const char*)arg3 ;
@end

