/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol PDFMarkupMenuViewDelegate;
#import <PDFKit/PDFKit-Structs.h>
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
	CGRect viewFrame;

}
@end

