/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol _UIImageViewLoadingDelegate;
@class UIImageView, UIImage, UIImageSymbolConfiguration, NSArray, CIContext, UILayoutGuide, NSMapTable, _UIImageLoader, UIView, NSString;

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
	_UIImageLoader* _imageLoader;
	id<_UIImageViewLoadingDelegate> _loadingDelegate;
	UIImage* _imageBeingSetByLoader;
	UIView* _placeholderView;
	struct {
		unsigned highlighted : 1;
		unsigned masksTemplateImages : 1;
		unsigned adjustsImageSizeForAccessibilityContentSizeCategory : 1;
		unsigned startingLoad : 1;
		unsigned enqueueingLoad : 1;
		unsigned stoppingLoad : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initForImageView:(id)arg1 ;
@end

