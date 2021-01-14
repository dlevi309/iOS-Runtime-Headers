/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusGuideRegion.h>

@protocol _UIFocusRegionContainer;
@interface _UIFocusContainerGuideRegion : _UIFocusGuideRegion {

	id<_UIFocusRegionContainer> _contentFocusRegionContainer;

}

@property (assign,nonatomic,__weak) id<_UIFocusRegionContainer> contentFocusRegionContainer;              //@synthesize contentFocusRegionContainer=_contentFocusRegionContainer - In the implementation block
-(void)setContentFocusRegionContainer:(id<_UIFocusRegionContainer>)arg1 ;
-(id<_UIFocusRegionContainer>)contentFocusRegionContainer;
-(id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2 ;
-(id)_visualRepresentationColor;
-(unsigned long long)_focusableBoundaries;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

