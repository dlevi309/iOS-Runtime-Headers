/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection
*/


@class SignpostSerializationFilterConfiguration, NSMutableArray, SignpostSupportObjectExtractor;

@interface SignpostSupportObjectSerializer : NSObject {

	BOOL _redactPrivacySensitiveData;
	unsigned long long _maxBatchSize;
	unsigned long long _maxBytesSize;
	/*^block*/id _serializedSignpostEventBlock;
	/*^block*/id _serializedLogMessageBlock;
	SignpostSerializationFilterConfiguration* _filterConfiguration;
	NSMutableArray* _outstandingSignpostObjects;
	NSMutableArray* _outstandingLogMessage;
	SignpostSupportObjectExtractor* _extractor;

}

@property (nonatomic,retain) NSMutableArray * outstandingSignpostObjects;                                 //@synthesize outstandingSignpostObjects=_outstandingSignpostObjects - In the implementation block
@property (nonatomic,retain) NSMutableArray * outstandingLogMessage;                                      //@synthesize outstandingLogMessage=_outstandingLogMessage - In the implementation block
@property (nonatomic,retain) SignpostSupportObjectExtractor * extractor;                                  //@synthesize extractor=_extractor - In the implementation block
@property (assign,nonatomic) unsigned long long maxBatchSize;                                             //@synthesize maxBatchSize=_maxBatchSize - In the implementation block
@property (assign,nonatomic) unsigned long long maxBytesSize;                                             //@synthesize maxBytesSize=_maxBytesSize - In the implementation block
@property (nonatomic,copy) id serializedSignpostEventBlock;                                               //@synthesize serializedSignpostEventBlock=_serializedSignpostEventBlock - In the implementation block
@property (nonatomic,copy) id serializedLogMessageBlock;                                                  //@synthesize serializedLogMessageBlock=_serializedLogMessageBlock - In the implementation block
@property (assign,nonatomic) BOOL redactPrivacySensitiveData;                                             //@synthesize redactPrivacySensitiveData=_redactPrivacySensitiveData - In the implementation block
@property (nonatomic,retain) SignpostSerializationFilterConfiguration * filterConfiguration;              //@synthesize filterConfiguration=_filterConfiguration - In the implementation block
-(id)init;
-(unsigned long long)maxBatchSize;
-(void)setMaxBatchSize:(unsigned long long)arg1 ;
-(void)setFilterConfiguration:(SignpostSerializationFilterConfiguration *)arg1 ;
-(SignpostSerializationFilterConfiguration *)filterConfiguration;
-(void)setExtractor:(SignpostSupportObjectExtractor *)arg1 ;
-(SignpostSupportObjectExtractor *)extractor;
-(void)setSerializedLogMessageBlock:(id)arg1 ;
-(void)setSerializedSignpostEventBlock:(id)arg1 ;
-(void)setRedactPrivacySensitiveData:(BOOL)arg1 ;
-(BOOL)serializeLogArchiveWithPath:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 errorOut:(id*)arg4 ;
-(BOOL)redactPrivacySensitiveData;
-(unsigned long long)maxBytesSize;
-(id)_dataArrayForSignpostSupportObjectArray:(id)arg1 errorOut:(id*)arg2 ;
-(id)serializedSignpostEventBlock;
-(id)serializedLogMessageBlock;
-(BOOL)_hasProcessingBlocks;
-(id)_sanityCheckParameters;
-(NSMutableArray *)outstandingSignpostObjects;
-(NSMutableArray *)outstandingLogMessage;
-(void)setOutstandingSignpostObjects:(NSMutableArray *)arg1 ;
-(void)setOutstandingLogMessage:(NSMutableArray *)arg1 ;
-(BOOL)serializeNotificationsWithIntervalTimeoutInSeconds:(unsigned long long)arg1 errorOut:(id*)arg2 ;
-(void)setMaxBytesSize:(unsigned long long)arg1 ;
@end

