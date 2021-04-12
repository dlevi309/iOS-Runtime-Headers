/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface OITSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {

	CFDictionaryRef mDictionary;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)allKeys;
-(BOOL)containsKey:(long long)arg1 ;
-(id)keyEnumerator;
-(id)allValues;
-(void)setInt:(long long)arg1 forKey:(long long)arg2 ;
-(CFDictionaryRef)p_cfDictionary;
-(long long)intForKey:(long long)arg1 ;
-(BOOL)intIsPresentForKey:(long long)arg1 outValue:(long long*)arg2 ;
-(void)removeIntForKey:(long long)arg1 ;
-(void)removeAllInts;
-(void)applyFromIntToIntDictionary:(id)arg1 ;
-(id)arrayOfBoxedKeys;
-(void)enumerateKeysAndValuesUsingBlock:(/*^block*/id)arg1 ;
@end

