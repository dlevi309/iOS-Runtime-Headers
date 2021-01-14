/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFFormPrivateVars;

@interface PDFForm : NSObject <NSCopying> {

	PDFFormPrivateVars* _private;

}
-(id)init;
-(void)setDocument:(id)arg1 ;
-(id)fieldNames;
-(id)description;
-(id)initWithDocument:(id)arg1 ;
-(id)document;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(CFDictionaryRef)createDictionaryRef;
-(id)stringValueForFieldNamed:(id)arg1 ;
-(void)setStringValue:(id)arg1 forFieldNamed:(id)arg2 postFormChangeNotification:(BOOL)arg3 ;
-(id)fieldNamed:(id)arg1 ;
-(void)addFormField:(id)arg1 ;
-(void)_commonResetForm:(id)arg1 inclusive:(BOOL)arg2 ;
-(void)addNeedsAppearanceToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)defaultStringValueForFieldNamed:(id)arg1 ;
-(CGPDFStringRef)defaultDAStringRef;
-(void)removeFormFieldWithFieldName:(id)arg1 ;
-(void)resetFormForFields:(id)arg1 ;
-(void)resetFormExcludingFields:(id)arg1 ;
@end

