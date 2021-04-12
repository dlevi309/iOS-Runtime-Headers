/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPFontKerning : NSObject <CPDisposable> {

	CFDataRef kernTable;
	const char* dataPtr;
	unsigned offset;
	unsigned kernTableLength;
	CFDictionaryRef kernDictionary;
	BOOL override;
	BOOL valid;

}
-(void)finalize;
-(void)dispose;
-(void)doTable;
-(void)dealloc;
-(unsigned char)readByte;
-(unsigned)readUnsignedLong;
-(id)initWithKernData:(CFDataRef)arg1 ;
-(unsigned short)readUnsignedShort;
-(void)doKerningPair;
-(void)doSubtableFormat0;
-(void)doSubtableFormat1;
-(void)doSubtableFormat2;
-(void)doSubtableFormat3;
-(void)doOTSubtable;
-(void)doTTSubtable;
-(id)initWithCGFont:(CGFontRef)arg1 ;
-(short)readShort;
-(CFDictionaryRef)createKernTable;
@end

