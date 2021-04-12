/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFActionURLPrivateVars, NSURL;

@interface PDFActionURL : PDFAction <NSCopying> {

	PDFActionURLPrivateVars* _private2;

}

@property (getter=isSuspiciousURL,nonatomic,readonly) BOOL suspiciousURL; 
@property (nonatomic,copy) NSURL * URL; 
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)commonInit;
-(id)description;
-(NSURL *)URL;
-(id)toolTip;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const CFDictionaryRef)createDictionaryRef;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(BOOL)isSuspiciousURL;
@end

