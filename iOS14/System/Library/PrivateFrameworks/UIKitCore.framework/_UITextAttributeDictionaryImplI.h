/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@protocol _UITextAttributeDefaults;
@class NSMutableDictionary, NSMutableSet;

@interface _UITextAttributeDictionaryImplI : NSMutableDictionary {

	id<_UITextAttributeDefaults> _fallback;
	NSMutableDictionary* _storage;
	NSMutableSet* _ignoring;

}
+(Class)_storageClass;
+(Class)_ignoringClass;
+(BOOL)_isMutable;
-(id)initWithDictionary:(id)arg1 fallback:(id)arg2 ;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(id)init;
-(BOOL)ignoresFallbackForKey:(id)arg1 ;
-(BOOL)isNSDictionary__;
-(id)_initWithStorage:(id)arg1 fallback:(id)arg2 ignoring:(id)arg3 ;
-(id)_initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 fallback:(id)arg3 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithFallback:(id)arg1 ;
-(BOOL)usesFallbackForKey:(id)arg1 ;
-(id)description;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
-(id)fallback;
-(void)_removeFallbackFromStorage;
-(id)_fullDictionary;
-(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
-(unsigned long long)hash;
-(id)_keysIfThereIsFallback;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)sparseDictionary;
@end

