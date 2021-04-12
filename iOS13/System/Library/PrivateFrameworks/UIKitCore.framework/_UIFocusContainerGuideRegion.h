/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusGuideRegion.h>

@protocol _UIFocusRegionContainer;
@interface _UIFocusContainerGuideRegion : _UIFocusGuideRegion {

	id<_UIFocusRegionContainer> _contentFocusRegionContainer;

}

@property (assign,nonatomic,__weak) id<_UIFocusRegionContainer> contentFocusRegionContainer;              //@synthesize contentFocusRegionContainer=_contentFocusRegionContainer - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1 ;
-(void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setContentFocusRegionContainer:(id<_UIFocusRegionContainer>)arg1 ;
-(id<_UIFocusRegionContainer>)contentFocusRegionContainer;
-(id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2 ;
-(id)_visualRepresentationColor;
-(unsigned long long)_focusableBoundaries;
@end

