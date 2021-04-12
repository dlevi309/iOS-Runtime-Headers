/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

