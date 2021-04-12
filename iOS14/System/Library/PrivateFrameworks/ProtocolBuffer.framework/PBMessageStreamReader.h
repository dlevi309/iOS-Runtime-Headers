/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithStream:(id)arg1 ;
-(unsigned long long)position;
-(void)setClassOfNextMessage:(Class)arg1 ;
-(id)nextMessage;
-(Class)classOfNextMessage;
-(void)dealloc;
@end

