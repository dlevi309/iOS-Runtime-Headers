/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/


@protocol CLIntersiloServiceProtocol <CLIntersiloProxyDelegateProtocol>
@optional
-(void)registerDelegate:(id)arg1 inSilo:(id)arg2;
-(void)beginService;
-(void)endService;
-(void)setDelegateEntityName:(const char*)arg1;

@required
+(BOOL)isSupported;
+(id)getSilo;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2;

@end

