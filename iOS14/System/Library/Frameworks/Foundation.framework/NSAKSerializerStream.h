/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSerializerStream.h>

@interface NSAKSerializerStream : NSObject <NSSerializerStream> {

	void* memory;
	unsigned long long current;
	unsigned long long max;
	CFDictionaryRef roomForIntLocations;

}
-(unsigned long long)writeInt:(unsigned long long)arg1 ;
-(unsigned long long)writeRoomForInt:(int*)arg1 ;
-(void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2 ;
-(unsigned long long)writeData:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)writeAlignedDataSize:(unsigned long long)arg1 ;
-(void)copySerializationInto:(void*)arg1 ;
-(BOOL)writeToPath:(id)arg1 safely:(BOOL)arg2 ;
-(void)dealloc;
@end

