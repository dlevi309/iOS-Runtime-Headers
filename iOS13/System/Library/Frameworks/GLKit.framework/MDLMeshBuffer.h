/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
*/


@protocol MDLMeshBuffer <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> allocator; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferZone> zone; 
@property (nonatomic,readonly) unsigned long long type; 
@required
-(unsigned long long)length;
-(id<MDLMeshBufferZone>)zone;
-(unsigned long long)type;
-(id)map;
-(void)fillData:(id)arg1 offset:(unsigned long long)arg2;
-(id<MDLMeshBufferAllocator>)allocator;

@end

