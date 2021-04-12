/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(CGRect)frame;
-(UIView *)view;
-(id)initWithView:(id)arg1 ;
-(BOOL)hidesImage;
-(BOOL)ignoresAccessibilityFilters;
-(id)_initWithNoImageAndFrame:(CGRect)arg1 ;
-(id)initWithImage:(id)arg1 frame:(CGRect)arg2 ignoreAccessibilityFilters:(BOOL)arg3 ;
-(id)initHidingDragImage;
@end

