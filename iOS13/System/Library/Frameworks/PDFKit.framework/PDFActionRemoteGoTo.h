/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFActionRemoteGoToPrivateVars, NSURL;

@interface PDFActionRemoteGoTo : PDFAction <NSCopying> {

	PDFActionRemoteGoToPrivateVars* _private2;

}

@property (assign,nonatomic) unsigned long long pageIndex; 
@property (assign,nonatomic) CGPoint point; 
@property (nonatomic,copy) NSURL * URL; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(void)commonInit;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(id)toolTip;
-(const CFDictionaryRef)createDictionaryRef;
-(void)addDestinationToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(id)toolTipNoLabel;
-(id)initWithPageIndex:(unsigned long long)arg1 atPoint:(CGPoint)arg2 fileURL:(id)arg3 ;
@end

