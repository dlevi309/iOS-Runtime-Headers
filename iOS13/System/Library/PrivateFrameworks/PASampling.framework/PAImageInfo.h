/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSUUID, NSString;

@interface PAImageInfo : NSObject <PASerializable> {

	BOOL _isTextExecSegment;
	unsigned long long _loadAddress;
	unsigned long long _size;
	NSUUID* _imageUUID;
	NSString* _path;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long loadAddress;                //@synthesize loadAddress=_loadAddress - In the implementation block
@property (readonly) unsigned long long size;                       //@synthesize size=_size - In the implementation block
@property (readonly) NSUUID * imageUUID;                            //@synthesize imageUUID=_imageUUID - In the implementation block
@property (readonly) NSString * path;                               //@synthesize path=_path - In the implementation block
@property (readonly) BOOL isTextExecSegment;                        //@synthesize isTextExecSegment=_isTextExecSegment - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(NSString *)debugDescription;
-(unsigned long long)size;
-(NSString *)path;
-(NSUUID *)imageUUID;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)loadAddress;
-(BOOL)isTextExecSegment;
-(id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andSize:(unsigned long long)arg3 andPath:(id)arg4 ;
-(id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 ;
-(id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andSize:(unsigned long long)arg3 andPath:(id)arg4 isTextExecSegment:(BOOL)arg5 ;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithImageInfo:(const void*)arg1 is64Bit:(BOOL)arg2 ;
-(id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andPath:(id)arg3 ;
-(void)addNewInformationFromImageInfo:(id)arg1 ;
-(id)initWithSerializedImageInfo:(const SCD_Struct_PA5*)arg1 ;
@end

