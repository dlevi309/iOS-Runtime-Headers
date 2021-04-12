/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


@protocol MTLBuffer;
@interface SCNMTLBuffer : NSObject {

	long long _usedCount;
	id<MTLBuffer> _buffer;
	unsigned long long _offset;
	id _dataSource;

}

@property (assign) long long usedCount;                              //@synthesize usedCount=_usedCount - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> buffer;                   //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) void* contents; 
@property (assign,nonatomic) id dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
-(void*)contents;
-(void)setBuffer:(id<MTLBuffer>)arg1 ;
-(id)dataSource;
-(unsigned long long)offset;
-(void)setDataSource:(id)arg1 ;
-(id<MTLBuffer>)buffer;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)dealloc;
-(long long)usedCount;
-(void)setUsedCount:(long long)arg1 ;
-(long long)decrementUsedCount;
-(void)incrementUsedCount;
@end

