/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSString;

@interface CSAudioStartStreamOption : NSObject {

	BOOL _requestHistoricalAudioDataWithHostTime;
	BOOL _requestHistoricalAudioDataSampleCount;
	BOOL _useOpportunisticZLL;
	BOOL _skipAlertBehavior;
	BOOL _requireSingleChannelLookup;
	unsigned _selectedChannel;
	unsigned long long _startRecordingHostTime;
	unsigned long long _startRecordingSampleCount;
	long long _startAlertBehavior;
	long long _stopAlertBehavior;
	long long _errorAlertBehavior;

}

@property (assign,nonatomic) BOOL requestHistoricalAudioDataWithHostTime;               //@synthesize requestHistoricalAudioDataWithHostTime=_requestHistoricalAudioDataWithHostTime - In the implementation block
@property (assign,nonatomic) BOOL requestHistoricalAudioDataSampleCount;                //@synthesize requestHistoricalAudioDataSampleCount=_requestHistoricalAudioDataSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long startRecordingHostTime;                 //@synthesize startRecordingHostTime=_startRecordingHostTime - In the implementation block
@property (assign,nonatomic) unsigned long long startRecordingSampleCount;              //@synthesize startRecordingSampleCount=_startRecordingSampleCount - In the implementation block
@property (assign,nonatomic) BOOL useOpportunisticZLL;                                  //@synthesize useOpportunisticZLL=_useOpportunisticZLL - In the implementation block
@property (assign,nonatomic) long long startAlertBehavior;                              //@synthesize startAlertBehavior=_startAlertBehavior - In the implementation block
@property (assign,nonatomic) long long stopAlertBehavior;                               //@synthesize stopAlertBehavior=_stopAlertBehavior - In the implementation block
@property (assign,nonatomic) long long errorAlertBehavior;                              //@synthesize errorAlertBehavior=_errorAlertBehavior - In the implementation block
@property (assign,nonatomic) BOOL skipAlertBehavior;                                    //@synthesize skipAlertBehavior=_skipAlertBehavior - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcObject; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (assign,nonatomic) BOOL requireSingleChannelLookup;                           //@synthesize requireSingleChannelLookup=_requireSingleChannelLookup - In the implementation block
@property (assign,nonatomic) unsigned selectedChannel;                                  //@synthesize selectedChannel=_selectedChannel - In the implementation block
+(id)noAlertOption;
-(id)initWithXPCObject:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcObject;
-(NSString *)localizedDescription;
-(BOOL)requestHistoricalAudioDataWithHostTime;
-(unsigned long long)startRecordingHostTime;
-(void)setRequestHistoricalAudioDataWithHostTime:(BOOL)arg1 ;
-(void)setStartRecordingHostTime:(unsigned long long)arg1 ;
-(void)setAVVCAlertBehavior:(id)arg1 ;
-(void)setUseOpportunisticZLL:(BOOL)arg1 ;
-(void)setRequestHistoricalAudioDataSampleCount:(BOOL)arg1 ;
-(void)setStartRecordingSampleCount:(unsigned long long)arg1 ;
-(void)setRequireSingleChannelLookup:(BOOL)arg1 ;
-(void)setSelectedChannel:(unsigned)arg1 ;
-(id)avvcAlertBehavior;
-(BOOL)skipAlertBehavior;
-(long long)_alertBehaviorTypeFromAVVCOberrideType:(long long)arg1 ;
-(void)setStartAlertBehavior:(long long)arg1 ;
-(void)setStopAlertBehavior:(long long)arg1 ;
-(void)setErrorAlertBehavior:(long long)arg1 ;
-(long long)startAlertBehavior;
-(long long)_avvcAlertOverrideType:(long long)arg1 ;
-(long long)stopAlertBehavior;
-(long long)errorAlertBehavior;
-(id)avvcStartRecordSettingsWithAudioStreamHandleId:(unsigned long long)arg1 ;
-(id)avvcSettings;
-(void)setSkipAlertBehavior:(BOOL)arg1 ;
-(BOOL)requestHistoricalAudioDataSampleCount;
-(unsigned long long)startRecordingSampleCount;
-(BOOL)useOpportunisticZLL;
-(BOOL)requireSingleChannelLookup;
-(unsigned)selectedChannel;
@end

