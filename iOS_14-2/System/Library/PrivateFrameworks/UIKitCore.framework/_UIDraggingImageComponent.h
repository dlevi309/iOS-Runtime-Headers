/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIView, UIImage;

@interface _UIDraggingImageComponent : NSObject <NSCopying> {

	BOOL _ignoresAccessibilityFilters;
	BOOL _hidesImage;
	UIView* _view;
	UIImage* _image;
	CGRect _frame;

}

@property (nonatomic,readonly) UIView * view;                                 //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                  //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) BOOL ignoresAccessibilityFilters;              //@synthesize ignoresAccessibilityFilters=_ignoresAccessibilityFilters - In the implementation block
@property (nonatomic,readonly) BOOL hidesImage;                               //@synthesize hidesImage=_hidesImage - In the implementation block
-(BOOL)hidesImage;
-(CGRect)frame;
-(UIImage *)image;
-(id)description;
-(UIView *)view;
-(BOOL)ignoresAccessibilityFilters;
-(id)initWithView:(id)arg1 ;
-(id)_initWithNoImageAndFrame:(CGRect)arg1 ;
-(id)initHidingDragImage;
-(id)initWithImage:(id)arg1 frame:(CGRect)arg2 ignoreAccessibilityFilters:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

