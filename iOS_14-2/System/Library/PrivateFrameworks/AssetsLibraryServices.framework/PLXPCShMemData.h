/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <CoreFoundation/NSData.h>

@interface PLXPCShMemData : NSData {

	void* _buffer;
	unsigned long long _dataLength;
	unsigned long long _bufferLength;

}
-(const void*)bytes;
-(unsigned long long)length;
-(id)initWithXPCShmem:(id)arg1 ;
-(id)description;
-(id)initWithXPCShmem:(id)arg1 length:(long long)arg2 ;
-(void)dealloc;
@end

