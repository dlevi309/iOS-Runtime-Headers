/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)finalize;
-(void)dispose;
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
-(void)doTable;
-(id)initWithCGFont:(CGFontRef)arg1 ;
-(short)readShort;
-(CFDictionaryRef)createKernTable;
@end

