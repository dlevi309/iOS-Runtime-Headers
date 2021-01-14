/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithProtobufData:(id)arg1 ;
-(id)initWithRequest:(void*)arg1 playerPath:(void*)arg2 ;
-(void*)request;
-(id)protobufData;
-(void*)playerPath;
-(void)performWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

