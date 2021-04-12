/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContentEffect.h>
#import <UIKitCore/_UIImageContentLayoutTarget.h>

@class NSString;

@interface _UIImageContentLayoutDrawingTarget : NSObject <_UIImageContentEffect, _UIImageContentLayoutTarget> {

	double _preferredContentScaleFactor;
	CGRect _bounds;

}

@property (nonatomic,readonly) CGRect bounds;                                             //@synthesize bounds=_bounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long semanticContentAttribute; 
@property (nonatomic,readonly) long long contentMode; 
@property (nonatomic,readonly) BOOL _hasContentGravity; 
@property (nonatomic,readonly) double preferredContentScaleFactor;                        //@synthesize preferredContentScaleFactor=_preferredContentScaleFactor - In the implementation block
@property (nonatomic,readonly) BOOL _layoutShouldFlipHorizontalOrientations; 
-(CGRect)bounds;
-(long long)contentMode;
-(BOOL)_hasContentGravity;
-(double)preferredContentScaleFactor;
-(id)_effectForRenderingSource:(id)arg1 ;
-(BOOL)_layoutShouldFlipHorizontalOrientations;
-(id)_renditionForSource:(id)arg1 size:(CGSize)arg2 withCGImageProvider:(/*^block*/id)arg3 lazy:(BOOL)arg4 ;
-(long long)semanticContentAttribute;
@end

