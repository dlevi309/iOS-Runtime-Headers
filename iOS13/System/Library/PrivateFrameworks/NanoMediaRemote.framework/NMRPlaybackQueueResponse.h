/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRPlaybackQueueResponseProtobuf, NSString;

@interface NMRPlaybackQueueResponse : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRPlaybackQueueResponseProtobuf* _protobuf;

}

@property (nonatomic,readonly) void* playbackQueue; 
@property (nonatomic,readonly) CFErrorRef error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CFErrorRef)error;
-(void*)playbackQueue;
-(id)protobufData;
-(id)initWithPlaybackQueue:(void*)arg1 error:(CFErrorRef)arg2 ;
-(id)initWithProtobufData:(id)arg1 ;
-(void)invokeCompletion:(/*^block*/id)arg1 ;
@end

