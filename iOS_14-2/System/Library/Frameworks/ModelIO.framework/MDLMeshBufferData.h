/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> allocator; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferZone> zone; 
@property (nonatomic,readonly) unsigned long long type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MDLMeshBufferZone>)zone;
-(unsigned long long)length;
-(id)name;
-(NSData *)data;
-(id)map;
-(void)fillData:(id)arg1 offset:(unsigned long long)arg2 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 data:(id)arg2 ;
-(void)setName:(id)arg1 ;
-(id<MDLMeshBufferAllocator>)allocator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithType:(unsigned long long)arg1 length:(unsigned long long)arg2 ;
-(id)initWithLength:(unsigned long long)arg1 data:(id)arg2 allocator:(id)arg3 zone:(id)arg4 ;
@end

