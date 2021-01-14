/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithProtobufData:(id)arg1 ;
-(NSNumber *)originIdentifier;
-(id)protobufData;
-(NSDate *)serializationDate;
-(id)_initWithNowPlayingInfoDigest:(id)arg1 applicationInfoDigest:(id)arg2 supportedCommandsDigest:(id)arg3 playbackQueueDigest:(id)arg4 originIdentifier:(id)arg5 ;
-(NSData *)nowPlayingInfoDigest;
-(NSData *)applicationInfoDigest;
-(NSData *)supportedCommandsDigest;
-(NSData *)playbackQueueDigest;
@end

