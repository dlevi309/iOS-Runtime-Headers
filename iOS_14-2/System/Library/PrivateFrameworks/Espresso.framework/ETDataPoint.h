/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@interface ETDataPoint : NSObject {

	map<std::__1::basic_string<char>, vImage_Buffer, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, vImage_Buffer> > >* image_buffers;
	map<std::__1::basic_string<char>, ETDataPoint_buffer, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, ETDataPoint_buffer> > >* buffers;

}
-(void)iterateBuffersByKey:(/*^block*/id)arg1 ;
-(void)setData:(float*)arg1 size:(unsigned long long)arg2 forKey:(id)arg3 freeWhenDone:(BOOL)arg4 ;
-(vImage_Buffer*)imageWithKey:(id)arg1 ;
-(float*)bufferWithKey:(id)arg1 ;
-(unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> >, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > > > >*)getSampleData;
-(void)setImage:(vImage_Buffer*)arg1 forKey:(id)arg2 ;
-(void)dealloc;
@end

