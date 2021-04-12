/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPFontInfo : NSObject <CPDisposable> {

	CFDataRef fontData;
	const char* dataPtr;
	unsigned offset;
	unsigned fontDataLength;
	BOOL valid;

}
-(void)finalize;
-(void)dispose;
-(float)readFloat;
-(void)dealloc;
-(BOOL)getDescriptor:(SCD_Struct_CP29*)arg1 ;
-(unsigned char)readByte;
-(int)kernUnitsPerEm;
-(unsigned)readUnsignedLong;
-(CGRect)readRect;
-(int)readLong;
-(id)initWithFontData:(CFDataRef)arg1 ;
-(CFDataRef)newKernData;
@end

