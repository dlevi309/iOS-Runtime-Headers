/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void*)contents;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)buffer;
-(unsigned long long)offset;
-(id)dataSource;
-(void)setDataSource:(id)arg1 ;
-(long long)decrementUsedCount;
-(void)incrementUsedCount;
-(void)setUsedCount:(long long)arg1 ;
-(long long)usedCount;
@end

