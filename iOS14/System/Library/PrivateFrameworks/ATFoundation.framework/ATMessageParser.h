/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(Class)messageClass;
-(NSError *)parserError;
-(id)initWithMessageClass:(Class)arg1 ;
-(void)dealloc;
-(void)setObjectParsedBlock:(id)arg1 ;
-(id)objectParsedBlock;
-(BOOL)_parseObjectFromData:(id)arg1 ;
-(BOOL)_parseObjectLength:(const char*)arg1 length:(unsigned long long)arg2 bytesConsumed:(unsigned long long*)arg3 ;
-(BOOL)processData:(const char*)arg1 length:(long long)arg2 ;
@end

