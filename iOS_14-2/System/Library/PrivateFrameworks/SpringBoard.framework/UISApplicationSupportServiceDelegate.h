/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol UISApplicationSupportServiceDelegate <NSObject>
@optional
-(id)service:(id)arg1 initializeClient:(id)arg2;
-(void)destroyScenesWithPersistentIdentifiers:(id)arg1 animationType:(unsigned long long)arg2 destroySessions:(BOOL)arg3 forClient:(id)arg4 completion:(/*^block*/id)arg5;
-(id)service:(id)arg1 initializeClient:(id)arg2 withParameters:(id)arg3;
-(void)service:(id)arg1 initializeClient:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(id)applicationInitializationContextForClient:(id)arg1;
-(void)requestPasscodeUnlockUIForClient:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(BOOL)service:(id)arg1 overrideClientInitialization:(id)arg2;

@end

