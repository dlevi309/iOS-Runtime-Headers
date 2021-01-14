/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class UIColor;

@interface PXGadgetSpec : NSObject {

	BOOL _shouldInsetAllContent;
	BOOL _shouldUseAccessibilityLayout;
	long long _scrollAxis;
	double _interItemSpacing;
	long long _userInterfaceIdiom;
	long long _layoutSizeClass;
	long long _layoutOrientation;
	double _displayScale;
	double _layoutReferenceWidth;
	double _layoutReferenceHeight;
	UIColor* _backgroundColor;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _layoutInsets;
	UIEdgeInsets _accessoryViewInset;

}

@property (nonatomic,readonly) UIEdgeInsets contentInsets;                     //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) long long scrollAxis;                           //@synthesize scrollAxis=_scrollAxis - In the implementation block
@property (nonatomic,readonly) BOOL shouldInsetAllContent;                     //@synthesize shouldInsetAllContent=_shouldInsetAllContent - In the implementation block
@property (nonatomic,readonly) double interItemSpacing;                        //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (nonatomic,readonly) long long userInterfaceIdiom;                   //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
@property (nonatomic,readonly) long long layoutSizeClass;                      //@synthesize layoutSizeClass=_layoutSizeClass - In the implementation block
@property (nonatomic,readonly) long long layoutOrientation;                    //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (nonatomic,readonly) double displayScale;                            //@synthesize displayScale=_displayScale - In the implementation block
@property (nonatomic,readonly) double layoutReferenceWidth;                    //@synthesize layoutReferenceWidth=_layoutReferenceWidth - In the implementation block
@property (nonatomic,readonly) double layoutReferenceHeight;                   //@synthesize layoutReferenceHeight=_layoutReferenceHeight - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets layoutInsets;                      //@synthesize layoutInsets=_layoutInsets - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseAccessibilityLayout;              //@synthesize shouldUseAccessibilityLayout=_shouldUseAccessibilityLayout - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets accessoryViewInset;                //@synthesize accessoryViewInset=_accessoryViewInset - In the implementation block
+(double)sectionHeaderHeightForStyle:(unsigned long long)arg1 dividerHidden:(BOOL)arg2 ;
+(double)sectionHeaderTitleHeightForStyle:(unsigned long long)arg1 dividerHidden:(BOOL)arg2 ;
+(double)sectionHeaderTopSpacingForStyle:(unsigned long long)arg1 ;
+(double)sectionHeaderTitleBottomSpacingForStyle:(unsigned long long)arg1 ;
+(id)horizontalContentInsetsInterpolator;
-(double)interItemSpacing;
-(double)layoutReferenceWidth;
-(long long)userInterfaceIdiom;
-(long long)layoutSizeClass;
-(long long)layoutOrientation;
-(double)displayScale;
-(UIEdgeInsets)contentInsets;
-(BOOL)shouldInsetAllContent;
-(long long)scrollAxis;
-(BOOL)shouldInsetContentForTraitCollection:(id)arg1 ;
-(UIEdgeInsets)accessoryViewInset;
-(BOOL)shouldUseAccessibilityLayout;
-(UIColor *)backgroundColor;
-(UIEdgeInsets)acccessoryViewInsetForTraitCollection:(id)arg1 ;
-(id)initWithTraitCollection:(id)arg1 scrollAxis:(long long)arg2 ;
-(UIEdgeInsets)layoutInsets;
-(double)columnWidthForColumnSpan:(long long)arg1 ;
-(BOOL)isEqualToGadgetSpec:(id)arg1 ;
-(double)layoutReferenceHeight;
-(double)columnSpacingForColumnSpan:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

