/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveformDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL;

@interface RCFileInputWaveformDataSource : RCWaveformDataSource {

	NSObject*<OS_dispatch_queue> _serialQueue;
	double _cachedDuration;
	float _loadingProgress;
	NSURL* _AVFileURL;
	double _destinationBeginTime;
	SCD_Struct_RC7 _sourceTimeRange;

}

@property (nonatomic,copy,readonly) NSURL * AVFileURL;                    //@synthesize AVFileURL=_AVFileURL - In the implementation block
@property (assign,nonatomic) double destinationBeginTime;                 //@synthesize destinationBeginTime=_destinationBeginTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC7 sourceTimeRange;              //@synthesize sourceTimeRange=_sourceTimeRange - In the implementation block
@property (nonatomic,readonly) BOOL savesGeneratedWaveform; 
-(void)saveGeneratedWaveformIfNecessary;
-(void)startLoading;
-(double)destinationBeginTime;
-(BOOL)shouldMergeLiveWaveform;
-(BOOL)setPaused:(BOOL)arg1 ;
-(void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(float)loadingProgress;
-(void)setDestinationBeginTime:(double)arg1 ;
-(BOOL)savesGeneratedWaveform;
-(id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(SCD_Struct_RC7)arg1 ;
-(id)initWithAVFileURL:(id)arg1 savesGeneratedWaveform:(BOOL)arg2 segmentFlushInterval:(double)arg3 ;
-(NSURL *)AVFileURL;
-(id)initWithAVFileURL:(id)arg1 ;
-(void)setLoadingProgress:(float)arg1 ;
-(void)setSourceTimeRange:(SCD_Struct_RC7)arg1 ;
-(double)duration;
-(SCD_Struct_RC7)sourceTimeRange;
@end

