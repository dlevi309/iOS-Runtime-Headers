/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/libGSFont.dylib
*/


#import <libGSFont.dylib/libGSFont.dylib-Structs.h>
@class NSString;

@interface _UIFontExtraData : NSObject {

	double _ascender;
	double _descender;
	double _lineHeight;
	double _lineGap;
	struct {
		unsigned _initialized : 1;
		unsigned _isSystemFont : 1;
		unsigned _hasKernPair : 1;
		unsigned _unused : 1;
		unsigned _isIBTextStyleFont : 1;
		unsigned _isIBScaledFont : 1;
	}  _fFlags;
	NSString* _textStyleForScaling;
	double _pointSizeForScaling;
	double _maximumPointSizeAfterScaling;

}
@end

