/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFActionNamedPrivateVars;

@interface PDFActionNamed : PDFAction <NSCopying> {

	PDFActionNamedPrivateVars* _private2;

}

@property (assign,nonatomic) long long name; 
-(void)commonInit;
-(long long)name;
-(id)initWithName:(long long)arg1 ;
-(id)description;
-(void)setName:(long long)arg1 ;
-(id)toolTip;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const CFDictionaryRef)createDictionaryRef;
-(void)addNameToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
@end

