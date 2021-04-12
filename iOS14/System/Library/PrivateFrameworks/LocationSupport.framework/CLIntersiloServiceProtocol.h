/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/


@protocol CLIntersiloServiceProtocol <CLIntersiloProxyDelegateProtocol>
@optional
-(void)setDelegateEntityName:(const char*)arg1;
-(void)registerDelegate:(id)arg1 inSilo:(id)arg2;
-(void)beginService;
-(void)endService;

@required
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2;
+(id)getSilo;

@end

