/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableData, _MRTransactionKeyProtobuf, NSString, NSData, _MRTransactionPacketProtobuf;

@interface MRTransactionPacket : NSObject <NSCopying> {

	NSMutableData* _data;
	_MRTransactionKeyProtobuf* _key;
	unsigned long long _writeLength;
	unsigned long long _writePosition;
	NSString* _identifier;
	unsigned long long _totalLength;
	unsigned long long _totalWritePosition;

}

@property (nonatomic,readonly) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) _MRTransactionKeyProtobuf * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) _MRTransactionPacketProtobuf * protobuf; 
@property (assign,nonatomic) unsigned long long writeLength;                           //@synthesize writeLength=_writeLength - In the implementation block
@property (nonatomic,readonly) unsigned long long writePosition;                       //@synthesize writePosition=_writePosition - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long actualLength; 
@property (nonatomic,readonly) unsigned long long totalLength;                         //@synthesize totalLength=_totalLength - In the implementation block
@property (nonatomic,readonly) unsigned long long totalWritePosition;                  //@synthesize totalWritePosition=_totalWritePosition - In the implementation block
@property (getter=isReadComplete,nonatomic,readonly) BOOL readComplete; 
@property (getter=isWriteComplete,nonatomic,readonly) BOOL writeComplete; 
-(BOOL)isComplete;
-(unsigned long long)totalLength;
-(id)initWithData:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)actualLength;
-(BOOL)isReadComplete;
-(id)initWithPackets:(id)arg1 ;
-(BOOL)writeComplete;
-(void)setWriteLength:(unsigned long long)arg1 ;
-(unsigned long long)writeLength;
-(BOOL)isWriteComplete;
-(unsigned long long)writePosition;
-(unsigned long long)totalWritePosition;
-(id)description;
-(NSData *)data;
-(_MRTransactionKeyProtobuf *)key;
-(_MRTransactionPacketProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

