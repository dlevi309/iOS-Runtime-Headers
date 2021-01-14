/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@interface SlalomUtils : NSObject
+(int)isValidFelicaBlock:(id)arg1 ;
+(unsigned long long)readBitsValueFromBuffer:(char*)arg1 bitPosition:(int)arg2 length:(int)arg3 ;
+(unsigned short)readUInt16FromBytes:(char*)arg1 ;
+(unsigned long long)getBitsFrom:(unsigned long long)arg1 numberOfBits:(int)arg2 startingFrom:(int)arg3 ;
+(unsigned)readUInt24FromBytes:(char*)arg1 ;
+(unsigned long long)readNumberFromBytes:(char*)arg1 numberOfBytes:(int)arg2 ;
@end

