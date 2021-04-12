/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/


@class NSMutableData, NSError;

@interface ATMessageParser : NSObject {

	NSMutableData* _parserData;
	unsigned long long _curObjectLength;
	void* _objectDataBuffer;
	unsigned long long _objectDataLen;
	char _varIntBuf[10];
	unsigned long long _varIntDataLen;
	NSError* _parserError;
	Class _messageClass;
	/*^block*/id _objectParsedBlock;

}

@property (nonatomic,readonly) NSError * parserError;              //@synthesize parserError=_parserError - In the implementation block
@property (nonatomic,readonly) Class messageClass;                 //@synthesize messageClass=_messageClass - In the implementation block
@property (nonatomic,copy) id objectParsedBlock;                   //@synthesize objectParsedBlock=_objectParsedBlock - In the implementation block
-(void)dealloc;
-(NSError *)parserError;
-(Class)messageClass;
-(void)setObjectParsedBlock:(id)arg1 ;
-(id)objectParsedBlock;
-(BOOL)_parseObjectFromData:(id)arg1 ;
-(id)initWithMessageClass:(Class)arg1 ;
-(BOOL)_parseObjectLength:(const char*)arg1 length:(unsigned long long)arg2 bytesConsumed:(unsigned long long*)arg3 ;
-(BOOL)processData:(const char*)arg1 length:(long long)arg2 ;
@end

