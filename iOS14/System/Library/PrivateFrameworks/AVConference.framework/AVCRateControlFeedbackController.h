/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

}

@property (assign,nonatomic) unsigned mode;              //@synthesize mode=_mode - In the implementation block
-(unsigned)mode;
-(void)setMode:(unsigned)arg1 ;
-(id)initWithStatisticsCollector:(id)arg1 ;
-(BOOL)getRateControlFeedbackMessage:(id*)arg1 type:(unsigned)arg2 metaData:(id*)arg3 error:(id*)arg4 ;
-(SCD_Struct_AV32)translateRateControlFeedbackMessageFromData:(id)arg1 ;
-(BOOL)processRateControlFeedbackMessage:(SCD_Struct_AV32)arg1 type:(unsigned)arg2 error:(id*)arg3 time:(double)arg4 ;
-(BOOL)getVCStatisticsFeedbackMessage:(SCD_Struct_AV33*)arg1 time:(double)arg2 ;
-(id)translateRateControlDataWithFeedbackMessage:(SCD_Struct_AV32)arg1 ;
-(void)resetBurstyLossStatistics;
-(BOOL)getFeedbackMessage:(id*)arg1 type:(unsigned)arg2 metaData:(id*)arg3 error:(id*)arg4 ;
-(BOOL)processFeedbackMessage:(id)arg1 type:(unsigned)arg2 metaData:(id)arg3 error:(id*)arg4 ;
-(BOOL)processRateControlProbingMessage:(SCD_Struct_AV34)arg1 type:(unsigned)arg2 error:(id*)arg3 ;
-(SCD_Struct_AV32)translateAFRCFeedbackMessage:(tagAFRCFB)arg1 ;
-(BOOL)translateMediaControlInfo:(void*)arg1 feedbackMessage:(SCD_Struct_AV32*)arg2 ;
-(BOOL)detectOutOfOrderFeedbackMessage:(SCD_Struct_AV32)arg1 ;
@end

