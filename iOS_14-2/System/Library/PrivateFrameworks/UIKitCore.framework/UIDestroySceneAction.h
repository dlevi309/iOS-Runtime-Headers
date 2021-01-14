/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class NSSet;

@interface UIDestroySceneAction : BSAction

@property (nonatomic,readonly) unsigned long long preferredAnimationType; 
@property (nonatomic,readonly) NSSet * persistedIdentifiers; 
@property (nonatomic,readonly) BOOL destroySceneSession; 
-(id)initWithPersistedIdentifiers:(id)arg1 preferredAnimationType:(unsigned long long)arg2 forDestroyingSession:(BOOL)arg3 callbackQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithPersistedIdentifiers:(id)arg1 preferredAnimationType:(unsigned long long)arg2 callbackQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)UIActionType;
-(id)initWithPreferredAnimationType:(unsigned long long)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(unsigned long long)preferredAnimationType;
-(NSSet *)persistedIdentifiers;
-(BOOL)destroySceneSession;
@end

