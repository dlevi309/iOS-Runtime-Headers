/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSArray, NSDictionary;

@interface CSEndpointerMetrics : NSObject {

	double _totalAudioRecorded;
	NSArray* _featuresAtEndpoint;
	long long _endpointerType;
	NSDictionary* _serverFeatureLatencyDistribution;
	NSDictionary* _additionalMetrics;

}

@property (assign,nonatomic) double totalAudioRecorded;                                    //@synthesize totalAudioRecorded=_totalAudioRecorded - In the implementation block
@property (nonatomic,retain) NSArray * featuresAtEndpoint;                                 //@synthesize featuresAtEndpoint=_featuresAtEndpoint - In the implementation block
@property (assign,nonatomic) long long endpointerType;                                     //@synthesize endpointerType=_endpointerType - In the implementation block
@property (nonatomic,retain) NSDictionary * serverFeatureLatencyDistribution;              //@synthesize serverFeatureLatencyDistribution=_serverFeatureLatencyDistribution - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalMetrics;                             //@synthesize additionalMetrics=_additionalMetrics - In the implementation block
-(void)setAdditionalMetrics:(NSDictionary *)arg1 ;
-(NSArray *)featuresAtEndpoint;
-(void)setFeaturesAtEndpoint:(NSArray *)arg1 ;
-(NSDictionary *)serverFeatureLatencyDistribution;
-(void)setServerFeatureLatencyDistribution:(NSDictionary *)arg1 ;
-(double)totalAudioRecorded;
-(void)setTotalAudioRecorded:(double)arg1 ;
-(NSDictionary *)additionalMetrics;
-(id)initWithTotalAudioRecorded:(double)arg1 featuresAtEndpoint:(id)arg2 endpointerType:(long long)arg3 serverFeatureLatencyDistribution:(id)arg4 additionalMetrics:(id)arg5 ;
-(long long)endpointerType;
-(void)setEndpointerType:(long long)arg1 ;
@end

