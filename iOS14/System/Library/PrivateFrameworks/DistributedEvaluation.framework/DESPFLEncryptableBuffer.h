/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/


@class NSMutableData, NSError;

@interface DESPFLEncryptableBuffer : NSObject {

	NSMutableData* _serializedData;
	unsigned long long _dataLengthVarintOffset;
	unsigned long long _mutableFloatsOffset;
	unsigned long long _ivOffset;
	unsigned long long _sizeOfDataTransport;
	unsigned long long _sizeOfDataTransportOffset;
	NSError* _encryptionError;
	BOOL _encryptionWasAttempted;
	BOOL _transportIsBfloat16;
	unsigned long long _count;

}

@property (nonatomic,readonly) float* mutableDataNumbers; 
@property (nonatomic,readonly) unsigned long long count;               //@synthesize count=_count - In the implementation block
-(unsigned long long)count;
-(id)initWithEncryptor:(id)arg1 count:(unsigned long long)arg2 ;
-(float*)mutableDataNumbers;
-(id)encryptedDataWithPublicKey:(id)arg1 error:(id*)arg2 ;
@end

