/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSAttributedString, CATextLayer, CALayer, NSString;

@interface AVPictureInPictureIndicatorSublayer : CALayer {

	NSAttributedString* _attributedText;
	CGSize _imageSize;
	NSEdgeInsets _languageAwareOutsets;
	double _lineHeight;
	double _baselineOffset;
	CATextLayer* _textLayer;
	CALayer* _imageLayer;
	NSString* _customText;

}

@property (nonatomic,copy) NSString * customText;              //@synthesize customText=_customText - In the implementation block
-(void)layoutSublayers;
-(id)init;
-(void)setCustomText:(NSString *)arg1 ;
-(id)initWithDisplayScale:(double)arg1 placeholderImage:(CGImageRef)arg2 opaque:(BOOL)arg3 ;
-(void)layoutSublayersWithTextAndImageUsingInsetBounds:(CGRect)arg1 ;
-(CGRect)textBoundingRectWhenDrawnInRect:(CGRect)arg1 ;
-(BOOL)canRenderAttributedTextWithoutTruncationInsideRect:(CGRect)arg1 ;
-(NSString *)customText;
@end

