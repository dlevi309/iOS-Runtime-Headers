/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}
@end

