/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIFont;

@interface UITextRenderingAttributes : NSObject <NSCopying> {

	UIFont* _font;
	double _minimumFontSize;
	double _actualFontSize;
	double _lineSpacing;
	long long _lineBreakMode;
	long long _baselineAdjustment;
	double _trackingAdjustment;
	double _minimumTrackingAdjustment;
	double _actualTrackingAdjustment;
	long long _alignment;
	BOOL _includeEmoji;
	CGRect _truncationRect;
	BOOL _drawUnderline;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

