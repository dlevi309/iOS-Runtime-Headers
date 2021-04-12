/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictionsInternals.framework/ProactiveInputPredictionsInternals
*/

#import <ProactiveInputPredictionsInternals/ProactiveInputPredictionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PSGPBTypingSpeed : PBCodable <NSCopying> {

	NSString* _localeIdentifier;
	int _messageDurationMilliseconds;
	int _messageLength;
	int _messageWords;
	NSString* _wbExperimentId;
	NSString* _wbTreatmentId;
	NSString* _wbTreatmentName;
	NSString* _zkwExperimentId;
	NSString* _zkwTreatmentId;
	NSString* _zkwTreatmentName;
	SCD_Struct_PS1 _has;

}

@property (nonatomic,readonly) BOOL hasZkwExperimentId; 
@property (nonatomic,retain) NSString * zkwExperimentId;                       //@synthesize zkwExperimentId=_zkwExperimentId - In the implementation block
@property (nonatomic,readonly) BOOL hasZkwTreatmentId; 
@property (nonatomic,retain) NSString * zkwTreatmentId;                        //@synthesize zkwTreatmentId=_zkwTreatmentId - In the implementation block
@property (nonatomic,readonly) BOOL hasZkwTreatmentName; 
@property (nonatomic,retain) NSString * zkwTreatmentName;                      //@synthesize zkwTreatmentName=_zkwTreatmentName - In the implementation block
@property (nonatomic,readonly) BOOL hasWbExperimentId; 
@property (nonatomic,retain) NSString * wbExperimentId;                        //@synthesize wbExperimentId=_wbExperimentId - In the implementation block
@property (nonatomic,readonly) BOOL hasWbTreatmentId; 
@property (nonatomic,retain) NSString * wbTreatmentId;                         //@synthesize wbTreatmentId=_wbTreatmentId - In the implementation block
@property (nonatomic,readonly) BOOL hasWbTreatmentName; 
@property (nonatomic,retain) NSString * wbTreatmentName;                       //@synthesize wbTreatmentName=_wbTreatmentName - In the implementation block
@property (nonatomic,readonly) BOOL hasLocaleIdentifier; 
@property (nonatomic,retain) NSString * localeIdentifier;                      //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasMessageDurationMilliseconds; 
@property (assign,nonatomic) int messageDurationMilliseconds;                  //@synthesize messageDurationMilliseconds=_messageDurationMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasMessageLength; 
@property (assign,nonatomic) int messageLength;                                //@synthesize messageLength=_messageLength - In the implementation block
@property (assign,nonatomic) BOOL hasMessageWords; 
@property (assign,nonatomic) int messageWords;                                 //@synthesize messageWords=_messageWords - In the implementation block
-(NSString *)localeIdentifier;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocaleIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasZkwExperimentId;
-(BOOL)hasZkwTreatmentId;
-(BOOL)hasZkwTreatmentName;
-(BOOL)hasWbExperimentId;
-(BOOL)hasWbTreatmentId;
-(BOOL)hasWbTreatmentName;
-(void)setMessageDurationMilliseconds:(int)arg1 ;
-(void)setHasMessageDurationMilliseconds:(BOOL)arg1 ;
-(BOOL)hasMessageDurationMilliseconds;
-(void)setMessageLength:(int)arg1 ;
-(void)setHasMessageLength:(BOOL)arg1 ;
-(BOOL)hasMessageLength;
-(void)setMessageWords:(int)arg1 ;
-(void)setHasMessageWords:(BOOL)arg1 ;
-(BOOL)hasMessageWords;
-(NSString *)zkwExperimentId;
-(void)setZkwExperimentId:(NSString *)arg1 ;
-(NSString *)zkwTreatmentId;
-(void)setZkwTreatmentId:(NSString *)arg1 ;
-(NSString *)zkwTreatmentName;
-(void)setZkwTreatmentName:(NSString *)arg1 ;
-(NSString *)wbExperimentId;
-(void)setWbExperimentId:(NSString *)arg1 ;
-(NSString *)wbTreatmentId;
-(void)setWbTreatmentId:(NSString *)arg1 ;
-(NSString *)wbTreatmentName;
-(void)setWbTreatmentName:(NSString *)arg1 ;
-(int)messageDurationMilliseconds;
-(int)messageLength;
-(int)messageWords;
@end

