/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol PDFTilePoolDelegate;
#import <PDFKit/PDFKit-Structs.h>
@class PDFPage, PDFRenderingProperties;

@interface TileRenderRequest : NSObject {

	id<PDFTilePoolDelegate> target;
	PDFPage* page;
	PDFRenderingProperties* renderingProperties;
	CGRect tileFrame;
	double zoomFactor;
	CGAffineTransform matrix;
	int tag;

}
@end

