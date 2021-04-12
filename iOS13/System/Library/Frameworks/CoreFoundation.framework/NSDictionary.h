/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 ;
+(id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2 error:(id*)arg3 ;
+(id)dictionaryWithContentsOfFile:(id)arg1 ;
+(id)dictionaryWithContentsOfURL:(id)arg1 ;
+(id)dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedKeySetForKeys:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2 ;
+(id)dictionary;
+(id)dictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
+(id)dictionaryWithObjectsAndKeys:(id)arg1 ;
+(id)newDictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
+(id)dictionaryWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)dictionaryWithDictionary:(id)arg1 ;
-(unsigned long long)_LS_integerForKey:(id)arg1 ;
-(id)ls_parseQueryForIdentifiers:(id)arg1 ;
-(unsigned long long)ls_hashQuery;
-(id)ls_insertExtensionPointVersion:(id)arg1 ;
-(id)ls_resolvePlugInKitInfoPlistWithDictionary:(id)arg1 ;
-(BOOL)_LS_BoolForKey:(id)arg1 ;
-(BOOL)MI_writeToURL:(id)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)_stringToWrite;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)descriptionInStringsFileFormat;
-(id)valueForKeyPath:(id)arg1 ;
-(unsigned long long)fileSize;
-(id)fileModificationDate;
-(id)fileType;
-(unsigned long long)filePosixPermissions;
-(id)fileOwnerAccountName;
-(unsigned long long)fileOwnerAccountNumber;
-(id)fileGroupOwnerAccountName;
-(unsigned long long)fileGroupOwnerAccountNumber;
-(long long)fileSystemNumber;
-(unsigned long long)fileSystemFileNumber;
-(BOOL)fileExtensionHidden;
-(unsigned)fileHFSCreatorCode;
-(unsigned)fileHFSTypeCode;
-(BOOL)fileIsImmutable;
-(BOOL)fileIsAppendOnly;
-(id)fileCreationDate;
-(id)fileOwnerAccountID;
-(id)fileGroupOwnerAccountID;
-(id)_web_numberForKey:(id)arg1 ;
-(int)_web_intForKey:(id)arg1 ;
-(id)_web_stringForKey:(id)arg1 ;
-(id)_web_objectForMIMEType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectEnumerator;
-(void)getObjects:(id*)arg1 ;
-(id)allKeys;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)_cfMutableCopy;
-(unsigned long long)countForKey:(id)arg1 ;
-(BOOL)containsKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)__getValue:(id*)arg1 forKey:(id)arg2 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(id)keyEnumerator;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)allValues;
-(id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)allObjects;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)keysSortedByValueWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(BOOL)isNSDictionary__;
-(id)allKeysForObject:(id)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)getKeys:(id*)arg1 ;
-(id)invertedDictionary;
-(id)keyOfEntryPassingTest:(/*^block*/id)arg1 ;
-(id)keysOfEntriesPassingTest:(/*^block*/id)arg1 ;
-(id)keysSortedByValueUsingComparator:(/*^block*/id)arg1 ;
-(id)keysSortedByValueUsingSelector:(SEL)arg1 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithObjectsAndKeys:(id)arg1 ;
@end

