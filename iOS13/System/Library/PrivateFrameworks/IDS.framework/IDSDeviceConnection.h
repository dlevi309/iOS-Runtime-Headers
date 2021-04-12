/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class _IDSDeviceConnection, NSInputStream, NSOutputStream, NSDictionary;

@interface IDSDeviceConnection : NSObject {

	_IDSDeviceConnection* _internal;

}

@property (nonatomic,readonly) _IDSDeviceConnection * _internal; 
@property (nonatomic,readonly) int socket; 
@property (nonatomic,readonly) unsigned long long mtu; 
@property (nonatomic,readonly) NSInputStream * inputStream; 
@property (nonatomic,readonly) NSOutputStream * outputStream; 
@property (nonatomic,readonly) NSDictionary * metrics; 
-(void)dealloc;
-(id)description;
-(void)close;
-(_IDSDeviceConnection *)_internal;
-(NSOutputStream *)outputStream;
-(NSDictionary *)metrics;
-(NSInputStream *)inputStream;
-(unsigned long long)mtu;
-(int)socket;
-(void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(BOOL)updateConnectionWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)initSocketWithDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id)initStreamWithDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
@end

