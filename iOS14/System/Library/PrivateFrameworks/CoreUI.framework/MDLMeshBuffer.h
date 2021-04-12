/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


@protocol MDLMeshBuffer <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> allocator; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferZone> zone; 
@property (nonatomic,readonly) unsigned long long type; 
@required
-(id<MDLMeshBufferZone>)zone;
-(unsigned long long)length;
-(id)map;
-(void)fillData:(id)arg1 offset:(unsigned long long)arg2;
-(unsigned long long)type;
-(id<MDLMeshBufferAllocator>)allocator;

@end

