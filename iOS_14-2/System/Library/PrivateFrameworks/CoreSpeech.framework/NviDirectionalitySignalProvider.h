/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/NviAudioDataReceiver.h>
#import <libobjc.A.dylib/SNResultsObserving.h>
#import <libobjc.A.dylib/NviSignalProvider.h>

@protocol NviAudioDataSource, NviAssetsProvider, OS_dispatch_queue;
@class NviContext, NSHashTable, SNAudioStreamAnalyzer, NviDirectionalitySignalData, NviDataLogger, NviAudioFileWriter, NSMutableDictionary, NSObject, NSString;

@interface NviDirectionalitySignalProvider : NSObject <NviAudioDataReceiver, SNResultsObserving, NviSignalProvider> {

	BOOL _doneProcessing;
	float _dirAzimuthEMAParam;
	float _currEstimatedAzimuth;
	id<NviAudioDataSource> _dataSrc;
	id<NviAssetsProvider> _assetsProvider;
	NviContext* _nviCtx;
	NSHashTable* _delegates;
	SNAudioStreamAnalyzer* _snAudioStreamAnalyzer;
	long long _currReqFirstSampleId;
	unsigned long long _currNumSamplesProcessed;
	NviDirectionalitySignalData* _dirSigData;
	NviDataLogger* _sigDataWriter;
	NviAudioFileWriter* _audioFileWriter;
	NSMutableDictionary* _azDistribution;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) id<NviAudioDataSource> dataSrc;                             //@synthesize dataSrc=_dataSrc - In the implementation block
@property (nonatomic,retain) id<NviAssetsProvider> assetsProvider;                       //@synthesize assetsProvider=_assetsProvider - In the implementation block
@property (nonatomic,retain) NviContext * nviCtx;                                        //@synthesize nviCtx=_nviCtx - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                    //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) SNAudioStreamAnalyzer * snAudioStreamAnalyzer;              //@synthesize snAudioStreamAnalyzer=_snAudioStreamAnalyzer - In the implementation block
@property (assign,nonatomic) float dirAzimuthEMAParam;                                   //@synthesize dirAzimuthEMAParam=_dirAzimuthEMAParam - In the implementation block
@property (assign,nonatomic) long long currReqFirstSampleId;                             //@synthesize currReqFirstSampleId=_currReqFirstSampleId - In the implementation block
@property (assign,nonatomic) unsigned long long currNumSamplesProcessed;                 //@synthesize currNumSamplesProcessed=_currNumSamplesProcessed - In the implementation block
@property (assign,nonatomic) float currEstimatedAzimuth;                                 //@synthesize currEstimatedAzimuth=_currEstimatedAzimuth - In the implementation block
@property (nonatomic,retain) NviDirectionalitySignalData * dirSigData;                   //@synthesize dirSigData=_dirSigData - In the implementation block
@property (nonatomic,retain) NviDataLogger * sigDataWriter;                              //@synthesize sigDataWriter=_sigDataWriter - In the implementation block
@property (assign,nonatomic) BOOL doneProcessing;                                        //@synthesize doneProcessing=_doneProcessing - In the implementation block
@property (nonatomic,retain) NviAudioFileWriter * audioFileWriter;                       //@synthesize audioFileWriter=_audioFileWriter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * azDistribution;                       //@synthesize azDistribution=_azDistribution - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL receiveOnlyProcessedChannelData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long sigType; 
-(NSHashTable *)delegates;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NviContext *)nviCtx;
-(unsigned long long)sigType;
-(id<NviAudioDataSource>)dataSrc;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)request:(id)arg1 didProduceResult:(id)arg2 ;
-(void)dealloc;
-(NviAudioFileWriter *)audioFileWriter;
-(void)setAudioFileWriter:(NviAudioFileWriter *)arg1 ;
-(SNAudioStreamAnalyzer *)snAudioStreamAnalyzer;
-(void)setSnAudioStreamAnalyzer:(SNAudioStreamAnalyzer *)arg1 ;
-(float)dirAzimuthEMAParam;
-(void)audioChunkAvailable:(id)arg1 numChannels:(unsigned long long)arg2 numSamplesPerChannel:(unsigned long long)arg3 startSampleId:(unsigned long long)arg4 atAbsMachTimestamp:(unsigned long long)arg5 ;
-(BOOL)receiveOnlyProcessedChannelData;
-(id)initWithDataSource:(id)arg1 assetsProvider:(id)arg2 ;
-(void)startWithNviContext:(id)arg1 didStartHandler:(/*^block*/id)arg2 ;
-(void)stopWithDidStopHandler:(/*^block*/id)arg1 ;
-(void)setDataSrc:(id<NviAudioDataSource>)arg1 ;
-(id<NviAssetsProvider>)assetsProvider;
-(void)setAssetsProvider:(id<NviAssetsProvider>)arg1 ;
-(void)setNviCtx:(NviContext *)arg1 ;
-(void)setDirAzimuthEMAParam:(float)arg1 ;
-(long long)currReqFirstSampleId;
-(void)setCurrReqFirstSampleId:(long long)arg1 ;
-(unsigned long long)currNumSamplesProcessed;
-(void)setCurrNumSamplesProcessed:(unsigned long long)arg1 ;
-(float)currEstimatedAzimuth;
-(void)setCurrEstimatedAzimuth:(float)arg1 ;
-(NviDirectionalitySignalData *)dirSigData;
-(void)setDirSigData:(NviDirectionalitySignalData *)arg1 ;
-(NviDataLogger *)sigDataWriter;
-(void)setSigDataWriter:(NviDataLogger *)arg1 ;
-(BOOL)doneProcessing;
-(void)setDoneProcessing:(BOOL)arg1 ;
-(NSMutableDictionary *)azDistribution;
-(void)setAzDistribution:(NSMutableDictionary *)arg1 ;
@end

