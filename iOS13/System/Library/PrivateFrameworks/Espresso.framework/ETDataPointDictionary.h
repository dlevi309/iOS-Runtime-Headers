/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@interface ETDataPointDictionary : NSObject {

	map<std::__1::basic_string<char>, vImage_Buffer, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, vImage_Buffer> > >* _image_buffers;
	map<std::__1::basic_string<char>, float_buffer_t, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float_buffer_t> > >* _float_buffers;

}

@property (assign) map<std::__1::basic_string<char> image_buffers;              //@synthesize image_buffers=_image_buffers - In the implementation block
@property (assign) map<std::__1::basic_string<char> float_buffers;              //@synthesize float_buffers=_float_buffers - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)setImage:(vImage_Buffer*)arg1 forKey:(id)arg2 ;
-(float*)dataForKey:(id)arg1 error:(id*)arg2 ;
-(map<std::__1::basic_string<char>)image_buffers;
-(BOOL)setData:(float*)arg1 size:(unsigned long long)arg2 forKey:(id)arg3 freeWhenDone:(BOOL)arg4 ;
-(id)dataArrayForKey:(id)arg1 error:(id*)arg2 ;
-(void)setImage_buffers:(map<std::__1::basic_string<char>)arg1 ;
-(map<std::__1::basic_string<char>)float_buffers;
-(void)setFloat_buffers:(map<std::__1::basic_string<char>)arg1 ;
@end

