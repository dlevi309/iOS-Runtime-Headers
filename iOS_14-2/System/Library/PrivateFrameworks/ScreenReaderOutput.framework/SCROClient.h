/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class NSLock;

@interface SCROClient : NSObject {

	NSLock* _lock;
	unsigned _identifier;
	unsigned _port;
	int _pid;
	CFArrayRef _queue;
	CFSetRef _callbackSet;

}
+(void)initialize;
+(id)addClientGetIdentifier:(unsigned*)arg1 token:(SCD_Struct_SC10)arg2 getPort:(unsigned*)arg3 ;
+(long long)removeClientWithPort:(unsigned)arg1 ;
+(BOOL)isClientTrustedWithPortToken:(SCD_Struct_SC10)arg1 ;
+(void)sendCallback:(id)arg1 ;
+(id)callbacksForClientIdentifier:(unsigned)arg1 ;
+(void)registerCallbackWithKey:(int)arg1 forClientIdentifier:(unsigned)arg2 ;
-(void)_unlock;
-(void)_invalidate;
-(void)_lock;
-(id)init;
-(void)dealloc;
-(BOOL)_wantsCallback:(id)arg1 ;
-(void)_sendCallback:(id)arg1 ;
-(id)_dequeueCallbacks;
-(void)_registerCallbackWithKey:(int)arg1 ;
@end

