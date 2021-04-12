/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFActionGoToPrivateVars, PDFDestination;

@interface PDFActionGoTo : PDFAction <NSCopying> {

	PDFActionGoToPrivateVars* _private2;

}

@property (nonatomic,retain) PDFDestination * destination; 
-(void)setDestination:(PDFDestination *)arg1 ;
-(id)initWithDestination:(id)arg1 ;
-(void)commonInit;
-(id)description;
-(id)toolTip;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PDFDestination *)destination;
-(const CFDictionaryRef)createDictionaryRef;
-(void)addDestinationToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(id)toolTipNoLabel;
@end

