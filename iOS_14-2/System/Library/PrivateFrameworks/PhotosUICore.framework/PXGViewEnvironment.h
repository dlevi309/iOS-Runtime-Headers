/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UITraitCollection;

@interface PXGViewEnvironment : NSObject <NSCopying> {

	BOOL _accessibilityEnabled;
	UIColor* _backgroundColor;
	UIColor* _tintColor;
	UITraitCollection* _traitCollection;
	long long _userInterfaceStyle;
	CGColorRef _selectionHighlightColor;

}

@property (nonatomic,readonly) UIColor * backgroundColor;                        //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) long long userInterfaceStyle;                     //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
@property (nonatomic,readonly) CGColorRef selectionHighlightColor;               //@synthesize selectionHighlightColor=_selectionHighlightColor - In the implementation block
@property (nonatomic,readonly) BOOL accessibilityEnabled;                        //@synthesize accessibilityEnabled=_accessibilityEnabled - In the implementation block
-(UITraitCollection *)traitCollection;
-(long long)userInterfaceStyle;
-(CGColorRef)selectionHighlightColor;
-(BOOL)accessibilityEnabled;
-(UIColor *)backgroundColor;
-(id)initWithView:(id)arg1 accessibilityEnabled:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

