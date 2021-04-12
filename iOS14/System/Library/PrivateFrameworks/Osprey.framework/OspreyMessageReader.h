/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@class NSMutableData;

@interface OspreyMessageReader : NSObject {

	/*^block*/id _messageHandler;
	unsigned long long _readerState;
	unsigned long long _messageSequence;
	BOOL _currentMessageCompressed;
	unsigned long long _currentMessageSize;
	NSMutableData* _messageBuffer;

}
-(void)readData:(id)arg1 ;
-(id)initWithMessageHandler:(/*^block*/id)arg1 ;
-(void)_produceMessageBody:(id)arg1 ;
@end

