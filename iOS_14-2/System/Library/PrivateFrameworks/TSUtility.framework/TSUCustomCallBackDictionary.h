/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface TSUCustomCallBackDictionary : NSMutableDictionary {

	CFDictionaryRef mDictionary;

}
-(id)initForThemeAssetMapperWithCapacity:(unsigned long long)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)objectEnumerator;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)allValues;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forUncopiedKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 keyCallBacks:(const SCD_Struct_TS17*)arg2 valueCallBacks:(const SCD_Struct_TS18*)arg3 ;
-(id)initWithCFDictionary:(CFDictionaryRef)arg1 ;
@end

