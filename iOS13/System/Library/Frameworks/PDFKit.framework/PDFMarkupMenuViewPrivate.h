/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol PDFMarkupMenuViewDelegate;
@class NSDictionary, NSArray, _UIBackdropView, UIImageView;

@interface PDFMarkupMenuViewPrivate : NSObject {

	unsigned long long markupStyle;
	unsigned long long markupNoteStyle;
	id<PDFMarkupMenuViewDelegate> delegate;
	NSDictionary* menuControls;
	NSArray* activeControlKeys;
	double calloutArrowX;
	BOOL calloutArrowPointsUp;
	_UIBackdropView* backgroundView;
	_UIBackdropView* separatorBackgroundView;
	UIImageView* blurMaskView;
	UIImageView* tintMaskView;
	UIImageView* separatorMaskView;

}
@end

