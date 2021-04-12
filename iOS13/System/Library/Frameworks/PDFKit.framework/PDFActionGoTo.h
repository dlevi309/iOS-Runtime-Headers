/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PDFDestination *)destination;
-(void)setDestination:(PDFDestination *)arg1 ;
-(void)commonInit;
-(id)initWithDestination:(id)arg1 ;
-(id)toolTip;
-(const CFDictionaryRef)createDictionaryRef;
-(void)addDestinationToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(id)toolTipNoLabel;
@end

