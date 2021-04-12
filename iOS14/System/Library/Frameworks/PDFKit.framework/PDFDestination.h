/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setZoom:(double)arg1 ;
-(double)zoom;
-(CGPoint)point;
-(long long)compare:(id)arg1 ;
-(PDFPage *)page;
-(id)init;
-(void)commonInit;
-(id)description;
-(int)type;
-(id)document;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 ;
-(const CFArrayRef)createArrayRef;
-(id)initWithPage:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)pageIfExists;
@end

