/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/


@class MDLMeshBufferMap;

@interface MDLVertexAttributeData : NSObject {

	MDLMeshBufferMap* _map;
	void* _dataStart;
	unsigned long long _stride;
	unsigned long long _format;
	unsigned long long _bufferSize;

}

@property (nonatomic,retain) MDLMeshBufferMap * map; 
@property (assign,nonatomic) void* dataStart; 
@property (assign,nonatomic) unsigned long long stride; 
@property (assign,nonatomic) unsigned long long format; 
@property (assign,nonatomic) unsigned long long bufferSize;              //@synthesize bufferSize=_bufferSize - In the implementation block
-(id)init;
-(MDLMeshBufferMap *)map;
-(unsigned long long)format;
-(void)setFormat:(unsigned long long)arg1 ;
-(void)setStride:(unsigned long long)arg1 ;
-(unsigned long long)stride;
-(void*)dataStart;
-(void)setMap:(MDLMeshBufferMap *)arg1 ;
-(unsigned long long)bufferSize;
-(void)setDataStart:(void*)arg1 ;
-(void)setbufferSize:(unsigned long long)arg1 ;
-(void)setBufferSize:(unsigned long long)arg1 ;
@end

