/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSNumber;

@interface VCLinkProbingResult : NSObject {

	unsigned _reorderedPacketsCount;
	unsigned _sentRequestCount;
	unsigned _receivedResponseCount;
	NSMutableArray* _requestTimestampAndRTTList;
	NSNumber* _expMovMeanRTT;
	NSNumber* _plrEnvelopeValue;
	NSNumber* _plrTier;
	SCD_Struct_VC183 _linkProbingResultConfig;

}

@property (readonly) unsigned reorderedPacketsCount;                           //@synthesize reorderedPacketsCount=_reorderedPacketsCount - In the implementation block
@property (readonly) unsigned sentRequestCount;                                //@synthesize sentRequestCount=_sentRequestCount - In the implementation block
@property (readonly) unsigned receivedResponseCount;                           //@synthesize receivedResponseCount=_receivedResponseCount - In the implementation block
@property (readonly) NSMutableArray * requestTimestampAndRTTList;              //@synthesize requestTimestampAndRTTList=_requestTimestampAndRTTList - In the implementation block
@property (readonly) NSNumber * expMovMeanRTT;                                 //@synthesize expMovMeanRTT=_expMovMeanRTT - In the implementation block
@property (readonly) NSNumber * plrEnvelopeValue;                              //@synthesize plrEnvelopeValue=_plrEnvelopeValue - In the implementation block
@property (readonly) NSNumber * plrTier;                                       //@synthesize plrTier=_plrTier - In the implementation block
-(id)description;
-(unsigned)sentRequestCount;
-(NSNumber *)plrTier;
-(void)dealloc;
-(NSNumber *)expMovMeanRTT;
-(void)updateProbingResult:(id)arg1 initialResult:(BOOL)arg2 ;
-(NSMutableArray *)requestTimestampAndRTTList;
-(void)updateLinkStatsWithArrivingNewValueMeanRTT:(double)arg1 arrivingNewValuePLR:(double)arg2 ;
-(unsigned char)getPLRTierFromPLREnvelope:(double)arg1 ;
-(id)initWithProbingResults:(id)arg1 linkProbingResultConfig:(SCD_Struct_VC184)arg2 ;
-(void)mergeProbingResults:(id)arg1 ;
-(unsigned)reorderedPacketsCount;
-(unsigned)receivedResponseCount;
-(NSNumber *)plrEnvelopeValue;
@end

