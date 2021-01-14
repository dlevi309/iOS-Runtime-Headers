/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@interface ADEspressoRunner : NSObject {

	void* _ctx;
	void* _plan;
	SCD_Struct_AD10* _net;
	int _engineType;
	unordered_map<std::__1::basic_string<char>, PixelBufferSharedPtr, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, PixelBufferSharedPtr> > >* _pixelBuffersToBindAsVImage;
	unordered_map<std::__1::basic_string<char>, PixelBufferSharedPtr, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, PixelBufferSharedPtr> > >* _pixelBuffersToBindDirect;
	unordered_map<std::__1::basic_string<char>, PixelBufferSharedPtr, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, PixelBufferSharedPtr> > >* _pixelBuffersToBindIndirect;
	BOOL _CPUBindWA;

}
-(long long)execute;
-(void)dealloc;
-(id)networkVersionString;
-(CVBufferRef)registerNewPixelBufferForDescriptor:(id)arg1 ;
-(BOOL)is32XYZAFormat:(unsigned)arg1 ;
-(BOOL)isCVPixelBufferBindingSupportedForFormat:(unsigned)arg1 ;
-(CVBufferRef)registerPixelBufferForDescriptor:(id)arg1 withPixelBuffer:(CVBufferRef)arg2 ;
-(BOOL)isDirectBindingSupportedForFormat:(unsigned)arg1 ;
-(int)bindPixelBufferAsVImage:(CVBufferRef)arg1 toBlob:(const char*)arg2 ;
-(void)unlockAllVImageBindBuffers;
-(id)initWithUrl:(id)arg1 forEngine:(unsigned long long)arg2 configurationName:(id)arg3 ;
-(id)registerEspressoBufferForDescriptor:(id)arg1 ;
-(long long)registerPixelBuffer:(CVBufferRef)arg1 forDescriptor:(id)arg2 ;
@end

