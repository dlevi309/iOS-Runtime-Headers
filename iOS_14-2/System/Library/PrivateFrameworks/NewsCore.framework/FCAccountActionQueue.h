/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCPersistentDictionary;

@interface FCAccountActionQueue : NSObject {

	FCPersistentDictionary* _persistentDictionary;

}

@property (nonatomic,retain) FCPersistentDictionary * persistentDictionary;              //@synthesize persistentDictionary=_persistentDictionary - In the implementation block
-(id)init;
-(id)initWithFileURL:(id)arg1 ;
-(FCPersistentDictionary *)persistentDictionary;
-(BOOL)readLocalDataHint;
-(BOOL)enqueueActionWithType:(long long)arg1 ;
-(id)peekAtActionTypes;
-(BOOL)popActionTypesUpToCount:(unsigned long long)arg1 setLocalDataHintIfNeeded:(BOOL)arg2 ;
-(void)setPersistentDictionary:(FCPersistentDictionary *)arg1 ;
@end

