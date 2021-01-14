/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


#import <TipsCore/TipsCore-Structs.h>
@interface TPSKVOManager : NSObject {

	id _observer;
	CFDictionaryRef _KVODictionary;

}

@property (assign,nonatomic,__weak) id observer;                         //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) CFDictionaryRef KVODictionary;              //@synthesize KVODictionary=_KVODictionary - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setObserver:(id)arg1 ;
-(id)observer;
-(void)removeAllKVOObjects;
-(CFDictionaryRef)KVODictionary;
-(void)addKVOObject:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeKVOObject:(id)arg1 forKeyPath:(id)arg2 ;
-(void)removeKVOForObject:(id)arg1 ;
-(void)setKVODictionary:(CFDictionaryRef)arg1 ;
-(id)initWithObserver:(id)arg1 ;
-(void)dealloc;
@end

