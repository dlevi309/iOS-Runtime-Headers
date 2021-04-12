/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
*/

#import <CoreMedia/CoreMedia-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface FigFlatToNSDictionaryWrapper : NSDictionary {

	OpaqueFigFlatDictionaryRef _flatDictionary;
	OpaqueFigFlatDictionaryKeySpecRef _keySpec;
	int _keySpace;
	void* _dictionaryBacking;
	void* _exportedKeySpec;
	/*^block*/id _deallocatorBlock;
	os_unfair_lock_s _lazyInitializationMutex;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)_ensureFlatDictionaryIsInitialized;
-(id)arrayForFlatDictionaryArrayDataKey:(SCD_Struct_Fi3*)arg1 ;
-(id)initWithFlatDictionary:(OpaqueFigFlatDictionaryRef)arg1 keySpec:(OpaqueFigFlatDictionaryKeySpecRef)arg2 ;
-(id)initLazilyWithFlatDictionaryBacking:(void*)arg1 exportedKeySpec:(void*)arg2 deallocatorBlock:(/*^block*/id)arg3 ;
@end

