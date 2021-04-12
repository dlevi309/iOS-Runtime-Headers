/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol UISApplicationSupportServiceDelegate <NSObject>
@optional
-(BOOL)service:(id)arg1 overrideClientInitialization:(id)arg2;
-(id)service:(id)arg1 initializeClient:(id)arg2;
-(id)applicationInitializationContextForClient:(id)arg1;
-(void)service:(id)arg1 initializeClient:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)requestPasscodeUnlockUIForClient:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)destroyScenesWithPersistentIdentifiers:(id)arg1 animationType:(unsigned long long)arg2 destroySessions:(BOOL)arg3 forClient:(id)arg4 completion:(/*^block*/id)arg5;

@end

