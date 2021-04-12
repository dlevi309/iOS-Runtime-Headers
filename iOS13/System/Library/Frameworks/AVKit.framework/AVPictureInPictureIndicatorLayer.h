/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSAttributedString, CATextLayer, CALayer;

@interface AVPictureInPictureIndicatorLayer : CALayer {

	NSAttributedString* _attributedText;
	CGSize _imageSize;
	NSEdgeInsets _languageAwareOutsets;
	double _lineHeight;
	double _baselineOffset;
	CATextLayer* _textLayer;
	CALayer* _imageLayer;

}
-(id)init;
-(void)layoutSublayers;
-(id)initWithDisplayScale:(double)arg1 placeholderImage:(CGImageRef)arg2 opaque:(BOOL)arg3 ;
-(CGRect)textBoundingRectWhenDrawnInRect:(CGRect)arg1 ;
@end

