/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFormat:(unsigned long long)arg1 ;
-(unsigned long long)format;
-(void)setMap:(MDLMeshBufferMap *)arg1 ;
-(id)init;
-(void)setStride:(unsigned long long)arg1 ;
-(unsigned long long)stride;
-(unsigned long long)bufferSize;
-(MDLMeshBufferMap *)map;
-(void)setBufferSize:(unsigned long long)arg1 ;
-(void*)dataStart;
-(void)setDataStart:(void*)arg1 ;
-(void)setbufferSize:(unsigned long long)arg1 ;
@end

