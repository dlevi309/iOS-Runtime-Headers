/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/EARCaesuraSilencePosteriorGeneratorDelegate.h>

@protocol _LTSpeechTranslationDelegate, OS_dispatch_queue;
@class _LTTranslationContext, _LTHybridEndpointerAssetInfo, _EAREndpointer, NSNumber, _LTServerEndpointerFeatures, EARCaesuraSilencePosteriorGenerator, NSObject, NSDictionary, NSString;

@interface _LTHybridEndpointer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate> {

	_LTTranslationContext* _context;
	_LTHybridEndpointerAssetInfo* _asset;
	_EAREndpointer* _sourceEndpointer;
	NSNumber* _sourceEndpointerThreshold;
	NSNumber* _sourceDisconnectedEndpointerThreshold;
	_LTServerEndpointerFeatures* _sourceEndpointerFeatures;
	_EAREndpointer* _targetEndpointer;
	NSNumber* _targetEndpointerThreshold;
	NSNumber* _targetDisconnectedEndpointerThreshold;
	_LTServerEndpointerFeatures* _targetEndpointerFeatures;
	EARCaesuraSilencePosteriorGenerator* _spg;
	id<_LTSpeechTranslationDelegate> _delegate;
	BOOL _didEndpoint;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _featureQueue;
	unsigned long long _endpointerSignpostID;
	BOOL _useDefaultServerFeaturesOnClientLag;
	NSDictionary* _endpointerThreshold;
	long long _samplingRate;
	long long _audioBitDepth;
	double _clientLagThresholdMs;
	double _clampedSFLatencyMsForClientLag;

}

@property (nonatomic,copy) NSDictionary * endpointerThreshold;                      //@synthesize endpointerThreshold=_endpointerThreshold - In the implementation block
@property (nonatomic,readonly) long long samplingRate;                              //@synthesize samplingRate=_samplingRate - In the implementation block
@property (nonatomic,readonly) long long audioBitDepth;                             //@synthesize audioBitDepth=_audioBitDepth - In the implementation block
@property (assign,nonatomic) double clientLagThresholdMs;                           //@synthesize clientLagThresholdMs=_clientLagThresholdMs - In the implementation block
@property (assign,nonatomic) double clampedSFLatencyMsForClientLag;                 //@synthesize clampedSFLatencyMsForClientLag=_clampedSFLatencyMsForClientLag - In the implementation block
@property (assign,nonatomic) BOOL useDefaultServerFeaturesOnClientLag;              //@synthesize useDefaultServerFeaturesOnClientLag=_useDefaultServerFeaturesOnClientLag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addSpeechAudioData:(id)arg1 ;
-(long long)audioBitDepth;
-(long long)samplingRate;
-(void)endAudio;
-(BOOL)didEndpointWithFeatures:(id)arg1 silenceFeatures:(id)arg2 endpointer:(id)arg3 ;
-(void)clientSilenceFeaturesAvailable:(id)arg1 ;
-(void)startEndpointingWithContext:(id)arg1 delegate:(id)arg2 ;
-(NSDictionary *)endpointerThreshold;
-(void)setServerEndpointerFeatures:(id)arg1 withLocale:(id)arg2 ;
-(void)setEndpointerThreshold:(NSDictionary *)arg1 ;
-(double)clientLagThresholdMs;
-(void)setClientLagThresholdMs:(double)arg1 ;
-(double)clampedSFLatencyMsForClientLag;
-(void)setClampedSFLatencyMsForClientLag:(double)arg1 ;
-(BOOL)useDefaultServerFeaturesOnClientLag;
-(void)setUseDefaultServerFeaturesOnClientLag:(BOOL)arg1 ;
@end

