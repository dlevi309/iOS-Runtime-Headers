/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIImageView, UIImage, UIImageSymbolConfiguration, NSArray, CIContext, UILayoutGuide, NSMapTable, NSString;

@interface _UIImageViewExtendedStorage : NSObject <CAAnimationDelegate> {

	UIImageView* _imageView;
	UIImage* _image;
	UIImage* _highlightedImage;
	UIImage* _configuredImage;
	UIImage* _configuredHighlightedImage;
	UIImageSymbolConfiguration* _preferredSymbolConfiguration;
	UIImageSymbolConfiguration* _overridingSymbolConfiguration;
	NSArray* _animationImages;
	NSArray* _highlightedAnimationImages;
	double _animationDuration;
	long long _animationRepeatCount;
	long long _defaultRenderingMode;
	unsigned long long _templateImageRenderingEffects;
	UIImage* _displayedImage;
	UIImage* _displayedHighlightedImage;
	CIContext* _CIContext;
	UILayoutGuide* _imageContentGuide;
	NSMapTable* _layouts;
	unsigned _drawMode;
	SCD_Struct_UI78 _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initForImageView:(id)arg1 ;
@end

