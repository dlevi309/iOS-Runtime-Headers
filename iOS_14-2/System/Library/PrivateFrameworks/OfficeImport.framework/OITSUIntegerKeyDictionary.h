/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface OITSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying> {

	CFDictionaryRef mDictionary;

}
-(id)init;
-(unsigned long long)count;
-(void)removeObjectForKey:(long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)keyEnumerator;
-(id)objectForKey:(long long)arg1 ;
-(void)removeAllObjects;
-(id)allValues;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(long long)arg2 ;
-(id)valueEnumerator;
-(CFDictionaryRef)p_cfDictionary;
@end

