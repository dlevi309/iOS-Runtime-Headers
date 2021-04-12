/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@class NSMutableDictionary;

@interface CKVOBlockHelper : NSObject {

	id _observedObject;
	NSMutableDictionary* _tokensByContext;
	long long _nextIdentifier;

}

@property (nonatomic,__weak,readonly) id observedObject;                           //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * tokensByContext;              //@synthesize tokensByContext=_tokensByContext - In the implementation block
@property (assign,nonatomic) long long nextIdentifier;                             //@synthesize nextIdentifier=_nextIdentifier - In the implementation block
-(void)dealloc;
-(id)debugDescription;
-(id)initWithObject:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)dump;
-(id)observedObject;
-(void)removeHandlerForKey:(id)arg1 ;
-(id)insertNewTokenForKeyPath:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)allKVOObservers;
-(NSMutableDictionary *)tokensByContext;
-(long long)nextIdentifier;
-(void)setNextIdentifier:(long long)arg1 ;
@end

