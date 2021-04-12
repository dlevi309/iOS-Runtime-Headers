/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/MDLMeshBuffer.h>

@class NSMutableData, NSString;

@interface CUIMeshBuffer : NSObject <MDLMeshBuffer> {

	NSMutableData* _data;
	unsigned long long _type;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> allocator; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferZone> zone; 
@property (nonatomic,readonly) unsigned long long type;                                  //@synthesize type=_type - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id<MDLMeshBufferZone>)zone;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(id)map;
-(id)initWithBytes:(void*)arg1 andLength:(unsigned long long)arg2 ofType:(unsigned long long)arg3 ;
-(void)fillData:(id)arg1 offset:(unsigned long long)arg2 ;
-(id<MDLMeshBufferAllocator>)allocator;
@end

