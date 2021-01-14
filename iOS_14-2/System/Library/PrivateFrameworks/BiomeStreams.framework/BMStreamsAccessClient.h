/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
*/


@class NSXPCListener;

@interface BMStreamsAccessClient : NSObject {

	NSXPCListener* _listener;
	long long _readExtensionHandle;
	long long _writeExtensionHandle;

}
-(BOOL)requestWriteAccessTokenForStream:(long long)arg1 ;
-(void)dealloc;
-(BOOL)requestReadAccessTokenForStream:(long long)arg1 ;
-(BOOL)hasAccessForStream:(long long)arg1 permission:(const char*)arg2 ;
-(BOOL)hasReadAccessForStream:(long long)arg1 ;
-(BOOL)hasWriteAccessForStream:(long long)arg1 ;
@end

