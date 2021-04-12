/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)fields;
-(void)commonInit;
-(void)setFields:(NSArray *)arg1 ;
-(id)toolTip;
-(const CFDictionaryRef)createDictionaryRef;
-(void)addFlagsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(void)addFieldsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(BOOL)fieldsIncludedAreCleared;
-(void)setFieldsIncludedAreCleared:(BOOL)arg1 ;
@end

