/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDImageProvider.h>

@interface TSDPDFImageProvider : TSDImageProvider {

	CGPDFDocumentRef mPDFDocument;
	CGSize mNaturalSize;

}
-(void)dealloc;
-(BOOL)isValid;
-(void)flush;
-(CGSize)naturalSize;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(CGPDFDocumentRef)CGPDFDocument;
-(BOOL)hasFlushableContent;
-(void)p_loadIfNecessary;
-(CGPDFDocumentRef)p_load;
-(long long)pageAngle;
@end

