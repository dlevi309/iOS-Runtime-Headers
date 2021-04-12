/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRMediaRemoteGetStateMessageProfobuf, NSData, NSNumber, NSDate, NSString;

@interface NMRMediaRemoteGetStateMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRMediaRemoteGetStateMessageProfobuf* _protobuf;

}

@property (nonatomic,readonly) NSData * nowPlayingInfoDigest; 
@property (nonatomic,readonly) NSData * applicationInfoDigest; 
@property (nonatomic,readonly) NSData * supportedCommandsDigest; 
@property (nonatomic,readonly) NSData * playbackQueueDigest; 
@property (nonatomic,readonly) NSNumber * originIdentifier; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithNowPlayingInfoDigest:(id)arg1 applicationInfoDigest:(id)arg2 supportedCommandsDigest:(id)arg3 playbackQueueDigest:(id)arg4 originIdentifier:(id)arg5 ;
-(NSNumber *)originIdentifier;
-(NSDate *)serializationDate;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(id)_initWithNowPlayingInfoDigest:(id)arg1 applicationInfoDigest:(id)arg2 supportedCommandsDigest:(id)arg3 playbackQueueDigest:(id)arg4 originIdentifier:(id)arg5 ;
-(NSData *)nowPlayingInfoDigest;
-(NSData *)applicationInfoDigest;
-(NSData *)supportedCommandsDigest;
-(NSData *)playbackQueueDigest;
@end

