/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSCoder.h>

@class NSData;

@interface NSKeyedArchiver : NSCoder {

	void* _stream;
	AQ _flags;
	id _delegate;
	id _containers;
	id _objects;
	id _objRefMap;
	id _replacementMap;
	id _classNameMap;
	id _conditionals;
	id _classes;
	unsigned long long _genericKey;
	void* _cache;
	unsigned long long _cacheSize;
	unsigned long long _estimatedCount;
	void* _reserved2;
	id _visited;
	void* _reserved0;

}

@property (assign) id<NSKeyedArchiverDelegate> delegate; 
@property (assign) unsigned long long outputFormat; 
@property (readonly) NSData * encodedData; 
@property (assign) BOOL requiresSecureCoding; 
+(void)initialize;
+(id)archivedDataWithRootObject:(id)arg1 requiringSecureCoding:(BOOL)arg2 error:(id*)arg3 ;
+(void)setClassName:(id)arg1 forClass:(Class)arg2 ;
+(id)archivedDataWithRootObject:(id)arg1 ;
+(id)classNameForClass:(Class)arg1 ;
+(BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2 ;
-(void)setRequiresSecureCoding:(BOOL)arg1 ;
-(id)initForWritingWithMutableData:(id)arg1 ;
-(unsigned)systemVersion;
-(void)encodeByrefObject:(id)arg1 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)setClassName:(id)arg1 forClass:(Class)arg2 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setOutputFormat:(unsigned long long)arg1 ;
-(id)initRequiringSecureCoding:(BOOL)arg1 ;
-(void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 ;
-(void)encodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)_encodePropertyList:(id)arg1 forKey:(id)arg2 ;
-(void)finishEncoding;
-(void)encodeDataObject:(id)arg1 ;
-(id)init;
-(id)_blobForCurrentObject;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(id<NSKeyedArchiverDelegate>)delegate;
-(void)encodeBycopyObject:(id)arg1 ;
-(BOOL)_allowsValueCoding;
-(unsigned long long)outputFormat;
-(id)_initWithOutput:(id)arg1 ;
-(void)encodeRootObject:(id)arg1 ;
-(void)_setBlobForCurrentObject:(id)arg1 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeValuesOfObjCTypes:(const char*)arg1 ;
-(BOOL)requiresSecureCoding;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(id)classNameForClass:(Class)arg1 ;
-(BOOL)allowsKeyedCoding;
-(void)encodeObject:(id)arg1 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id<NSKeyedArchiverDelegate>)arg1 ;
-(id)description;
-(NSData *)encodedData;
-(void)dealloc;
@end

