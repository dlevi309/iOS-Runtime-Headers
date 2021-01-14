/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFActionResetFormPrivateVars, NSArray;

@interface PDFActionResetForm : PDFAction <NSCopying> {

	PDFActionResetFormPrivateVars* _private2;

}

@property (nonatomic,copy) NSArray * fields; 
@property (assign,nonatomic) BOOL fieldsIncludedAreCleared; 
-(void)setFields:(NSArray *)arg1 ;
-(NSArray *)fields;
-(id)init;
-(void)commonInit;
-(id)description;
-(id)toolTip;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const CFDictionaryRef)createDictionaryRef;
-(void)addFlagsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(void)addFieldsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(BOOL)fieldsIncludedAreCleared;
-(void)setFieldsIncludedAreCleared:(BOOL)arg1 ;
@end

