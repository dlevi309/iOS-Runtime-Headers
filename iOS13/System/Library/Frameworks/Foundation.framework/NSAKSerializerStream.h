/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)copySerializationInto:(void*)arg1 ;
-(unsigned long long)writeInt:(unsigned long long)arg1 ;
-(unsigned long long)writeAlignedDataSize:(unsigned long long)arg1 ;
-(unsigned long long)writeData:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)writeRoomForInt:(int*)arg1 ;
-(void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2 ;
-(BOOL)writeToPath:(id)arg1 safely:(BOOL)arg2 ;
@end

