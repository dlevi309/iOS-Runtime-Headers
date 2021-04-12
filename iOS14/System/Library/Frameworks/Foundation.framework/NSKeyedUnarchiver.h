/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoder.h>

@interface NSKeyedUnarchiver : NSCoder {

	id _delegate;
	AQ _flags;
	id _objRefMap;
	id _replacementMap;
	id _nameClassMap;
	id _tmpRefObjMap;
	id _refObjMap;
	int _genericKey;
	id _data;
	void* _offsetData;
	id _containers;
	id _objects;
	const char* _bytes;
	unsigned long long _len;
	id _helper;
	void* _reserved0;

}

@property (assign) id<NSKeyedUnarchiverDelegate> delegate; 
@property (assign) BOOL requiresSecureCoding; 
@property (assign) long long decodingFailurePolicy; 
+(id)swc_unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(id)swc_unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(id)ls_unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(void)initialize;
+(id)unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(id)unarchivedDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 fromData:(id)arg3 error:(id*)arg4 ;
+(id)unarchivedDictionaryWithKeysOfClass:(Class)arg1 objectsOfClass:(Class)arg2 fromData:(id)arg3 error:(id*)arg4 ;
+(id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(id)unarchivedArrayOfObjectsOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(id)_strictlyUnarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(id)unarchivedArrayOfObjectsOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(id)unarchiveTopLevelObjectWithData:(id)arg1 error:(id*)arg2 ;
+(void)setClass:(Class)arg1 forClassName:(id)arg2 ;
+(id)unarchiveObjectWithData:(id)arg1 error:(id*)arg2 ;
+(id)unarchiveObjectWithData:(id)arg1 ;
+(id)unarchiveObjectWithFile:(id)arg1 ;
+(Class)classForClassName:(id)arg1 ;
-(void)setRequiresSecureCoding:(BOOL)arg1 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(unsigned)systemVersion;
-(id)allowedClasses;
-(id)initWithStream:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(id)decodeDataObject;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(id)_initForReadingFromData:(id)arg1 error:(id*)arg2 throwLegacyExceptions:(BOOL)arg3 ;
-(id)init;
-(int)decodeInt32ForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(void)setDecodingFailurePolicy:(long long)arg1 ;
-(id)_blobForCurrentObject;
-(double)decodeDoubleForKey:(id)arg1 ;
-(id<NSKeyedUnarchiverDelegate>)delegate;
-(BOOL)_validateAllowedClassesContainsClass:(Class)arg1 forKey:(id)arg2 ;
-(id)initForReadingFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)_allowsValueCoding;
-(id)decodeDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 forKey:(id)arg3 ;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)__setError:(id)arg1 ;
-(long long)versionForClassName:(id)arg1 ;
-(id)_decodeArrayOfObjectsForKey:(id)arg1 ;
-(BOOL)requiresSecureCoding;
-(BOOL)allowsKeyedCoding;
-(void)_temporaryMapReplaceObject:(id)arg1 withObject:(id)arg2 ;
-(id)decodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2 ;
-(void)setClass:(Class)arg1 forClassName:(id)arg2 ;
-(void)_enableStrictSecureDecodingMode;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(id)error;
-(id)_decodePropertyListForKey:(id)arg1 ;
-(long long)decodingFailurePolicy;
-(BOOL)_strictSecureDecodingEnabled;
-(id)_initWithStream:(CFReadStreamRef)arg1 data:(id)arg2 topDict:(CFDictionaryRef)arg3 ;
-(void)setDelegate:(id<NSKeyedUnarchiverDelegate>)arg1 ;
-(unsigned)_currentUniqueIdentifier;
-(BOOL)_containsNextUnkeyedObject;
-(id)description;
-(void)_replaceObject:(id)arg1 withObject:(id)arg2 ;
-(void)setAllowedClasses:(id)arg1 ;
-(void)_setAllowedClassNames:(id)arg1 ;
-(Class)classForClassName:(id)arg1 ;
-(id)_allowedClassNames;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodeObject;
-(void)finishDecoding;
-(void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1 ;
-(id)initForReadingWithData:(id)arg1 ;
-(void)dealloc;
@end

