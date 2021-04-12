/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)_invalidate;
-(void)_lock;
-(void)_unlock;
-(BOOL)_wantsCallback:(id)arg1 ;
-(void)_sendCallback:(id)arg1 ;
-(id)_dequeueCallbacks;
-(void)_registerCallbackWithKey:(int)arg1 ;
@end

