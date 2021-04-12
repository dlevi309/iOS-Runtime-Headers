/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/


@interface MDLMeshBufferMap : NSObject {

	/*^block*/id _deallocator;
	void* _bytes;

}

@property (nonatomic,readonly) void* bytes;              //@synthesize bytes=_bytes - In the implementation block
-(void)dealloc;
-(void*)bytes;
-(id)initWithBytes:(void*)arg1 deallocator:(/*^block*/id)arg2 ;
@end

