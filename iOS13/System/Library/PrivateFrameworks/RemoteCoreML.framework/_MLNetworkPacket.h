/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteCoreML.framework/RemoteCoreML
*/


@class NSMutableData;

@interface _MLNetworkPacket : NSObject {

	NSMutableData* _buffer;
	NSMutableData* _doubleBuffer;
	unsigned long long _sizeOfPacket;
	unsigned long long _command;

}

@property (nonatomic,retain) NSMutableData * buffer;                       //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,retain) NSMutableData * doubleBuffer;                 //@synthesize doubleBuffer=_doubleBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long sizeOfPacket;              //@synthesize sizeOfPacket=_sizeOfPacket - In the implementation block
@property (assign,nonatomic) unsigned long long command;                   //@synthesize command=_command - In the implementation block
-(id)init;
-(void)reset;
-(void)setBuffer:(NSMutableData *)arg1 ;
-(NSMutableData *)buffer;
-(void)setCommand:(unsigned long long)arg1 ;
-(unsigned long long)command;
-(void)resetMetadata;
-(unsigned long long)sizeOfPacket;
-(void)setSizeOfPacket:(unsigned long long)arg1 ;
-(void)cleanupDoubleBuffer;
-(void)setDoubleBuffer:(NSMutableData *)arg1 ;
-(void)resetDoubleBuffer;
-(NSMutableData *)doubleBuffer;
@end

