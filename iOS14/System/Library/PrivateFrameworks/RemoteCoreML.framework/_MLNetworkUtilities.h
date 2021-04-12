/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteCoreML.framework/RemoteCoreML
*/


@interface _MLNetworkUtilities : NSObject
+(/*^block*/id)configureTLS:(id)arg1 ;
+(id)createSecureConnectionParameter:(/*^block*/id)arg1 useUDP:(BOOL)arg2 ;
+(id)setProtocolStack:(id)arg1 family:(unsigned long long)arg2 ;
+(id)doInitNetwork:(id)arg1 ;
+(void)setupBonjour:(id)arg1 name:(const char*)arg2 useBonjour:(BOOL)arg3 useUDP:(BOOL)arg4 ;
+(void)setupListenerStateChangeHandler:(id)arg1 useUDP:(BOOL)arg2 ;
+(void)setAWDL:(id)arg1 useAWDL:(BOOL)arg2 ;
+(void)bindEndPoints:(id)arg1 localAddr:(const char*)arg2 localPort:(const char*)arg3 ;
@end

