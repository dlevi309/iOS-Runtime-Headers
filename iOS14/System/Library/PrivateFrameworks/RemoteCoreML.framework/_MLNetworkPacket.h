/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBuffer:(NSMutableData *)arg1 ;
-(id)init;
-(NSMutableData *)buffer;
-(void)reset;
-(unsigned long long)command;
-(void)setCommand:(unsigned long long)arg1 ;
-(void)resetMetadata;
-(unsigned long long)sizeOfPacket;
-(void)setSizeOfPacket:(unsigned long long)arg1 ;
-(void)cleanupDoubleBuffer;
-(void)setDoubleBuffer:(NSMutableData *)arg1 ;
-(void)resetDoubleBuffer;
-(NSMutableData *)doubleBuffer;
@end

