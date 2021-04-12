/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


#import <Osprey/Osprey-Structs.h>
@interface OspreyZlibDataDecompressor : NSObject {

	z_stream_s* _inflateStream;
	unsigned char _inflateBuffer[8192];

}
-(id)initWithOptions:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)decompressedDataForData:(id)arg1 error:(id*)arg2 ;
@end

