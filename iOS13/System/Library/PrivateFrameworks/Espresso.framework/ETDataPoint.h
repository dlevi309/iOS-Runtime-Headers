/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@interface ETDataPoint : NSObject {

	map<std::__1::basic_string<char>, vImage_Buffer, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, vImage_Buffer> > >* image_buffers;
	map<std::__1::basic_string<char>, ETDataPoint_buffer, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, ETDataPoint_buffer> > >* buffers;

}
-(void)dealloc;
-(void)setImage:(vImage_Buffer*)arg1 forKey:(id)arg2 ;
-(void)iterateBuffersByKey:(/*^block*/id)arg1 ;
-(void)setData:(float*)arg1 size:(unsigned long long)arg2 forKey:(id)arg3 freeWhenDone:(BOOL)arg4 ;
-(vImage_Buffer*)imageWithKey:(id)arg1 ;
-(float*)bufferWithKey:(id)arg1 ;
-(map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > > > >*)getSampleData;
@end

