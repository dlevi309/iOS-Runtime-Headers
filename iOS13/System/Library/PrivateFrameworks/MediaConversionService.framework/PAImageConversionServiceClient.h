/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/


@class NSXPCConnection;

@interface PAImageConversionServiceClient : NSObject {

	NSXPCConnection* _serviceConnection;

}

@property (retain) NSXPCConnection * serviceConnection;              //@synthesize serviceConnection=_serviceConnection - In the implementation block
-(id)init;
-(void)dealloc;
-(void)convertImageAtSourceURLCollection:(id)arg1 toDestinationURLCollection:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSXPCConnection *)serviceConnection;
-(void)setServiceConnection:(NSXPCConnection *)arg1 ;
-(void)setupServiceConnection;
-(void)convertImageAtSourceURL:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

