/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, VMUClassInfo, NSMutableArray, NSArray;

@interface VMUFieldInfo : NSObject {

	NSString* _ivarName;
	NSString* _typeName;
	unsigned _scanType;
	unsigned _offset;
	unsigned _size;
	unsigned _scannable;
	unsigned _stride;
	unsigned _flags;
	VMUClassInfo* _destinationLayout;
	NSMutableArray* _subFieldArray;
	void* _swiftTyperef;

}

@property (nonatomic,readonly) unsigned flags;                                //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) BOOL isCapture; 
@property (nonatomic,readonly) BOOL isByref; 
@property (nonatomic,readonly) BOOL isStorageImplPointer; 
@property (nonatomic,readonly) BOOL isArraySize; 
@property (nonatomic,readonly) BOOL isArrayEntries; 
@property (nonatomic,readonly) BOOL isStorageBitmapPointer; 
@property (nonatomic,readonly) BOOL isKeysPointer; 
@property (nonatomic,readonly) BOOL isValuesPointer; 
@property (nonatomic,readonly) BOOL isValueField; 
@property (nonatomic,readonly) BOOL isKeyField; 
@property (readonly) void* swiftTyperef;                                      //@synthesize swiftTyperef=_swiftTyperef - In the implementation block
@property (readonly) NSString * typedDescription; 
@property (nonatomic,readonly) NSString * ivarName;                           //@synthesize ivarName=_ivarName - In the implementation block
@property (nonatomic,readonly) NSString * typeName;                           //@synthesize typeName=_typeName - In the implementation block
@property (readonly) unsigned scanType;                                       //@synthesize scanType=_scanType - In the implementation block
@property (readonly) unsigned offset;                                         //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned size;                                           //@synthesize size=_size - In the implementation block
@property (readonly) unsigned scannableSize;                                  //@synthesize scannable=_scannable - In the implementation block
@property (readonly) unsigned stride;                                         //@synthesize stride=_stride - In the implementation block
@property (readonly) unsigned bitfieldWidth; 
@property (nonatomic,readonly) VMUClassInfo * destinationLayout; 
@property (nonatomic,readonly) NSArray * subFieldArray; 
-(void)_setSize:(unsigned)arg1 ;
-(BOOL)isByref;
-(id)initWithName:(id)arg1 type:(id)arg2 scan:(unsigned)arg3 offset:(unsigned)arg4 size:(unsigned)arg5 ;
-(id)mutableCopy;
-(unsigned)size;
-(unsigned)flags;
-(id)initWithObjcIvar:(objc_ivarRef)arg1 size:(unsigned)arg2 isARC:(BOOL)arg3 is64Bit:(BOOL)arg4 ;
-(id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned)arg3 error:(id*)arg4 ;
-(VMUClassInfo *)destinationLayout;
-(unsigned)scannableSize;
-(BOOL)isArraySize;
-(BOOL)isArrayEntries;
-(BOOL)isStorageImplPointer;
-(BOOL)isStorageBitmapPointer;
-(BOOL)isKeysPointer;
-(BOOL)isValuesPointer;
-(BOOL)isKeyField;
-(BOOL)isValueField;
-(NSArray *)subFieldArray;
-(void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned)arg3 ;
-(id)initWithName:(id)arg1 type:(id)arg2 kind:(unsigned)arg3 scan:(unsigned)arg4 offset:(unsigned)arg5 size:(unsigned)arg6 stride:(unsigned)arg7 subFieldArray:(id)arg8 swiftTyperef:(void*)arg9 ;
-(BOOL)isCapture;
-(void)_setIvarName:(id)arg1 ;
-(id)_getFieldAtOffset:(unsigned)arg1 ;
-(id)_fullIvarNameAtOffset:(unsigned)arg1 leafOffset:(unsigned*)arg2 depth:(unsigned)arg3 ;
-(id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned)arg3 returnedDestinationLayoutClassInfoIndex:(unsigned*)arg4 error:(id*)arg5 ;
-(NSString *)typedDescription;
-(void)initializeSubFieldArray;
-(id)initStorageInfoFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned)arg3 scan:(unsigned)arg4 offset:(unsigned)arg5 size:(unsigned)arg6 stride:(unsigned)arg7 subFieldArray:(id)arg8 ;
-(void)_setTypeName:(id)arg1 ;
-(void)_setScanType:(unsigned)arg1 ;
-(id)initStorageEntryFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned)arg3 scan:(unsigned)arg4 offset:(unsigned)arg5 size:(unsigned)arg6 stride:(unsigned)arg7 subFieldArray:(id)arg8 ;
-(void)_setOffset:(unsigned)arg1 ;
-(void)_setFlags:(unsigned)arg1 ;
-(unsigned)bitfieldWidth;
-(void)_setScannableSize:(unsigned)arg1 ;
-(void)_setStride:(unsigned)arg1 ;
-(void)_setDestinationLayout:(id)arg1 ;
-(id)descriptionOfFieldValueInObjectMemory:(void*)arg1 scanner:(id)arg2 ;
-(void*)swiftTyperef;
-(unsigned)stride;
-(NSString *)typeName;
-(unsigned)offset;
-(id)description;
-(unsigned)scanType;
-(NSString *)ivarName;
-(unsigned long long)hash;
-(id)fullIvarNameAtOffset:(unsigned)arg1 ;
-(id)getLeafFieldAtOffset:(unsigned)arg1 leafOffset:(unsigned*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

