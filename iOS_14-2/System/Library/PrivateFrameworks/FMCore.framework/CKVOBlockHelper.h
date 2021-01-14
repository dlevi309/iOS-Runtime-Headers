/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)dump;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSMutableDictionary *)tokensByContext;
-(id)initWithObject:(id)arg1 ;
-(long long)nextIdentifier;
-(id)debugDescription;
-(id)observedObject;
-(void)setNextIdentifier:(long long)arg1 ;
-(void)removeHandlerForKey:(id)arg1 ;
-(id)allKVOObservers;
-(id)insertNewTokenForKeyPath:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

