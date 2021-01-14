/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


#import <CoreUtils/CoreUtils-Structs.h>
@class NSError, NSArray;

@interface CUWriteRequest : NSObject {

	NSError* _error;
	iovec* _iov[16];
	iovec* _iop;
	int _ion;
	unsigned long long _offset;
	unsigned char _messageUUID[16];
	BOOL _endOfData;
	BOOL _hasMessageUUID;
	iovec* _bytesIOArray;
	unsigned long long _bytesIOCount;
	unsigned long long _bytesIOMaxCount;
	/*^block*/id _completion;
	NSArray* _dataArray;

}

@property (nonatomic,readonly) iovec* bytesIOArray;                             //@synthesize bytesIOArray=_bytesIOArray - In the implementation block
@property (assign,nonatomic) unsigned long long bytesIOCount;                   //@synthesize bytesIOCount=_bytesIOCount - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesIOMaxCount;              //@synthesize bytesIOMaxCount=_bytesIOMaxCount - In the implementation block
@property (nonatomic,copy) id completion;                                       //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSArray * dataArray;                               //@synthesize dataArray=_dataArray - In the implementation block
@property (assign,nonatomic) BOOL endOfData;                                    //@synthesize endOfData=_endOfData - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) char* messageUUID; 
@property (assign,nonatomic) BOOL hasMessageUUID;                               //@synthesize hasMessageUUID=_hasMessageUUID - In the implementation block
-(NSArray *)dataArray;
-(void)setCompletion:(id)arg1 ;
-(id)init;
-(id)completion;
-(NSError *)error;
-(BOOL)endOfData;
-(unsigned long long)bytesIOCount;
-(unsigned long long)bytesIOMaxCount;
-(void)setEndOfData:(BOOL)arg1 ;
-(char*)messageUUID;
-(BOOL)hasMessageUUID;
-(void)setHasMessageUUID:(BOOL)arg1 ;
-(iovec*)bytesIOArray;
-(void)setBytesIOCount:(unsigned long long)arg1 ;
-(void)setDataArray:(NSArray *)arg1 ;
@end

