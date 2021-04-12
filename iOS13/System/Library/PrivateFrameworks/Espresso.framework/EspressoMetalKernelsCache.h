/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


@protocol MTLLibrary, MTLDevice, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString, NSDictionary;

@interface EspressoMetalKernelsCache : NSObject {

	id<MTLLibrary> m_ShaderLibrary;
	id<MTLLibrary> m_DefaultLibrary;
	id<MTLDevice> _device;
	BOOL isSupportingiOSGPUFamilyV2;
	NSObject*<OS_dispatch_queue> dictionary_write_queue;
	NSMutableDictionary* auxLibraries;
	NSMutableDictionary* m_kernelCache_rw;
	NSString* _kernelPrefix;
	NSDictionary* _m_kernelCache;

}

@property (retain) NSDictionary * m_kernelCache;                   //@synthesize m_kernelCache=_m_kernelCache - In the implementation block
@property (nonatomic,retain) NSString * kernelPrefix;              //@synthesize kernelPrefix=_kernelPrefix - In the implementation block
-(id)initWithDevice:(id)arg1 ;
-(void)addLibraryAtPath:(id)arg1 ;
-(id)kernelForFunction:(const char*)arg1 cacheString:(const char*)arg2 withConstants:(id)arg3 ;
-(void)setKernelPrefix:(NSString *)arg1 ;
-(void)loadLibraryNamed:(id)arg1 ;
-(id)kernelForFunction:(const char*)arg1 ;
-(BOOL)shouldUseTexArray;
-(NSString *)kernelPrefix;
-(NSDictionary *)m_kernelCache;
-(void)setM_kernelCache:(NSDictionary *)arg1 ;
@end

