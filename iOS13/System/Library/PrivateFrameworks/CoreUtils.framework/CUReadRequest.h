/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSError, NSMutableData, NSData;

@interface CUReadRequest : NSObject {

	char* _bufferPtr;
	NSError* _error;
	unsigned long long _length;
	unsigned char _messageUUID[16];
	BOOL _hasMessageUUID;
	unsigned _statusFlags;
	void* _bufferBytes;
	NSMutableData* _bufferData;
	/*^block*/id _completion;
	NSData* _data;
	unsigned long long _minLength;
	unsigned long long _maxLength;

}

@property (nonatomic,retain) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) void* bufferBytes;                         //@synthesize bufferBytes=_bufferBytes - In the implementation block
@property (nonatomic,retain) NSMutableData * bufferData;                //@synthesize bufferData=_bufferData - In the implementation block
@property (nonatomic,copy) id completion;                               //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long length;               //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) unsigned long long minLength;              //@synthesize minLength=_minLength - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;              //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,readonly) char* messageUUID; 
@property (assign,nonatomic) BOOL hasMessageUUID;                       //@synthesize hasMessageUUID=_hasMessageUUID - In the implementation block
@property (assign,nonatomic) unsigned statusFlags;                      //@synthesize statusFlags=_statusFlags - In the implementation block
-(unsigned long long)length;
-(NSData *)data;
-(NSError *)error;
-(void)setData:(NSData *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(unsigned)statusFlags;
-(unsigned long long)minLength;
-(unsigned long long)maxLength;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(void)setMinLength:(unsigned long long)arg1 ;
-(void)setBufferData:(NSMutableData *)arg1 ;
-(NSMutableData *)bufferData;
-(void*)bufferBytes;
-(void)setStatusFlags:(unsigned)arg1 ;
-(char*)messageUUID;
-(void)setBufferBytes:(void*)arg1 ;
-(BOOL)hasMessageUUID;
-(void)setHasMessageUUID:(BOOL)arg1 ;
@end

