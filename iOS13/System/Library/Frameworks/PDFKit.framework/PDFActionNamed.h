/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(long long)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(long long)arg1 ;
-(id)initWithName:(long long)arg1 ;
-(void)commonInit;
-(id)toolTip;
-(const CFDictionaryRef)createDictionaryRef;
-(void)addNameToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
@end

