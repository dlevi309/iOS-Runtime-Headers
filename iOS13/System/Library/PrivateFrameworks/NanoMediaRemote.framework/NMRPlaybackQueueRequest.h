/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRPlaybackQueueRequestProtobuf, NSString;

@interface NMRPlaybackQueueRequest : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRPlaybackQueueRequestProtobuf* _protobuf;

}

@property (nonatomic,readonly) void* request; 
@property (nonatomic,readonly) void* playerPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void*)request;
-(void*)playerPath;
-(id)initWithRequest:(void*)arg1 playerPath:(void*)arg2 ;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(void)performWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

