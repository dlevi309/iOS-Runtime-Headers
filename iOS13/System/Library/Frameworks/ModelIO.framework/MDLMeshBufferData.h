/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLMeshBuffer.h>

@protocol MDLMeshBufferAllocator;
@class MDLMeshBufferZoneDefault, NSMutableData, NSString, NSData;

@interface MDLMeshBufferData : NSObject <MDLMeshBuffer> {

	MDLMeshBufferZoneDefault* _zone;
	MDLMeshBufferZoneDefault* _zoneDefault;
	NSMutableData* _data;
	unsigned long long _length;
	id<MDLMeshBufferAllocator> _allocator;
	unsigned long long _type;
	NSString* _name;

}

@property (nonatomic,retain,readonly) NSData * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> allocator; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferZone> zone; 
@property (nonatomic,readonly) unsigned long long type; 
-(void)dealloc;
-(unsigned long long)length;
-(id<MDLMeshBufferZone>)zone;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setName:(id)arg1 ;
-(NSData *)data;
-(id)map;
-(id)initWithType:(unsigned long long)arg1 data:(id)arg2 ;
-(void)fillData:(id)arg1 offset:(unsigned long long)arg2 ;
-(id<MDLMeshBufferAllocator>)allocator;
-(id)initWithType:(unsigned long long)arg1 length:(unsigned long long)arg2 ;
-(id)initWithLength:(unsigned long long)arg1 data:(id)arg2 allocator:(id)arg3 zone:(id)arg4 ;
@end

