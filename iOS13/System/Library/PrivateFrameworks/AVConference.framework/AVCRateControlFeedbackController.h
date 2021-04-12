/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class AVCStatisticsCollector;

@interface AVCRateControlFeedbackController : NSObject {

	unsigned _mode;
	AVCStatisticsCollector* _statisticsCollector;
	unsigned _feedbackMessageCount;
	unsigned _remoteTotalPacketReceivedCount;
	BOOL _isFeedbackReceived;
	BOOL _didRegisterPacketReceivedHandler;
	unsigned _maxVideoBurstyLossCache;
	unsigned _maxAudioConsecutiveLossCache;

}

@property (assign,nonatomic) unsigned mode;                                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned maxVideoBurstyLossCache;                   //@synthesize maxVideoBurstyLossCache=_maxVideoBurstyLossCache - In the implementation block
@property (assign,nonatomic) unsigned maxAudioConsecutiveLossCache;              //@synthesize maxAudioConsecutiveLossCache=_maxAudioConsecutiveLossCache - In the implementation block
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(id)initWithStatisticsCollector:(id)arg1 ;
-(BOOL)getRateControlFeedbackMessage:(id*)arg1 type:(unsigned)arg2 metaData:(id*)arg3 error:(id*)arg4 ;
-(SCD_Struct_VC19)translateRateControlFeedbackMessageFromData:(id)arg1 ;
-(BOOL)processRateControlFeedbackMessage:(SCD_Struct_VC19)arg1 type:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)getVCStatisticsFeedbackMessage:(SCD_Struct_AV29*)arg1 time:(double)arg2 ;
-(id)translateRateControlDataWithFeedbackMessage:(SCD_Struct_VC19)arg1 ;
-(BOOL)getFeedbackMessage:(id*)arg1 type:(unsigned)arg2 metaData:(id*)arg3 error:(id*)arg4 ;
-(BOOL)processFeedbackMessage:(id)arg1 type:(unsigned)arg2 metaData:(id)arg3 error:(id*)arg4 ;
-(BOOL)processRateControlProbingMessage:(SCD_Struct_VC21)arg1 type:(unsigned)arg2 error:(id*)arg3 ;
-(SCD_Struct_VC19)translateAFRCFeedbackMessage:(tagAFRCFB)arg1 ;
-(BOOL)translateMediaControlInfo:(void*)arg1 feedbackMessage:(SCD_Struct_VC19*)arg2 ;
-(BOOL)detectOutOfOrderFeedbackMessage:(SCD_Struct_VC19)arg1 ;
-(void)setPacketReceivedStatistics:(SCD_Struct_VC24)arg1 ;
-(unsigned)maxVideoBurstyLossCache;
-(void)setMaxVideoBurstyLossCache:(unsigned)arg1 ;
-(unsigned)maxAudioConsecutiveLossCache;
-(void)setMaxAudioConsecutiveLossCache:(unsigned)arg1 ;
@end

