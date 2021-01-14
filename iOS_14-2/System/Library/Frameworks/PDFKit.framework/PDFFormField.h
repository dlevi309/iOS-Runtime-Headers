/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFFormFieldPrivateVars;

@interface PDFFormField : NSObject <NSCopying> {

	PDFFormFieldPrivateVars* _private;

}
-(id)defaultStringValue;
-(void)setButtonType:(long long)arg1 ;
-(void)setDocument:(id)arg1 ;
-(id)stringValue;
-(void)commonInit;
-(void)setStringValue:(id)arg1 ;
-(id)description;
-(id)fieldName;
-(int)fieldType;
-(id)document;
-(void)setFieldName:(id)arg1 ;
-(long long)buttonType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(CFDictionaryRef)dictionaryRef;
-(CFDictionaryRef)createDictionaryRef;
-(void)addFieldTypeToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithAnnotation:(id)arg1 ;
-(void)addFieldNameToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithFormDictionary:(CGPDFDictionaryRef)arg1 ;
-(void)clearDictionaryRef;
-(BOOL)writeDefaultValue;
-(void)setFieldType:(int)arg1 ;
-(void)setDefaultStringValue:(id)arg1 ;
-(void)setWriteDefaultValue:(BOOL)arg1 ;
-(BOOL)_isRedacted;
-(void)addNameValueToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addStringValueToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addNameDefaultValueToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addStringDefaultValueToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)commonCreateDictionaryRef:(CFDictionaryRef)arg1 ;
@end

