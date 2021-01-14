/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/RBSXPCEncoding.h>
#import <libobjc.A.dylib/RBSXPCDecoding.h>
#import <libobjc.A.dylib/BSXPCEncoding.h>
#import <libobjc.A.dylib/BSXPCDecoding.h>

@class NSString;

@interface NSCoder : NSObject <RBSXPCEncoding, RBSXPCDecoding, BSXPCEncoding, BSXPCDecoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)__categorizeException:(id)arg1 intoError:(id*)arg2 ;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2 ;
-(id)decodeStringForKey:(id)arg1 ;
-(unsigned long long)decodeUInt64ForKey:(id)arg1 ;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2 ;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3 ;
-(void)encodeCollection:(id)arg1 forKey:(id)arg2 ;
-(id)decodeStringForKey:(id)arg1 ;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2 ;
-(CGRect)decodeCGRectForKey:(id)arg1 ;
-(CGSize)decodeCGSizeForKey:(id)arg1 ;
-(unsigned long long)decodeUInt64ForKey:(id)arg1 ;
-(void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)encodeCGRect:(CGRect)arg1 forKey:(id)arg2 ;
-(id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3 ;
-(CGPoint)decodeCGPointForKey:(id)arg1 ;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(id)swc_decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)swc_decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(id)ls_decodeDictionaryWithKeysOfClass:(Class)arg1 valuesOfClass:(Class)arg2 forKey:(id)arg3 ;
-(id)ls_decodeDictionaryWithKeysOfClass:(Class)arg1 valuesOfClasses:(id)arg2 forKey:(id)arg3 ;
-(id)ls_decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(id)ls_decodeSetWithValuesOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)ls_decodeArrayWithValuesOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)ls_decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(unsigned)systemVersion;
-(id)allowedClasses;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(void)encodeByrefObject:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)decodeDataObject;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(id)decodeDictionaryWithKeysOfClass:(Class)arg1 objectsOfClass:(Class)arg2 forKey:(id)arg3 ;
-(void)encodeConditionalObject:(id)arg1 ;
-(void)encodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)__failWithExceptionName:(id)arg1 errorCode:(long long)arg2 format:(id)arg3 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(void)encodeDataObject:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 size:(unsigned long long)arg3 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)_validateAllowedClassesContainsClass:(Class)arg1 forKey:(id)arg2 ;
-(void)encodeBycopyObject:(id)arg1 ;
-(BOOL)_allowsValueCoding;
-(BOOL)validateClassSupportsSecureCoding:(Class)arg1 ;
-(id)decodeDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 forKey:(id)arg3 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)decodeTopLevelObjectAndReturnError:(id*)arg1 ;
-(id)decodeArrayOfObjectsOfClass:(Class)arg1 forKey:(id)arg2 ;
-(void)encodeRootObject:(id)arg1 ;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)__setError:(id)arg1 ;
-(NSZone*)objectZone;
-(long long)versionForClassName:(id)arg1 ;
-(CGPoint)decodePoint;
-(void)encodeSize:(CGSize)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeRect:(CGRect)arg1 ;
-(CGSize)decodeSize;
-(CGRect)decodeRect;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeValuesOfObjCTypes:(const char*)arg1 ;
-(id)decodeTopLevelObjectForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)requiresSecureCoding;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(BOOL)allowsKeyedCoding;
-(void)encodeObject:(id)arg1 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(id)decodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(BOOL)arg3 ;
-(id)decodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)encodePoint:(CGPoint)arg1 ;
-(BOOL)validateAllowedClass:(Class)arg1 forKey:(id)arg2 ;
-(void)setObjectZone:(NSZone*)arg1 ;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(id)decodeObjectForKey:(id)arg1 error:(id*)arg2 ;
-(id)error;
-(long long)decodeLongForKey:(id)arg1 ;
-(long long)decodingFailurePolicy;
-(CGSize)decodeSizeForKey:(id)arg1 ;
-(CGRect)decodeRectForKey:(id)arg1 ;
-(void)encodeLong:(long long)arg1 forKey:(id)arg2 ;
-(void)setAllowedClasses:(id)arg1 ;
-(void)encodePoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)encodeRect:(CGRect)arg1 forKey:(id)arg2 ;
-(CGPoint)decodePointForKey:(id)arg1 ;
-(id)decodePropertyListForKey:(id)arg1 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodeObject;
-(void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1 ;
-(void)failWithError:(id)arg1 ;
@end

