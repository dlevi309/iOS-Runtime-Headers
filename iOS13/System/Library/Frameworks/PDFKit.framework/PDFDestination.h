/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFDestinationPrivate, PDFPage;

@interface PDFDestination : NSObject <NSCopying> {

	PDFDestinationPrivate* _private;

}

@property (nonatomic,__weak,readonly) PDFPage * page; 
@property (nonatomic,readonly) CGPoint point; 
@property (assign,nonatomic) double zoom; 
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(long long)compare:(id)arg1 ;
-(CGPoint)point;
-(void)commonInit;
-(void)setZoom:(double)arg1 ;
-(double)zoom;
-(PDFPage *)page;
-(id)document;
-(id)initWithDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 ;
-(const CFArrayRef)createArrayRef;
-(id)initWithPage:(id)arg1 atPoint:(CGPoint)arg2 ;
@end

