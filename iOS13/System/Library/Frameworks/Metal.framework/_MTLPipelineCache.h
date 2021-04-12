/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLPipelineCache.h>

@class NSString;

@interface _MTLPipelineCache : NSObject <MTLPipelineCache> {

	BOOL _writable;
	MTLCompilerCache* _compilerCache;
	BOOL _disableRunTimeCompilation;

}

@property (readonly) BOOL writable;                                 //@synthesize writable=_writable - In the implementation block
@property (readonly) MTLCompilerCache* cache;                       //@synthesize compilerCache=_compilerCache - In the implementation block
@property (assign) BOOL disableRunTimeCompilation;                  //@synthesize disableRunTimeCompilation=_disableRunTimeCompilation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(MTLCompilerCache*)cache;
-(void)setDisableRunTimeCompilation:(BOOL)arg1 ;
-(void)write;
-(BOOL)writable;
-(id)initWithFilePath:(id)arg1 readOnly:(BOOL)arg2 deviceInfo:(const MTLTargetDeviceArch*)arg3 ;
-(BOOL)disableRunTimeCompilation;
@end

