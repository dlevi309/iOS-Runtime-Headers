/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, NSLock;

@interface PDFViewLayoutPrivate : NSObject {

	id delegate;
	BOOL delegateKnowsMargins;
	BOOL delegateKnowsDisplayMode;
	BOOL delegateKnowsDisplayAsBook;
	BOOL delegateKnowsDisplayBox;
	BOOL delegateKnowsDisplayRTL;
	BOOL delegateKnowsDisplaysDirection;
	BOOL delegateKnowsDocumentMargins;
	BOOL delegateKnowsIsUsingPageViewController;
	PDFDocument* document;
	unsigned long long pageCount;
	NSLock* pageLayoutLock;
	CGRect* pageLayoutBounds;
	CGSize singlePageContinuousSize;
	CGSize twoUpContinousSize;
	long long cachedContinuousSizeDisplayDirection;

}
@end

