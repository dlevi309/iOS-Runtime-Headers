/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
*/


@class NSInputStream;

@interface PBMessageStreamReader : NSObject {

	NSInputStream* _stream;
	Class _classOfNextMessage;
	unsigned long long _position;

}

@property (assign,nonatomic) Class classOfNextMessage;                   //@synthesize classOfNextMessage=_classOfNextMessage - In the implementation block
@property (nonatomic,readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
-(void)dealloc;
-(id)initWithStream:(id)arg1 ;
-(unsigned long long)position;
-(void)setClassOfNextMessage:(Class)arg1 ;
-(id)nextMessage;
-(Class)classOfNextMessage;
@end

