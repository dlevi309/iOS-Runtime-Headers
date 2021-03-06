/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface LCServiceLoggingParameters : PBCodable {

	BOOL _hasQos;
	BOOL _hasMessageSizeQuotaInBytes;
	BOOL _hasTotalDiskSizeQuotaInBytes;
	BOOL _optOutOfCompression;
	BOOL _hasOptOutOfCompression;
	BOOL _hasUploadSamplingRate;
	BOOL _hasRealtimeSamplingRate;
	BOOL _hasEntropy;
	BOOL _overrideIntoSamplePopulation;
	BOOL _hasOverrideIntoSamplePopulation;
	BOOL _hasUploadEndpointURL;
	int _qos;
	int _messageSizeQuotaInBytes;
	int _totalDiskSizeQuotaInBytes;
	float _uploadSamplingRate;
	float _realtimeSamplingRate;
	NSData* _entropy;
	NSString* _uploadEndpointURL;

}

@property (assign,nonatomic) int qos;                                           //@synthesize qos=_qos - In the implementation block
@property (assign,nonatomic) BOOL hasQos;                                       //@synthesize hasQos=_hasQos - In the implementation block
@property (assign,nonatomic) int messageSizeQuotaInBytes;                       //@synthesize messageSizeQuotaInBytes=_messageSizeQuotaInBytes - In the implementation block
@property (assign,nonatomic) BOOL hasMessageSizeQuotaInBytes;                   //@synthesize hasMessageSizeQuotaInBytes=_hasMessageSizeQuotaInBytes - In the implementation block
@property (assign,nonatomic) int totalDiskSizeQuotaInBytes;                     //@synthesize totalDiskSizeQuotaInBytes=_totalDiskSizeQuotaInBytes - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDiskSizeQuotaInBytes;                 //@synthesize hasTotalDiskSizeQuotaInBytes=_hasTotalDiskSizeQuotaInBytes - In the implementation block
@property (assign,nonatomic) BOOL optOutOfCompression;                          //@synthesize optOutOfCompression=_optOutOfCompression - In the implementation block
@property (assign,nonatomic) BOOL hasOptOutOfCompression;                       //@synthesize hasOptOutOfCompression=_hasOptOutOfCompression - In the implementation block
@property (assign,nonatomic) float uploadSamplingRate;                          //@synthesize uploadSamplingRate=_uploadSamplingRate - In the implementation block
@property (assign,nonatomic) BOOL hasUploadSamplingRate;                        //@synthesize hasUploadSamplingRate=_hasUploadSamplingRate - In the implementation block
@property (assign,nonatomic) float realtimeSamplingRate;                        //@synthesize realtimeSamplingRate=_realtimeSamplingRate - In the implementation block
@property (assign,nonatomic) BOOL hasRealtimeSamplingRate;                      //@synthesize hasRealtimeSamplingRate=_hasRealtimeSamplingRate - In the implementation block
@property (nonatomic,copy) NSData * entropy;                                    //@synthesize entropy=_entropy - In the implementation block
@property (assign,nonatomic) BOOL hasEntropy;                                   //@synthesize hasEntropy=_hasEntropy - In the implementation block
@property (assign,nonatomic) BOOL overrideIntoSamplePopulation;                 //@synthesize overrideIntoSamplePopulation=_overrideIntoSamplePopulation - In the implementation block
@property (assign,nonatomic) BOOL hasOverrideIntoSamplePopulation;              //@synthesize hasOverrideIntoSamplePopulation=_hasOverrideIntoSamplePopulation - In the implementation block
@property (nonatomic,copy) NSString * uploadEndpointURL;                        //@synthesize uploadEndpointURL=_uploadEndpointURL - In the implementation block
@property (assign,nonatomic) BOOL hasUploadEndpointURL;                         //@synthesize hasUploadEndpointURL=_hasUploadEndpointURL - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(void)setQos:(int)arg1 ;
-(int)qos;
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(BOOL)hasQos;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)entropy;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMessageSizeQuotaInBytes:(int)arg1 ;
-(void)setTotalDiskSizeQuotaInBytes:(int)arg1 ;
-(void)setOptOutOfCompression:(BOOL)arg1 ;
-(void)setUploadSamplingRate:(float)arg1 ;
-(void)setRealtimeSamplingRate:(float)arg1 ;
-(void)setEntropy:(NSData *)arg1 ;
-(void)setOverrideIntoSamplePopulation:(BOOL)arg1 ;
-(void)setUploadEndpointURL:(NSString *)arg1 ;
-(int)messageSizeQuotaInBytes;
-(int)totalDiskSizeQuotaInBytes;
-(BOOL)optOutOfCompression;
-(float)uploadSamplingRate;
-(float)realtimeSamplingRate;
-(BOOL)overrideIntoSamplePopulation;
-(NSString *)uploadEndpointURL;
-(void)setHasQos:(BOOL)arg1 ;
-(BOOL)hasMessageSizeQuotaInBytes;
-(void)setHasMessageSizeQuotaInBytes:(BOOL)arg1 ;
-(BOOL)hasTotalDiskSizeQuotaInBytes;
-(void)setHasTotalDiskSizeQuotaInBytes:(BOOL)arg1 ;
-(BOOL)hasOptOutOfCompression;
-(void)setHasOptOutOfCompression:(BOOL)arg1 ;
-(BOOL)hasUploadSamplingRate;
-(void)setHasUploadSamplingRate:(BOOL)arg1 ;
-(BOOL)hasRealtimeSamplingRate;
-(void)setHasRealtimeSamplingRate:(BOOL)arg1 ;
-(BOOL)hasEntropy;
-(void)setHasEntropy:(BOOL)arg1 ;
-(BOOL)hasOverrideIntoSamplePopulation;
-(void)setHasOverrideIntoSamplePopulation:(BOOL)arg1 ;
-(BOOL)hasUploadEndpointURL;
-(void)setHasUploadEndpointURL:(BOOL)arg1 ;
@end

