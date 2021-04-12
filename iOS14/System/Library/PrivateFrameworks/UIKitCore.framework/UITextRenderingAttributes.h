/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

