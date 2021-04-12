/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
*/


#import <JetEngine/JetEngine-Structs.h>
@interface JEBrotliDecoder : NSObject {

	BrotliDecoderStateStructRef _decoder;

}

@property (nonatomic,readonly) BrotliDecoderStateStructRef decoder;              //@synthesize decoder=_decoder - In the implementation block
-(id)init;
-(long long)decompressStreamWithAvailableIn:(unsigned long long*)arg1 nextIn:(const char**)arg2 availableOut:(unsigned long long*)arg3 nextOut:(char**)arg4 ;
-(BrotliDecoderStateStructRef)decoder;
-(void)dealloc;
@end

