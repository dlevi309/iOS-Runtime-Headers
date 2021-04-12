/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSCoder.h>

@class UINibStringIDTable;

@interface UINibDecoder : NSCoder {

	Class arrayClass;
	Class setClass;
	Class dictionaryClass;
	Class* classes;
	id* missingClasses;
	UINibDecoderObjectEntry* objects;
	UINibDecoderValue* values;
	char* valueTypes;
	void* valueData;
	unsigned long long valueDataSize;
	UINibDecoderHeader header;
	id* objectsByObjectID;
	unsigned* longObjectClassIDs;
	char* shortObjectClassIDs;
	unsigned* keyMasks;
	long long inlinedValueKey;
	UINibDecoderRecursiveState recursiveState;
	UINibStringIDTable* keyIDTable;
	id delegate;
	UIKeyToKeyIDCache* keyIDCache;
	UIKeyAndScopeToValueCache* valueCache;
	long long lookupRounds;
	long long maxPossibleLookupRounds;
	long long failedByKeyMask;
	long long savedByKeyMask;

}

@property (assign) id delegate; 
@property (nonatomic,readonly) long long uniqueIDForCurrentlyDecodingObject; 
@property (getter=isReusable,nonatomic,readonly) BOOL reusable; 
+(id)unarchiveObjectWithData:(id)arg1 ;
+(id)unarchiveObjectWithFile:(id)arg1 ;
-(void)dealloc;
-(BOOL)allowsKeyedCoding;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(id)decodeObject;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(id)initForReadingWithData:(id)arg1 ;
-(unsigned)systemVersion;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1 ;
-(id)decodeDataObject;
-(id)decodeObjectForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(void)finishDecoding;
-(CGPoint)decodeCGPointForKey:(id)arg1 ;
-(CGSize)decodeCGSizeForKey:(id)arg1 ;
-(CGRect)decodeCGRectForKey:(id)arg1 ;
-(BOOL)validateAndIndexData:(id)arg1 error:(id*)arg2 ;
-(id)initForReadingWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateAndIndexClasses:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)validateAndIndexKeys:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)validateAndIndexValues:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)validateAndIndexObjects:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)decodeArrayOfCGFloats:(double*)arg1 count:(long long)arg2 forKey:(id)arg3 ;
-(id)nextGenericKey;
-(BOOL)isReusable;
-(long long)uniqueIDForCurrentlyDecodingObject;
-(BOOL)decodeArrayOfFloats:(float*)arg1 count:(long long)arg2 forKey:(id)arg3 ;
-(BOOL)decodeArrayOfDoubles:(double*)arg1 count:(long long)arg2 forKey:(id)arg3 ;
-(CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1 ;
-(UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1 ;
-(id)decodeNXObject;
-(id)decodePropertyList;
@end

