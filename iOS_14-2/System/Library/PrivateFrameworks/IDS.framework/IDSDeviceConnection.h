/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)mtu;
-(NSDictionary *)metrics;
-(_IDSDeviceConnection *)_internal;
-(int)socket;
-(void)close;
-(id)initSocketWithDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id)initStreamWithDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(NSOutputStream *)outputStream;
-(id)description;
-(NSInputStream *)inputStream;
-(void)dealloc;
-(void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(BOOL)updateConnectionWithOptions:(id)arg1 error:(id*)arg2 ;
@end

