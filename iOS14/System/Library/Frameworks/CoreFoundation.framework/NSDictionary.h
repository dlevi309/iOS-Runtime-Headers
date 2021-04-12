/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (readonly) unsigned long long count; 
+(id)MI_dictionaryWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 error:(id*)arg3 ;
+(id)dictionaryWithContentsOfFile:(id)arg1 ;
+(id)dictionaryWithContentsOfURL:(id)arg1 ;
+(id)newDictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
+(id)dictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)dictionaryWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)sharedKeySetForKeys:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)dictionaryWithDictionary:(id)arg1 ;
+(id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2 ;
+(id)dictionaryWithObjectsAndKeys:(id)arg1 ;
+(id)dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dictionary;
-(unsigned long long)ls_hashQuery;
-(id)ls_parseQueryForIdentifiers:(id)arg1 ;
-(unsigned long long)_LS_integerForKey:(id)arg1 ;
-(BOOL)_LS_BoolForKey:(id)arg1 ;
-(id)ls_resolvePlugInKitInfoPlistWithDictionary:(id)arg1 ;
-(id)ls_insertExtensionPointVersion:(id)arg1 ;
-(BOOL)MI_writeToURL:(id)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)fileOwnerAccountName;
-(id)fileGroupOwnerAccountName;
-(unsigned long long)fileSize;
-(id)valueForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionInStringsFileFormat;
-(id)_stringToWrite;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(int)_web_intForKey:(id)arg1 ;
-(unsigned long long)fileGroupOwnerAccountNumber;
-(unsigned)fileHFSTypeCode;
-(BOOL)fileIsImmutable;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)fileIsAppendOnly;
-(id)fileCreationDate;
-(unsigned long long)fileOwnerAccountNumber;
-(id)valueForKeyPath:(id)arg1 ;
-(Class)classForCoder;
-(id)_web_numberForKey:(id)arg1 ;
-(id)_web_stringForKey:(id)arg1 ;
-(BOOL)fileExtensionHidden;
-(unsigned)fileHFSCreatorCode;
-(id)fileOwnerAccountID;
-(id)_web_objectForMIMEType:(id)arg1 ;
-(id)fileGroupOwnerAccountID;
-(unsigned long long)filePosixPermissions;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(id)fileModificationDate;
-(unsigned long long)fileSystemFileNumber;
-(long long)fileSystemNumber;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)fileType;
-(unsigned long long)countForKey:(id)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(BOOL)__getValue:(id*)arg1 forKey:(id)arg2 ;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(id)invertedDictionary;
-(id)keysSortedByValueUsingComparator:(/*^block*/id)arg1 ;
-(id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)keyOfEntryPassingTest:(/*^block*/id)arg1 ;
-(id)keysSortedByValueWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)initWithObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithObjectsAndKeys:(id)arg1 ;
-(id)keysOfEntriesPassingTest:(/*^block*/id)arg1 ;
-(id)keysSortedByValueUsingSelector:(SEL)arg1 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(BOOL)containsKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)_cfTypeID;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(id)objectEnumerator;
-(BOOL)isNSDictionary__;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)allObjects;
-(id)description;
-(id)keyEnumerator;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(void)getObjects:(id*)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)_cfMutableCopy;
-(id)allValues;
-(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)getKeys:(id*)arg1 ;
-(id)allKeys;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)allKeysForObject:(id)arg1 ;
@end

