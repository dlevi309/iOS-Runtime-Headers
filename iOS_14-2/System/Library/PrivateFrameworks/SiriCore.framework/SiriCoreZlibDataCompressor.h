/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <SiriCore/SiriCore-Structs.h>
#import <SiriCore/SiriCoreDataCompressor.h>

@interface SiriCoreZlibDataCompressor : SiriCoreDataCompressor {

	z_stream_s* _deflateStream;
	unsigned char _deflateBuffer[8192];

}
-(id)init;
-(void)dealloc;
-(id)compressedDataForData:(id)arg1 error:(id*)arg2 ;
@end

