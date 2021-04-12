/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/MDLMeshBuffer.h>

@protocol MDLMeshBufferZone, MDLMeshBufferAllocator;
@class NSMutableData, NSString;

@interface CUIMeshBuffer : NSObject <MDLMeshBuffer> {

	NSMutableData* _data;
	unsigned long long _type;
	id<MDLMeshBufferZone> _zone;
	id<MDLMeshBufferAllocator> _allocator;

}

@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> allocator;              //@synthesize allocator=_allocator - In the implementation block
@property (nonatomic,retain,readonly) id<MDLMeshBufferZone> zone;                        //@synthesize zone=_zone - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                  //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MDLMeshBufferZone>)zone;
-(id)init;
-(unsigned long long)length;
-(id)initWithBytes:(void*)arg1 andLength:(unsigned long long)arg2 ofType:(unsigned long long)arg3 ;
-(id)map;
-(void)fillData:(id)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)type;
-(id<MDLMeshBufferAllocator>)allocator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

