/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ECPackedDataUtils : NSObject
+(id)readStringFromData:(char*)arg1 atOffset:(unsigned)arg2 withLength:(unsigned)arg3 ;
+(void)writeString:(id)arg1 toPackedData:(CFDataRef)arg2 packedDataSize:(unsigned)arg3 atIndex:(unsigned)arg4 withPreviousLength:(unsigned short)arg5 outLength:(unsigned short*)arg6 ;
+(char*)prepareForDataOfLength:(unsigned)arg1 atIndex:(unsigned)arg2 withPreviousLength:(unsigned)arg3 inPackedData:(CFDataRef)arg4 packedDataSize:(unsigned)arg5 ;
+(BOOL)setData:(char*)arg1 ofLength:(unsigned)arg2 atIndex:(unsigned)arg3 withPreviousLength:(unsigned)arg4 inPackedData:(CFDataRef)arg5 packedDataSize:(unsigned)arg6 ;
+(id)dumpDataToHexadecimalString:(char*)arg1 start:(unsigned)arg2 stop:(unsigned)arg3 nicelyFormatted:(BOOL)arg4 ;
@end

