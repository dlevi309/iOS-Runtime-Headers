/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {

	CFDictionaryRef mDictionary;

}
-(BOOL)containsKey:(long long)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)keyEnumerator;
-(id)allValues;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInt:(long long)arg1 forKey:(long long)arg2 ;
-(void)dealloc;
-(long long)intForKey:(long long)arg1 ;
-(CFDictionaryRef)p_cfDictionary;
-(BOOL)intIsPresentForKey:(long long)arg1 outValue:(long long*)arg2 ;
-(void)removeIntForKey:(long long)arg1 ;
-(void)removeAllInts;
-(void)applyFromIntToIntDictionary:(id)arg1 ;
-(id)arrayOfBoxedKeys;
@end

