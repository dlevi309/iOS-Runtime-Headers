/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFFormFieldPrivateVars;

@interface PDFFormField : NSObject <NSCopying> {

	PDFFormFieldPrivateVars* _private;

}
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)commonInit;
-(long long)buttonType;
-(void)setDocument:(id)arg1 ;
-(id)document;
-(id)fieldName;
-(void)setFieldName:(id)arg1 ;
-(CFDictionaryRef)dictionaryRef;
-(CFDictionaryRef)createDictionaryRef;
-(void)addFieldTypeToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithAnnotation:(id)arg1 ;
-(void)addFieldNameToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithFormDictionary:(CGPDFDictionaryRef)arg1 ;
-(id)defaultStringValue;
-(void)clearDictionaryRef;
-(int)fieldType;
-(BOOL)writeDefaultValue;
-(void)setFieldType:(int)arg1 ;
-(void)setButtonType:(long long)arg1 ;
-(void)setDefaultStringValue:(id)arg1 ;
-(void)setWriteDefaultValue:(BOOL)arg1 ;
-(void)addNameValueToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addStringValueToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addNameDefaultValueToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addStringDefaultValueToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)commonCreateDictionaryRef:(CFDictionaryRef)arg1 ;
@end

