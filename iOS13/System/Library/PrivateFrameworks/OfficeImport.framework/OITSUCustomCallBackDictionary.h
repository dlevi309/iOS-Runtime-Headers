/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface OITSUCustomCallBackDictionary : NSMutableDictionary {

	CFDictionaryRef mDictionary;

}
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)objectEnumerator;
-(id)allKeys;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_OI17*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)allValues;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forUncopiedKey:(id)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 keyCallBacks:(const SCD_Struct_OI39*)arg2 valueCallBacks:(const SCD_Struct_OI40*)arg3 ;
-(id)initWithCFDictionary:(CFDictionaryRef)arg1 ;
@end

